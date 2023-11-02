
@interface HMDCoreFollowUpManager : HMFObject <HMFLogging> {
    <HMDCoreFollowUpManagerDataSource> * _dataSource;
    NSOperationQueue * _followUpOperationQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) <HMDCoreFollowUpManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSOperationQueue *followUpOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)allPossibleFollowUpItemIdentifiers;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startAdvertising:(long long)arg1;
- (void)_stopAdvertising:(long long)arg1;
- (id)dataSource;
- (id)followUpOperationQueue;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)removeAllFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)startAdvertising:(long long)arg1;
- (void)stopAdvertising:(long long)arg1;
- (id)workQueue;

@end
