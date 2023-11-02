
@protocol SBSystemActionPreviewContextProviding <NSObject>

@required

- (NSString *)clientIdentifier;
- (NSString *)elementIdentifier;
- (NSDictionary *)userInfo;

@end
