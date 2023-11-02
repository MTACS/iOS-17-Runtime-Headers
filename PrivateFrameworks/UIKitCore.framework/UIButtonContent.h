
@interface UIButtonContent : NSObject <NSCoding, NSCopying> {
    NSAttributedString * attributedTitle;
    UIImage * background;
    NSNumber * drawingStroke;
    UIImage * image;
    UIColor * imageColor;
    bool  isWidthVariant;
    UIImageSymbolConfiguration * preferredSymbolConfiguration;
    UIColor * shadowColor;
    NSString * title;
    UIColor * titleColor;
}

@property (nonatomic, retain) NSAttributedString *attributedTitle;
@property (nonatomic, retain) UIImage *background;
@property (nonatomic, retain) NSNumber *drawingStroke;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIColor *imageColor;
@property (nonatomic, readonly) bool isEmpty;
@property (nonatomic, retain) UIImageSymbolConfiguration *preferredSymbolConfiguration;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIColor *titleColor;

- (void).cxx_destruct;
- (id)attributedTitle;
- (id)background;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)drawingStroke;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageColor;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (id)preferredSymbolConfiguration;
- (void)setAttributedTitle:(id)arg1;
- (void)setBackground:(id)arg1;
- (void)setDrawingStroke:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageColor:(id)arg1;
- (void)setPreferredSymbolConfiguration:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (id)shadowColor;
- (id)title;
- (id)titleColor;
- (bool)updateVariableLengthStringForView:(id)arg1;

@end
