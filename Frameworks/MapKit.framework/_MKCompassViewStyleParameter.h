
@interface _MKCompassViewStyleParameter : NSObject {
    UIColor * _backgroundColor;
    UIColor * _borderColor;
    NSString * _imageNamePart;
    UIColor * _shadowColor;
    UIColor * _textColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, copy) NSString *imageNamePart;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic, retain) UIColor *textColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)borderColor;
- (id)imageNamePart;
- (void)setBackgroundColor:(id)arg1;
- (void)setBorderColor:(id)arg1;
- (void)setImageNamePart:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)shadowColor;
- (id)textColor;

@end
