
@interface ANCompanionConnection : NSObject {
    RPCompanionLinkClient * _companionLinkClient;
    <ANCompanionConnectionDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _rapportQueue;
}

@property (nonatomic, readonly) RPCompanionLinkClient *companionLinkClient;
@property (nonatomic) <ANCompanionConnectionDelegate> *delegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *rapportQueue;

- (void).cxx_destruct;
- (void)_registerForEvents;
- (void)_setupLink;
- (void)_tearDownLink;
- (void)broadcastAnnouncementPlayed:(id)arg1;
- (id)companionLinkClient;
- (id)delegate;
- (id)init;
- (id)rapportQueue;
- (void)setDelegate:(id)arg1;

@end
