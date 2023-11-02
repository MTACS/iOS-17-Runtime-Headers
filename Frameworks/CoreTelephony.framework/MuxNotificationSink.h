
@interface MuxNotificationSink : NSProxy <CoreTelephonyClientDelegateProxyInterface> {
    <MuxNotificationSinkDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MuxNotificationSinkDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)clientDidTriggerFault:(id)arg1;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;

@end
