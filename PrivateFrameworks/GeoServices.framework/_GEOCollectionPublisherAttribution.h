
@interface _GEOCollectionPublisherAttribution : NSObject <GEOCollectionPublisherAttribution> {
    NSString * _applicationAdamId;
    NSString * _displayName;
    unsigned int  _iconIdentifier;
    unsigned int  _logoCenteredColorizedIdentifier;
    unsigned int  _logoCenteredIdentifier;
    unsigned int  _logoIdentifier;
    unsigned int  _logoWithoutPaddingIdentifier;
    NSString * _subtitle;
    NSString * _themeColorDarkMode;
    NSString * _themeColorLightMode;
    NSURL * _websiteURL;
}

@property (nonatomic, readonly) NSString *applicationAdamId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int iconIdentifier;
@property (nonatomic, readonly) unsigned int logoCenteredColorizedIdentifier;
@property (nonatomic, readonly) unsigned int logoCenteredIdentifier;
@property (nonatomic, readonly) unsigned int logoIdentifier;
@property (nonatomic, readonly) unsigned int logoWithoutPaddingIdentifier;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *themeColorDarkMode;
@property (nonatomic, readonly) NSString *themeColorLightMode;
@property (nonatomic, readonly) NSURL *websiteURL;

- (void).cxx_destruct;
- (id)applicationAdamId;
- (id)displayName;
- (unsigned int)iconIdentifier;
- (id)initWithPublisherAttributionSource:(id)arg1 preferredLanguages:(id)arg2;
- (unsigned int)logoCenteredColorizedIdentifier;
- (unsigned int)logoCenteredIdentifier;
- (unsigned int)logoIdentifier;
- (unsigned int)logoWithoutPaddingIdentifier;
- (id)subtitle;
- (id)themeColorDarkMode;
- (id)themeColorLightMode;
- (id)websiteURL;

@end
