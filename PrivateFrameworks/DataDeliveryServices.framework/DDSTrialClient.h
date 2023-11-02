
@interface DDSTrialClient : NSObject <DDSTrialClient> {
    <DDSTrialClientDelegate> * _delegate;
    <TRINotificationToken> * _notificationToken;
    <DDSTRIClient> * _triClient;
    NSString * _triNamespaceName;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property <DDSTrialClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) <TRINotificationToken> *notificationToken;
@property (readonly) Class superclass;
@property (readonly) <DDSTRIClient> *triClient;
@property (readonly, copy) NSString *triNamespaceName;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)createWithWorkQueue:(id)arg1 query:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (void)fetchAssetWithCallback:(id /* block */)arg1;
- (id)initWithWorkQueue:(id)arg1 triClient:(id)arg2 triNamespaceName:(id)arg3;
- (id)notificationToken;
- (void)setDelegate:(id)arg1;
- (void)setNotificationToken:(id)arg1;
- (void)start;
- (id)triClient;
- (id)triNamespaceName;
- (id)workQueue;

@end
