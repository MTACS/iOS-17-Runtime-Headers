
@protocol UIContentView <NSObject>

@required

- (<UIContentConfiguration> *)configuration;
- (void)setConfiguration:(id <UIContentConfiguration>)arg1;

@optional

- (bool)supportsConfiguration:(id <UIContentConfiguration>)arg1;

@end
