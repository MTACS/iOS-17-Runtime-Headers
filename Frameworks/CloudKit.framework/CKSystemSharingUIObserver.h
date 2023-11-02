
@interface CKSystemSharingUIObserver : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    CKContainer * _container;
    id /* block */  _systemSharingUIDidSaveShareBlock;
    id /* block */  _systemSharingUIDidStopSharingBlock;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly) CKContainer *container;
@property (copy) id /* block */ systemSharingUIDidSaveShareBlock;
@property (copy) id /* block */ systemSharingUIDidStopSharingBlock;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_locked_handleSharingUIUpdatedShare:(id)arg1 recordID:(id)arg2 isDeleted:(bool)arg3 error:(id)arg4;
- (id)callbackQueue;
- (id)container;
- (void)handleSharingUIUpdatedShare:(id)arg1 recordID:(id)arg2 isDeleted:(bool)arg3 error:(id)arg4;
- (id)initWithContainer:(id)arg1;
- (void)setSystemSharingUIDidSaveShareBlock:(id /* block */)arg1;
- (void)setSystemSharingUIDidStopSharingBlock:(id /* block */)arg1;
- (id /* block */)systemSharingUIDidSaveShareBlock;
- (id /* block */)systemSharingUIDidStopSharingBlock;

@end
