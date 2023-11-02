
@interface AMSUIMessageMarkdownConfiguration : NSObject {
    UIColor * _color;
    UIFont * _font;
    NSParagraphStyle * _paragraphStyle;
    UIColor * _strikeThroughColor;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) NSParagraphStyle *paragraphStyle;
@property (nonatomic, retain) UIColor *strikeThroughColor;

- (void).cxx_destruct;
- (id)color;
- (id)font;
- (id)initWithColor:(id)arg1 font:(id)arg2;
- (id)paragraphStyle;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)setStrikeThroughColor:(id)arg1;
- (id)strikeThroughColor;

@end
