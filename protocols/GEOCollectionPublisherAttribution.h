
@protocol GEOCollectionPublisherAttribution <NSObject>

@required

- (NSString *)applicationAdamId;
- (NSString *)displayName;
- (unsigned int)iconIdentifier;
- (unsigned int)logoCenteredColorizedIdentifier;
- (unsigned int)logoCenteredIdentifier;
- (unsigned int)logoIdentifier;
- (unsigned int)logoWithoutPaddingIdentifier;
- (NSString *)subtitle;
- (NSString *)themeColorDarkMode;
- (NSString *)themeColorLightMode;
- (NSURL *)websiteURL;

@end
