
@interface UIKBScreenTraits : NSObject {
    double  _assistantViewWidth;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _assistantViewWindowBounds;
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
    bool  _centerFilled;
    long long  _idiomToEmulate;
    bool  _isEmojiPosterOniPad;
    bool  _isEmulatingIdiom;
    bool  _isFirstPartyStickers;
    bool  _isFloating;
    bool  _isInPopover;
    bool  _isKeyboardMinorEdgeWidth;
    bool  _isLinear;
    bool  _isSplit;
    double  _keyboardBarHeight;
    double  _keyboardHeightAdjustment;
    double  _keyboardWidth;
    bool  _knobInput;
    long long  _orientation;
    long long  _preferredEmojiScrollingDirection;
    bool  _resizeKeyboardHeight;
    UIScreen * _screen;
    struct CGSize { 
        double width; 
        double height; 
    }  _stretchFactor;
    bool  _supportsSplit;
    bool  _touchInput;
    bool  _touchpadInput;
}

@property (nonatomic) double assistantViewWidth;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } assistantViewWindowBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) bool centerFilled;
@property (nonatomic, readonly) long long idiom;
@property (nonatomic, readonly) bool isEmojiScrollingDirectionVertical;
@property (nonatomic, readonly) bool isFloating;
@property (nonatomic, readonly) bool isInPopover;
@property (nonatomic, readonly) bool isKeyboardMinorEdgeWidth;
@property (nonatomic, readonly) bool isLinear;
@property (nonatomic) bool isSplit;
@property (nonatomic) double keyboardBarHeight;
@property (nonatomic) double keyboardHeightAdjustment;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } keyboardScreenReferenceSize;
@property (nonatomic) double keyboardWidth;
@property (nonatomic, readonly) bool knobInput;
@property (nonatomic) long long orientation;
@property (nonatomic) long long preferredEmojiScrollingDirection;
@property (nonatomic) bool resizeKeyboardHeight;
@property (nonatomic, readonly) UIScreen *screen;
@property (nonatomic) struct CGSize { double x1; double x2; } stretchFactor;
@property (nonatomic) bool supportsSplit;
@property (nonatomic, readonly) bool touchInput;
@property (nonatomic, readonly) bool touchpadInput;

+ (id)_activeKeyboardWindowForScreen:(id)arg1;
+ (id)_activeUCBWindowForScreen:(id)arg1;
+ (id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (void)setMockIdiom:(long long)arg1;
+ (id)traitsForInputModeWithScreen:(id)arg1;
+ (id)traitsForPopoverEmulatingWidth:(double)arg1 minorEdge:(bool)arg2 orientation:(long long)arg3 idiom:(long long)arg4;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2;
+ (id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(bool)arg3;

- (void).cxx_destruct;
- (double)assistantViewWidth;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assistantViewWindowBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (bool)centerFilled;
- (id)description;
- (long long)idiom;
- (id)initForInputModeWithScreen:(id)arg1;
- (id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(bool)arg3 ignoreRemoteKeyboard:(bool)arg4;
- (bool)isEmojiScrollingDirectionVertical;
- (bool)isFloating;
- (bool)isInPopover;
- (bool)isKeyboardMinorEdgeWidth;
- (bool)isLinear;
- (bool)isSplit;
- (double)keyboardBarHeight;
- (double)keyboardHeightAdjustment;
- (struct CGSize { double x1; double x2; })keyboardScreenReferenceSize;
- (double)keyboardWidth;
- (bool)knobInput;
- (long long)orientation;
- (long long)preferredEmojiScrollingDirection;
- (bool)resizeKeyboardHeight;
- (id)screen;
- (void)setAssistantViewWidth:(double)arg1;
- (void)setAssistantViewWindowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenterFilled:(bool)arg1;
- (void)setIsSplit:(bool)arg1;
- (void)setKeyboardBarHeight:(double)arg1;
- (void)setKeyboardHeightAdjustment:(double)arg1;
- (void)setKeyboardWidth:(double)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setPreferredEmojiScrollingDirection:(long long)arg1;
- (void)setResizeKeyboardHeight:(bool)arg1;
- (void)setStretchFactor:(struct CGSize { double x1; double x2; })arg1;
- (void)setSupportsSplit:(bool)arg1;
- (struct CGSize { double x1; double x2; })stretchFactor;
- (bool)supportsSplit;
- (bool)touchInput;
- (bool)touchpadInput;
- (void)updateForLinearLayout:(bool)arg1;
- (void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2;

@end
