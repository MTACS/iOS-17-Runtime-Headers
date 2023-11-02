
@interface TTRIContentUnavailableTextProperties : TTRIUIContentUnavailableShim

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) UIFont *font;

+ (Class)implClass;

- (id)asUIKit;
- (id)color;
- (id)font;
- (void)setColor:(id)arg1;
- (void)setFont:(id)arg1;

@end
