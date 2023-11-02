
@interface CKSMSComposeQueuingRemoteViewControllerProxy : NSObject {
    NSMutableArray * _queuedInvocations;
    <CKSMSCompose> * _serviceViewControllerProxy;
}

@property (nonatomic, retain) NSMutableArray *queuedInvocations;
@property (nonatomic, retain) <CKSMSCompose> *serviceViewControllerProxy;

- (void).cxx_destruct;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)queuedInvocations;
- (id)serviceViewControllerProxy;
- (void)setQueuedInvocations:(id)arg1;
- (void)setServiceViewControllerProxy:(id)arg1;

@end
