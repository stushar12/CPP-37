int maxProfit(int prices[] ,int n )
{
    int profit=0;
    for(int i=1;i<n;i++)
    {
        if(prices[i]>prices[i-1])
        profit=profit+(prices[i]-price[i-1]);
    }
    return profit;
}
