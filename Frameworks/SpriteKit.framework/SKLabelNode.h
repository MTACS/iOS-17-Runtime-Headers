
@interface SKLabelNode : SKNode {
    void * _skcLabelNode;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic) long long blendMode;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic, retain) UIColor *fontColor;
@property (nonatomic, copy) NSString *fontName;
@property (nonatomic) double fontSize;
@property (nonatomic) long long horizontalAlignmentMode;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long verticalAlignmentMode;

+ (id)_labelNodeWithFontNamed:(id)arg1;
+ (id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id*)arg3 outError:(id*)arg4;
+ (id)labelNodeWithAttributedText:(id)arg1;
+ (id)labelNodeWithFontNamed:(id)arg1;
+ (id)labelNodeWithText:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_didMakeBackingNode;
- (id)_getTextSprites;
- (void)_initialize;
- (void*)_makeBackingNode;
- (id)attributedString;
- (id)attributedText;
- (long long)blendMode;
- (id)color;
- (double)colorBlendFactor;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fontColor;
- (id)fontName;
- (double)fontSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (long long)horizontalAlignmentMode;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontNamed:(id)arg1;
- (bool)isEqualToNode:(id)arg1;
- (long long)lineBreakMode;
- (long long)numberOfLines;
- (double)preferredMaxLayoutWidth;
- (void)setAttributedText:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(double)arg1;
- (void)setFont:(struct __CTFont { }*)arg1;
- (void)setFontColor:(id)arg1;
- (void)setFontName:(id)arg1;
- (void)setFontSize:(double)arg1;
- (void)setHorizontalAlignmentMode:(long long)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setNumberOfLines:(long long)arg1;
- (void)setPreferredMaxLayoutWidth:(double)arg1;
- (void)setText:(id)arg1;
- (void)setUIFont:(id)arg1;
- (void)setVerticalAlignmentMode:(long long)arg1;
- (id)text;
- (long long)verticalAlignmentMode;

@end
