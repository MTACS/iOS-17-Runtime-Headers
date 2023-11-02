
@protocol DMTConfigurationProfilePayload <NSObject>

@required

- (NSString *)displayName;
- (NSString *)identifier;
- (NSDictionary *)rawDictionary;
- (NSString *)type;
- (NSString *)uuid;

@end
