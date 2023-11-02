
@interface SDDevice : NSObject <NSSecureCoding> {
    NSString * _build;
    SDSeedingConfiguration * _currentConfiguration;
    NSString * _deviceClass;
    SDSeedingConfiguration * _expectedConfiguration;
    bool  _hasDeviceManagementRestriction;
    NSString * _identifier;
    bool  _isFeedbackAssistantAvailable;
    bool  _isRunningSeedBuild;
    NSString * _name;
    unsigned long long  _platform;
    NSDate * _updatedAt;
}

@property (nonatomic, retain) NSString *build;
@property (nonatomic, retain) SDSeedingConfiguration *currentConfiguration;
@property (nonatomic, retain) NSString *deviceClass;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, retain) SDSeedingConfiguration *expectedConfiguration;
@property (nonatomic) bool hasDeviceManagementRestriction;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isFeedbackAssistantAvailable;
@property (nonatomic) bool isRunningSeedBuild;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long platform;
@property (nonatomic, retain) NSDate *updatedAt;

+ (id)_currentDevice;
+ (id)_devicesMatchingPlatforms:(unsigned long long)arg1;
+ (id)currentDevice;
+ (id)deviceClass;
+ (id)deviceClassForProductType:(id)arg1;
+ (id)deviceIdentifier;
+ (bool)deviceIsHomePod;
+ (id)deviceName;
+ (unsigned long long)devicePlatform;
+ (id)deviceProductType;
+ (void)getCurrentDevice:(id /* block */)arg1;
+ (void)getDevicesMatchingPlatforms:(unsigned long long)arg1 completion:(id /* block */)arg2;
+ (id)marketingProductName;
+ (id)osBuild;
+ (id)productVersion;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_canFileFeedback;
- (void)_configureDeviceWithExpectedConfiguration;
- (void)_configureDeviceWithExpectedConfigurationWithUserIdentifier:(id)arg1;
- (void)_enrollInBetaProgram:(id)arg1;
- (void)_enrollInBetaProgram:(id)arg1 userIdentifier:(id)arg2;
- (id)_enrolledBetaProgram;
- (bool)_isEnrolled;
- (bool)_unenrollWithUserIdentifier:(id)arg1;
- (void)_verifyEnrollmentWithUserIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)build;
- (void)checkIn;
- (id)currentConfiguration;
- (id)description;
- (id)deviceClass;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)expectedConfiguration;
- (bool)hasDeviceManagementRestriction;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isFeedbackAssistantAvailable;
- (bool)isRunningSeedBuild;
- (id)name;
- (unsigned long long)platform;
- (void)setBuild:(id)arg1;
- (void)setCurrentConfiguration:(id)arg1;
- (void)setDeviceClass:(id)arg1;
- (void)setExpectedConfiguration:(id)arg1;
- (void)setHasDeviceManagementRestriction:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsFeedbackAssistantAvailable:(bool)arg1;
- (void)setIsRunningSeedBuild:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setUpdatedAt:(id)arg1;
- (void)updateCurrentConfiguration;
- (id)updatedAt;

@end
