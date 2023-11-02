
@interface JFXEffectTextEditingProperties : NSObject {
    NSAttributedString * _attributedText;
    double  _baselineYOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedFrame;
    PVMatrix44Double * _cachedPartialTransformNoScaleNoTranslation;
    NSNumber * _cachedRotation;
    NSValue * _cachedScale;
    UIColor * _customTextColor;
    UIColor * _customTextEditTintColor;
    UIColor * _defaultTextColor;
    NSDictionary * _defaultTypingAttributes;
    JFXTextEffectFrame * _effectFrame;
    bool  _isAllCaps;
    bool  _isEmoji;
    bool  _isSpecialCaseForGameOverPoster;
    bool  _isTextFlipped;
    bool  _moveBeforeScalingToAvoidKeyboard;
    unsigned long long  _numberOfLines;
    bool  _outlineDisabled;
    long long  _textAlignment;
    bool  _useFullTransform;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) double baselineYOffset;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedFrame;
@property (nonatomic, retain) PVMatrix44Double *cachedPartialTransformNoScaleNoTranslation;
@property (nonatomic, retain) NSNumber *cachedRotation;
@property (nonatomic, retain) NSValue *cachedScale;
@property (nonatomic, copy) UIColor *customTextColor;
@property (nonatomic, copy) UIColor *customTextEditTintColor;
@property (nonatomic, copy) UIColor *defaultTextColor;
@property (nonatomic, copy) NSDictionary *defaultTypingAttributes;
@property (nonatomic, retain) JFXTextEffectFrame *effectFrame;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool isAllCaps;
@property (nonatomic) bool isEmoji;
@property (nonatomic) bool isSpecialCaseForGameOverPoster;
@property (nonatomic) bool isTextFlipped;
@property (nonatomic) bool moveBeforeScalingToAvoidKeyboard;
@property (nonatomic) unsigned long long numberOfLines;
@property (getter=isOutlineDisabled, nonatomic) bool outlineDisabled;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } partialTransformNoScaleNoTranslation;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } scale;
@property (nonatomic) long long textAlignment;
@property (nonatomic) bool useFullTransform;

+ (id)textEditingPropertiesWithTextEffect:(id)arg1 withText:(id)arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 index:(unsigned long long)arg5 moveBeforeScalingToAvoidKeyboard:(bool)arg6;

- (void).cxx_destruct;
- (void)JFX_configureWithAttributedString:(id)arg1 text:(id)arg2;
- (void)JFX_configureWithDefaultTypingAttributes:(id)arg1;
- (void)JFX_configureWithEffect:(id)arg1;
- (void)JFX_modifyAttributedString:(id)arg1;
- (void)JFX_modifyEntireAttributedString:(id)arg1 forTargetSize:(struct CGSize { double x1; double x2; })arg2 fontColor:(id)arg3;
- (void)JFX_modifyRangesOfAttributedString:(id)arg1 isOutlineDisabled:(bool)arg2;
- (id)attributedText;
- (double)baselineYOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedFrame;
- (id)cachedPartialTransformNoScaleNoTranslation;
- (id)cachedRotation;
- (id)cachedScale;
- (id)customTextColor;
- (id)customTextEditTintColor;
- (id)defaultTextColor;
- (id)defaultTypingAttributes;
- (id)description;
- (id)effectFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithTextEffect:(id)arg1 withText:(id)arg2 relativeTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 index:(unsigned long long)arg5 moveBeforeScalingToAvoidKeyboard:(bool)arg6;
- (bool)isAllCaps;
- (bool)isEmoji;
- (bool)isOutlineDisabled;
- (bool)isSpecialCaseForGameOverPoster;
- (bool)isTextFlipped;
- (bool)moveBeforeScalingToAvoidKeyboard;
- (unsigned long long)numberOfLines;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })partialTransformNoScaleNoTranslation;
- (double)rotation;
- (struct CGPoint { double x1; double x2; })scale;
- (void)setAttributedText:(id)arg1;
- (void)setBaselineYOffset:(double)arg1;
- (void)setCachedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCachedPartialTransformNoScaleNoTranslation:(id)arg1;
- (void)setCachedRotation:(id)arg1;
- (void)setCachedScale:(id)arg1;
- (void)setCustomTextColor:(id)arg1;
- (void)setCustomTextEditTintColor:(id)arg1;
- (void)setDefaultTextColor:(id)arg1;
- (void)setDefaultTypingAttributes:(id)arg1;
- (void)setEffectFrame:(id)arg1;
- (void)setIsAllCaps:(bool)arg1;
- (void)setIsEmoji:(bool)arg1;
- (void)setIsSpecialCaseForGameOverPoster:(bool)arg1;
- (void)setIsTextFlipped:(bool)arg1;
- (void)setMoveBeforeScalingToAvoidKeyboard:(bool)arg1;
- (void)setNumberOfLines:(unsigned long long)arg1;
- (void)setOutlineDisabled:(bool)arg1;
- (void)setTextAlignment:(long long)arg1;
- (void)setUseFullTransform:(bool)arg1;
- (long long)textAlignment;
- (bool)useFullTransform;

@end
