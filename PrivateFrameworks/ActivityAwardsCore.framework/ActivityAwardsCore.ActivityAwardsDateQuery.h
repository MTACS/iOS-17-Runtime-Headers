
@interface ActivityAwardsCore.ActivityAwardsDateQuery : ActivityAwardsCore.BaseQuery {
    void connection;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  dateComponents;
    void initialAwardsHandler;
    void isActive;
    void lock;
    void updateAwardsHandler;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
