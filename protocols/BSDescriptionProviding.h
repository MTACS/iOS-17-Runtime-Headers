
@protocol BSDescriptionProviding <NSObject>

@required

- (BSDescriptionBuilder *)descriptionBuilderWithMultilinePrefix:(NSString *)arg1;
- (NSString *)descriptionWithMultilinePrefix:(NSString *)arg1;
- (NSString *)succinctDescription;
- (BSDescriptionBuilder *)succinctDescriptionBuilder;

@end
