
@interface TTRIContentUnavailableButtonProperties : TTRIUIContentUnavailableShim

@property (nonatomic, copy) UIAction *primaryAction;

+ (Class)implClass;

- (id)asUIKit;
- (id)primaryAction;
- (void)setPrimaryAction:(id)arg1;

@end
