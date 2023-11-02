
@interface AXElementInteractionManager : NSObject <AXUIClientDelegate> {
    struct __AXObserver { } * _axEventObserver;
    AXUIClient * _client;
    <AXElementInteractionManagerDelegate> * _delegate;
    bool  _displayCursor;
    AXElement * _focusedElement;
    bool  _interactionEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXElementInteractionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayCursor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_allowDelegateToDecideElement:(id)arg1;
- (id)_client;
- (id)_clientIdentifier;
- (void)_handleLayoutChange;
- (void)_handleScreenChange;
- (void)_highlightElement:(id)arg1;
- (void)_initializeAXObserver;
- (bool)_moveFocusByHitTesting:(long long)arg1;
- (void)_moveToElement:(id)arg1;
- (int)_registerForAXNotifications:(bool)arg1;
- (void)_sendMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 errorHandler:(id /* block */)arg3;
- (void)_sendMessageWithIdentifier:(unsigned long long)arg1 errorHandler:(id /* block */)arg2;
- (id)delegate;
- (bool)displayCursor;
- (void)endInteractionMode;
- (id)focusedElement;
- (id)init;
- (void)initializeFocus;
- (bool)performActivate;
- (bool)performDirectionalNavigation:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayCursor:(bool)arg1;
- (void)startInteractionMode;

@end
