
@interface SRSensorDescription : NSObject {
    NSString * _additionalSampleDataNoteKey;
    NSSet * _additions;
    NSString * _authorizationService;
    NSString * _authorizationStoreCohort;
    long long  _authorizationVersion;
    NSSet * _eligibleDaemons;
    NSString * _exportingSampleClass;
    NSArray * _filters;
    NSString * _infoPlistAuthorizationCategory;
    NSString * _legacyName;
    NSString * _legacySampleClass;
    unsigned int  _legacySampleClassLinkedBefore;
    NSString * _localizedAdditionalSampleDataNote;
    NSString * _name;
    NSString * _onDemandWriterService;
    NSString * _publicEntitlementValue;
    NSArray * _relatedSettingsCategories;
    double  _roundingInterval;
    NSString * _sampleClass;
    NSDictionary * _supportedPlatforms;
    NSString * _writerAuthorizationService;
    NSString * _writerBundleIdentifier;
}

@property (readonly, copy) NSString *authorizationService;
@property (readonly, copy) NSString *authorizationStoreCohort;
@property (readonly) long long authorizationVersion;
@property (nonatomic, readonly, copy) NSSet *eligibleDaemons;
@property (readonly, copy) NSString *exportingSampleClass;
@property (nonatomic, readonly, copy) NSArray *filters;
@property (readonly, copy) NSString *infoPlistAuthorizationCategory;
@property (readonly, copy) NSString *legacyName;
@property (readonly, copy) NSString *localizedAdditionalSampleDataNote;
@property (readonly) bool metadataEnabled;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *onDemandWriterService;
@property (readonly, copy) NSString *publicEntitlementValue;
@property (readonly, copy) NSArray *relatedSettingsCategories;
@property (nonatomic, readonly) double roundingInterval;
@property (readonly, copy) NSString *sampleClass;
@property (readonly) bool sensorConfigurationEnabled;
@property (readonly) bool supportsCurrentPlatform;
@property (readonly, copy) NSString *writerAuthorizationService;
@property (readonly, copy) NSString *writerBundleIdentifier;

+ (void)initialize;
+ (id)sensorDescriptionForDeletionRecordFromDescription:(id)arg1;
+ (id)sensorDescriptionForSensor:(id)arg1;
+ (id)sensorDescriptionsForAuthorizationService:(id)arg1;

- (id)authorizationService;
- (id)authorizationStoreCohort;
- (long long)authorizationVersion;
- (void)dealloc;
- (id)description;
- (id)eligibleDaemons;
- (id)exportingSampleClass;
- (id)filters;
- (id)infoPlistAuthorizationCategory;
- (id)initWithDictionary:(id)arg1;
- (id)legacyName;
- (id)localizedAdditionalSampleDataNote;
- (bool)metadataEnabled;
- (id)name;
- (id)onDemandWriterService;
- (id)publicEntitlementValue;
- (id)relatedSettingsCategories;
- (double)roundingInterval;
- (id)sampleClass;
- (bool)sensorConfigurationEnabled;
- (bool)supportsCurrentPlatform;
- (bool)supportsPlatform:(id)arg1;
- (id)writerAuthorizationService;
- (id)writerBundleIdentifier;

@end
