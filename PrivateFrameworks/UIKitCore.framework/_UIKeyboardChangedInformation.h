
@interface _UIKeyboardChangedInformation : _UIKeyboardUIInformation {
    bool  _automaticMinimizationEnabled;
    bool  _avoidIntersectability;
    NSString * _hostBundleIdentifier;
    int  _hostProcessIdentifier;
    bool  _isFloating;
    double  _keyboardIAVHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardPositionWithIAV;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardPositionWithRemoteIAV;
    NSString * _keyboardPreserveKey;
    bool  _multipleScenes;
    bool  _shouldRestoreKeyboard;
    bool  _shouldTakeSnapshot;
    NSString * _sourceBundleIdentifier;
    NSString * _sourceDisplayIdentifier;
    NSString * _sourceSceneIdentityString;
}

@property (nonatomic) bool automaticMinimizationEnabled;
@property (nonatomic) bool avoidIntersectability;
@property (nonatomic, copy) NSString *hostBundleIdentifier;
@property (nonatomic) int hostProcessIdentifier;
@property bool isFloating;
@property (readonly) double keyboardIAVHeight;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardPositionWithIAV;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } keyboardPositionWithRemoteIAV;
@property (nonatomic, copy) NSString *keyboardPreserveKey;
@property (nonatomic) bool multipleScenes;
@property (readonly) bool shouldRestoreKeyboard;
@property (nonatomic) bool shouldTakeSnapshot;
@property (nonatomic, copy) NSString *sourceBundleIdentifier;
@property (nonatomic, copy) NSString *sourceDisplayIdentifier;
@property (nonatomic, copy) NSString *sourceSceneIdentityString;

+ (id)animationFence;
+ (id)informationForKeyboardDown;
+ (id)informationForKeyboardPreserve:(id)arg1;
+ (id)informationForKeyboardRestore:(id)arg1;
+ (id)informationForKeyboardUp:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withIAV:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)informationForKeyboardUpWithIAVHeight:(double)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)automaticMinimizationEnabled;
- (bool)avoidIntersectability;
- (id)copyWithIntersectability:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutFence;
- (id)copyWithoutIAVKeyboardRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)hostBundleIdentifier;
- (int)hostProcessIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboardIAVHeight:(double)arg1 onScreen:(bool)arg2 takeSnapshot:(bool)arg3 fence:(id)arg4;
- (id)initWithKeyboardRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 iavPosition:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 onScreen:(bool)arg3 takeSnapshot:(bool)arg4 fence:(id)arg5;
- (bool)isFloating;
- (double)keyboardIAVHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardPositionWithIAV;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })keyboardPositionWithRemoteIAV;
- (id)keyboardPreserveKey;
- (bool)multipleScenes;
- (void)setAutomaticMinimizationEnabled:(bool)arg1;
- (void)setAvoidIntersectability:(bool)arg1;
- (void)setHostBundleIdentifier:(id)arg1;
- (void)setHostProcessIdentifier:(int)arg1;
- (void)setIsFloating:(bool)arg1;
- (void)setKeyboardPositionWithRemoteIAV:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setKeyboardPreserveKey:(id)arg1;
- (void)setMultipleScenes:(bool)arg1;
- (void)setShouldTakeSnapshot:(bool)arg1;
- (void)setSourceBundleIdentifier:(id)arg1;
- (void)setSourceDisplayIdentifier:(id)arg1;
- (void)setSourceSceneIdentityString:(id)arg1;
- (bool)shouldRestoreKeyboard;
- (bool)shouldTakeSnapshot;
- (id)sourceBundleIdentifier;
- (id)sourceDisplayIdentifier;
- (id)sourceSceneIdentityString;

@end
