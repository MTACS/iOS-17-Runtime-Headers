
@interface MRUConversationAwarenessController : NSObject <MRUSystemOutputDeviceRouteControllerObserver> {
    bool  _conversationAwarenessEnabled;
    bool  _conversationAwarenessSupported;
    <MRUConversationAwarenessControllerDelegate> * _delegate;
    MRUSystemOutputDeviceRouteController * _outputDeviceRouteController;
}

@property (getter=isConversationAwarenessEnabled, nonatomic, readonly) bool conversationAwarenessEnabled;
@property (getter=isConversationAwarenessSupported, nonatomic, readonly) bool conversationAwarenessSupported;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MRUConversationAwarenessControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MRUSystemOutputDeviceRouteController *outputDeviceRouteController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithOutputDeviceRouteController:(id)arg1;
- (bool)isConversationAwarenessEnabled;
- (bool)isConversationAwarenessSupported;
- (id)outputDeviceRouteController;
- (void)setConversationAwarenessEnabled:(bool)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)systemOutputDeviceRouteControllerDidUpdateOutputDeviceProperties:(id)arg1;
- (void)updateConversationAwarenessEnabled;
- (void)updateConversationAwarenessSupported;

@end
