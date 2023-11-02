
@protocol FCActivityDescribing <NSObject, NSCopying>

@required

- (NSString *)activityColorName;
- (NSDate *)activityCreationDate;
- (NSString *)activityDetailText;
- (NSString *)activityDisplayName;
- (NSString *)activityIdentifier;
- (NSArray *)activityLifetimeDescriptions;
- (NSString *)activityLifetimesAlternativeDescription;
- (long long)activitySemanticType;
- (NSURL *)activitySettingsURL;
- (NSURL *)activitySetupURL;
- (NSString *)activitySymbolImageName;
- (NSUUID *)activityUniqueIdentifier;
- (bool)isPlaceholder;

@end
