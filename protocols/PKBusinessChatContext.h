
@protocol PKBusinessChatContext <NSObject>

@required

- (NSString *)businessIdentifier;

@optional

- (NSString *)bodyText;
- (NSDictionary *)groupParameters;
- (NSDictionary *)intentParameters;
- (bool)requiresAuthorization;

@end
