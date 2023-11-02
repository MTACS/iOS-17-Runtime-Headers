
@interface PFStorageAnalyticsCalculator : NSObject {
    void analyticsTask;
    void channel;
    void fileManager;
    void managedObjectContext;
    void workQueue;
}

+ (id)live;

- (void).cxx_destruct;
- (id)init;
- (void)reportStorageUse;

@end
