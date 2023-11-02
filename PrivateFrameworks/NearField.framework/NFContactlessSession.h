
@interface NFContactlessSession : NFSession <NFContactlessSessionCallbacks> {
    NFApplet * _activeApplet;
    NSDictionary * _appletsById;
    <NFContactlessSessionDelegate> * _delegate;
    bool  _fieldNotificationSent;
}

@property (readonly, retain) NFApplet *activeApplet;
@property (readonly, copy) NSString *debugDescription;
@property <NFContactlessSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activeApplet;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectFieldNotification:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didFelicaStateChange:(id)arg1;
- (void)didSelectApplet:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (bool)setActiveApplet:(id)arg1;
- (bool)setActiveApplet:(id)arg1 error:(id*)arg2;
- (void)setDelegate:(id)arg1;
- (bool)startCardEmulation;
- (bool)startCardEmulation:(id*)arg1;
- (bool)stopCardEmulation;
- (bool)stopCardEmulation:(id*)arg1;

@end
