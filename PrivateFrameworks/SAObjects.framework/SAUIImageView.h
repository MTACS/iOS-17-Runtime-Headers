
@interface SAUIImageView : SAAceView

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic, copy) NSNumber *tintColor;

+ (id)imageView;
+ (id)imageViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)descriptionText;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (void)setCommands:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (id)tintColor;

@end
