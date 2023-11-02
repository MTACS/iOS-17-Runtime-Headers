
@interface AFUISceneConfiguration : NSObject <NSCopying> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    bool  _cancelSceneLoadingAfterTimeout;
    unsigned long long  _deactivationReasonMask;
    FBSDisplayConfiguration * _displayConfiguration;
    bool  _foreground;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialSafeAreaInsets;
    long long  _launchIntent;
    long long  _preferredDeferralMode;
    double  _sceneLoadingTimeOutDuration;
    FBSSceneParameters * _sceneParameters;
    long long  _userInterfaceStyle;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool cancelSceneLoadingAfterTimeout;
@property (nonatomic) unsigned long long deactivationReasonMask;
@property (nonatomic) bool foreground;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialBounds;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialSafeAreaInsets;
@property (nonatomic) long long launchIntent;
@property (nonatomic) long long preferredDeferralMode;
@property (nonatomic) double sceneLoadingTimeOutDuration;
@property (nonatomic, copy) FBSSceneParameters *sceneParameters;
@property (nonatomic) long long userInterfaceStyle;

+ (id)defaultSiriSceneConfigurationWithInitialBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onDisplay:(id)arg2;
+ (id)stringForInvalidationReason:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_initWithInitialBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 displayConfiguration:(id)arg2;
- (void)_setupPlatformSpecificDefaultSettings;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)cancelSceneLoadingAfterTimeout;
- (void)configureMutableSceneSettings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)deactivationReasonMask;
- (id)description;
- (bool)foreground;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialSafeAreaInsets;
- (long long)launchIntent;
- (long long)preferredDeferralMode;
- (double)sceneLoadingTimeOutDuration;
- (id)sceneParameters;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCancelSceneLoadingAfterTimeout:(bool)arg1;
- (void)setDeactivationReasonMask:(unsigned long long)arg1;
- (void)setForeground:(bool)arg1;
- (void)setInitialSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLaunchIntent:(long long)arg1;
- (void)setPreferredDeferralMode:(long long)arg1;
- (void)setSceneLoadingTimeOutDuration:(double)arg1;
- (void)setSceneParameters:(id)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (long long)userInterfaceStyle;

@end
