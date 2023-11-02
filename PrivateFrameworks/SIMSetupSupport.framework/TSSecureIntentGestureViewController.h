
@interface TSSecureIntentGestureViewController : PRXCardContentViewController <LAUIDelegate, TSSetupFlowItem> {
    PRXAction * _confirmTextView;
    <TSSIMSetupFlowDelegate> * _delegate;
    NSData * _externalizedContext;
    PKGlyphView * _glyphView;
    bool  _isExternalizedContextSent;
    bool  _isLocalConvertFlow;
    bool  _isSecureIntentFailed;
    LAUIPhysicalButtonView * _physicalButtonView;
}

@property (nonatomic, retain) PRXAction *confirmTextView;
@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *externalizedContext;
@property (nonatomic, retain) PKGlyphView *glyphView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isExternalizedContextSent;
@property bool isLocalConvertFlow;
@property bool isSecureIntentFailed;
@property (nonatomic, retain) LAUIPhysicalButtonView *physicalButtonView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createPKGlyphView;
- (void)_doubleClickGesture;
- (void)_handleUserCancelNotification:(id)arg1;
- (void)_maybeSendExternalizedContext:(id)arg1;
- (void)_updateAuthenticationStatus:(bool)arg1;
- (void)_updateLayoutConstraint;
- (id)confirmTextView;
- (void)dealloc;
- (id)delegate;
- (void)event:(long long)arg1 params:(id)arg2 reply:(id /* block */)arg3;
- (id)externalizedContext;
- (id)glyphView;
- (id)initWithExternalizedContext:(id)arg1 isLocalConvertFlow:(bool)arg2;
- (bool)isExternalizedContextSent;
- (bool)isLocalConvertFlow;
- (bool)isSecureIntentFailed;
- (id)physicalButtonView;
- (void)setConfirmTextView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExternalizedContext:(id)arg1;
- (void)setGlyphView:(id)arg1;
- (void)setIsExternalizedContextSent:(bool)arg1;
- (void)setIsLocalConvertFlow:(bool)arg1;
- (void)setIsSecureIntentFailed:(bool)arg1;
- (void)setPhysicalButtonView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
