
@interface UIInputViewSetNotificationInfo : NSObject {
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
    struct CGPoint { 
        double x; 
        double y; 
    }  _beginCenter;
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
    bool  _changedAccessoryOnly;
    NSString * _debugInfo;
    bool  _dueToRotation;
    double  _duration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _endCenter;
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
    unsigned long long  _options;
    bool  _shouldSendInClient;
    unsigned long long  _type;
    bool  _waitingForInputUI;
    bool  _wasCausedRemotely;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assistantFrame;
@property (nonatomic) bool assistantOnScreenOnly;
@property (nonatomic) unsigned long long assistantPosition;
@property (nonatomic) struct CGPoint { double x1; double x2; } beginCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } beginFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool changedAccessoryOnly;
@property (nonatomic, retain) NSString *debugInfo;
@property (nonatomic) bool dueToRotation;
@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x1; double x2; } endCenter;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic) bool forceNotification;
@property (nonatomic) unsigned long long options;
@property (nonatomic, readonly) NSDictionary *privateUserInfo;
@property (nonatomic) bool shouldSendInClient;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic) bool waitingForInputUI;
@property (nonatomic) bool wasCausedRemotely;

+ (id)info;

- (void).cxx_destruct;
- (void)addKeyboardNotificationDebuggingInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assistantFrame;
- (bool)assistantOnScreenOnly;
- (unsigned long long)assistantPosition;
- (struct CGPoint { double x1; double x2; })beginCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })beginFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)changedAccessoryOnly;
- (bool)containsChange;
- (id)debugInfo;
- (id)description;
- (bool)dueToRotation;
- (double)duration;
- (struct CGPoint { double x1; double x2; })endCenter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (bool)forceNotification;
- (id)init;
- (id)inverseInfo;
- (void)logGeometry;
- (unsigned long long)options;
- (void)populateEndInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateStartInfoWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)populateWithAnimationStyle:(id)arg1;
- (id)privateUserInfo;
- (id)rotationUserInfo;
- (void)setAssistantFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAssistantOnScreenOnly:(bool)arg1;
- (void)setAssistantPosition:(unsigned long long)arg1;
- (void)setBeginCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setBeginFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChangedAccessoryOnly:(bool)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setDueToRotation:(bool)arg1;
- (void)setDuration:(double)arg1;
- (void)setEndCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setForceNotification:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setShouldSendInClient:(bool)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setWaitingForInputUI:(bool)arg1;
- (void)setWasCausedRemotely:(bool)arg1;
- (bool)shouldSendInClient;
- (unsigned long long)type;
- (id)userInfo;
- (bool)waitingForInputUI;
- (bool)wasCausedRemotely;

@end
