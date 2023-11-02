
@interface ActivityAwardsCore.ActivityAwardsQuery : ActivityAwardsCore.BaseQuery {
    void addedAwardsHandler;
    void connection;
    void initialAwardsHandler;
    void lock;
    void removedAwardsHandler;
    void updatedAwardsHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
