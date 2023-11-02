
@interface CRKShareTargetBrowser : NSObject <CATTaskClientDelegate, CATTaskOperationNotificationDelegate, CRKShareTargetCollectorDelegate> {
    CATTaskClient * _instructorClient;
    CRKShareTargetCollector * _shareTargetCollector;
    CATTaskClient * _studentClient;
    CRKShareTargetBrowserTransportFactory * _transportFactory;
    bool  mBrowsing;
    <CRKShareTargetBrowserDelegate> * mDelegate;
    NSObject<OS_dispatch_queue> * mDelegateQueue;
    bool  mIsValid;
    CATOperationQueue * mOperationQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CATTaskClient *instructorClient;
@property (nonatomic, readonly) CRKShareTargetCollector *shareTargetCollector;
@property (nonatomic, retain) CATTaskClient *studentClient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CRKShareTargetBrowserTransportFactory *transportFactory;

- (void).cxx_destruct;
- (void)acquireStudentActivityAssertion;
- (void)acquireStudentActivityAssertionOperationDidFail:(id)arg1;
- (void)browseForInstructorTargetsOperationDidFail:(id)arg1;
- (void)browseForStudentTargetsOperationDidFail:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)connectToInstructord;
- (void)connectToStudentd;
- (void)dealloc;
- (void)delegateDidFindTargets:(id)arg1;
- (void)delegateDidInterruptWithError:(id)arg1;
- (void)delegateDidRemoveTargets:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (id)instructorClient;
- (void)invalidate;
- (void)invalidateClient:(id)arg1;
- (bool)isClientInvalidationError:(id)arg1;
- (id)makeShareTargetsWithDictionaries:(id)arg1 taskClient:(id)arg2;
- (void)resume;
- (void)setInstructorClient:(id)arg1;
- (void)setStudentClient:(id)arg1;
- (id)shareTargetCollector;
- (void)shareTargetCollector:(id)arg1 didFindTargets:(id)arg2;
- (void)shareTargetCollector:(id)arg1 didRemoveTargets:(id)arg2;
- (void)startBrowsingForInstructorTargets;
- (void)startBrowsingForStudentTargets;
- (id)studentClient;
- (void)suspend;
- (void)taskOperation:(id)arg1 didPostNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)tearDownInstructorClient;
- (void)tearDownStudentClient;
- (id)transportFactory;

@end
