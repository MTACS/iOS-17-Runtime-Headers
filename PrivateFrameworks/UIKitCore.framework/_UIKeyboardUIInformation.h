
@interface _UIKeyboardUIInformation : NSObject <NSCopying, NSSecureCoding> {
    bool  _animated;
    BKSAnimationFenceHandle * _animationFence;
    NSString * _applicationIdentifier;
    bool  _assistantBarVisible;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _assistantFrame;
    bool  _assistantOnScreenOnly;
    unsigned long long  _assistantPosition;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _beginFrame;
    NSString * _bundleIdentifier;
    bool  _changedAccessoryOnly;
    NSString * _currentInputMode;
    bool  _dueToRotation;
    double  _duration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    bool  _forceNotification;
    bool  _isLocal;
    bool  _keyboardOnScreen;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardPosition;
    unsigned long long  _keyboardScenePresentationMode;
    unsigned long long  _notification;
    unsigned long long  _options;
    long long  _orientation;
    bool  _requiresHeightForIntegratedAssistantBar;
    bool  _resizing;
    bool  _startNotification;
    bool  _tracking;
    unsigned long long  _uiPosition;
    bool  _wasCausedRemotely;
}

@property (readonly) bool animated;
@property (readonly, copy) BKSAnimationFenceHandle *animationFence;
@property (nonatomic, copy) NSString *applicationIdentifier;
@property bool assistantBarVisible;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assistantFrame;
@property (nonatomic) bool assistantOnScreenOnly;
@property (nonatomic) unsigned long long assistantPosition;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginFrame;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic) bool changedAccessoryOnly;
@property (nonatomic, copy) NSString *currentInputMode;
@property (nonatomic) bool dueToRotation;
@property (nonatomic) double duration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic) bool forceNotification;
@property bool isLocal;
@property (readonly) bool keyboardOnScreen;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardPosition;
@property unsigned long long keyboardScenePresentationMode;
@property (nonatomic) unsigned long long notification;
@property (nonatomic) unsigned long long options;
@property (readonly) long long orientation;
@property bool requiresHeightForIntegratedAssistantBar;
@property (nonatomic) bool resizing;
@property (getter=isStartNotification, nonatomic) bool startNotification;
@property (readonly) bool tracking;
@property unsigned long long uiPosition;
@property (nonatomic) bool wasCausedRemotely;

+ (id)animationFence;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addNotificationInfo:(id)arg1 isStart:(bool)arg2;
- (bool)animated;
- (id)animationFence;
- (id)applicationIdentifier;
- (bool)assistantBarVisible;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assistantFrame;
- (bool)assistantOnScreenOnly;
- (unsigned long long)assistantPosition;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginFrame;
- (id)bundleIdentifier;
- (bool)changedAccessoryOnly;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutFence;
- (id)currentInputMode;
- (id)description;
- (bool)dueToRotation;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (bool)forceNotification;
- (bool)hasValidNotification;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreen:(bool)arg2 animated:(bool)arg3 tracking:(bool)arg4 fence:(id)arg5;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreen:(bool)arg2 animated:(bool)arg3 tracking:(bool)arg4 orientation:(long long)arg5 fence:(id)arg6;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreen:(bool)arg2 animated:(bool)arg3 tracking:(bool)arg4 orientation:(long long)arg5 wantsFence:(bool)arg6;
- (id)initWithKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 onScreen:(bool)arg2 animated:(bool)arg3 tracking:(bool)arg4 wantsFence:(bool)arg5;
- (bool)isLocal;
- (bool)isStartNotification;
- (bool)keyboardOnScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardPosition;
- (unsigned long long)keyboardScenePresentationMode;
- (unsigned long long)notification;
- (id)notificationInfo;
- (unsigned long long)options;
- (long long)orientation;
- (bool)requiresHeightForIntegratedAssistantBar;
- (void)resetAnimationFencing;
- (bool)resizing;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setAssistantBarVisible:(bool)arg1;
- (void)setAssistantFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAssistantOnScreenOnly:(bool)arg1;
- (void)setAssistantPosition:(unsigned long long)arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setChangedAccessoryOnly:(bool)arg1;
- (void)setCurrentInputMode:(id)arg1;
- (void)setDueToRotation:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForceNotification:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setKeyboardScenePresentationMode:(unsigned long long)arg1;
- (void)setNotification:(unsigned long long)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRequiresHeightForIntegratedAssistantBar:(bool)arg1;
- (void)setResizing:(bool)arg1;
- (void)setStartNotification:(bool)arg1;
- (void)setUiPosition:(unsigned long long)arg1;
- (void)setWasCausedRemotely:(bool)arg1;
- (bool)tracking;
- (unsigned long long)uiPosition;
- (bool)wasCausedRemotely;

@end
