
@interface LAUIAuthenticationView : UIView <LAUIAuthentication, LAUIAuthenticationCoreDelegate> {
    LAUIAuthenticationCore * _authenticationCore;
    <LAUIAuthenticationDelegate> * _delegate;
    bool  _fastAnimations;
    long long  _glyphStyle;
    LAUIPKGlyphWrapper * _glyphWrapper;
    bool  _idleWhenDone;
    long long  _lastState;
    long long  _style;
}

@property (nonatomic, readonly) LAUIAuthenticationCore *authenticationCore;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <LAUIAuthenticationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fastAnimations;
@property (nonatomic) long long glyphStyle;
@property (nonatomic, readonly) LAUIPKGlyphWrapper *glyphWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool idleWhenDone;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultRect;

- (void).cxx_destruct;
- (void)_biometryIdle;
- (void)_setupMechanisms:(unsigned long long)arg1 context:(id)arg2;
- (void)_setupView;
- (long long)_stateOfSuccess;
- (id)authenticationCore;
- (void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
- (void)biometricNoMatch;
- (void)biometryState:(long long)arg1 completionHandler:(id /* block */)arg2;
- (id)callerIconBundlePath;
- (id)delegate;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (bool)disableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (bool)enableMechanism:(unsigned long long)arg1 error:(id*)arg2;
- (bool)fastAnimations;
- (long long)glyphStyle;
- (id)glyphWrapper;
- (bool)idleWhenDone;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mechanisms:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 mechanisms:(unsigned long long)arg2 context:(id)arg3;
- (id)initWithMechanisms:(unsigned long long)arg1;
- (id)initWithMechanisms:(unsigned long long)arg1 context:(id)arg2;
- (bool)isMechanismActive:(unsigned long long)arg1;
- (bool)isMechanismAvailable:(unsigned long long)arg1 error:(id*)arg2;
- (bool)isMechanismEnabled:(unsigned long long)arg1;
- (id)localizedCallerName;
- (void)notification:(long long)arg1 original:(id)arg2 mechanism:(unsigned long long)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFastAnimations:(bool)arg1;
- (void)setGlyphStyle:(long long)arg1;
- (void)setIdleWhenDone:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)tappedFaceID:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
