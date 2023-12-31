
@interface FCCKPrivateDatabaseCKOperationResults : NSObject {
    NSObject<OS_dispatch_group> * _group;
    FCThreadSafeMutableArray * _threadSafeErrorsAndItemIDs;
    FCThreadSafeMutableArray * _threadSafeItems;
}

@property (nonatomic, readonly) NSError *combinedError;
@property (nonatomic, readonly) NSArray *combinedResultItems;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, retain) FCThreadSafeMutableArray *threadSafeErrorsAndItemIDs;
@property (nonatomic, retain) FCThreadSafeMutableArray *threadSafeItems;

- (void).cxx_destruct;
- (id)combinedError;
- (id)combinedResultItems;
- (id)group;
- (id)init;
- (void)notifyWhenFinishWithQoS:(long long)arg1 completionHandler:(id /* block */)arg2;
- (void)operationDidFinishWithItemIDs:(id)arg1 resultItems:(id)arg2 error:(id)arg3;
- (void)operationWillStart;
- (void)setGroup:(id)arg1;
- (void)setThreadSafeErrorsAndItemIDs:(id)arg1;
- (void)setThreadSafeItems:(id)arg1;
- (id)threadSafeErrorsAndItemIDs;
- (id)threadSafeItems;

@end
