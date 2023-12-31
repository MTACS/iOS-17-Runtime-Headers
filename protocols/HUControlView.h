
@protocol HUControlView <NSObject>

@required

+ (Class)valueClass;

- (<HUControlViewDelegate> *)delegate;
- (NSString *)identifier;
- (bool)isDisabled;
- (void)setDelegate:(id <HUControlViewDelegate>)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@optional

- (bool)canBeHighlighted;
- (void)setCanBeHighlighted:(bool)arg1;

@end
