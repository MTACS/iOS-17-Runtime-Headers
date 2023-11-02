
@interface AXRemoteReceiver : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    <AXRemoteReceiverDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) RPCompanionLinkClient *companionLinkClient;
@property (nonatomic) <AXRemoteReceiverDelegate> *delegate;

- (void).cxx_destruct;
- (id)companionLinkClient;
- (id)delegate;
- (id)initWithEventID:(id)arg1 delegate:(id)arg2;
- (void)setCompanionLinkClient:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
