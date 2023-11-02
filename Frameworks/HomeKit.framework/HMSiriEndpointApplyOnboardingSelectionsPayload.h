
@interface HMSiriEndpointApplyOnboardingSelectionsPayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    NSUUID * _accessoryUUID;
    HMSiriEndpointOnboardingSelections * _onboardingSelections;
}

@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMSiriEndpointOnboardingSelections *onboardingSelections;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 onboardingSelections:(id)arg2;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)onboardingSelections;
- (id)payloadCopy;
- (id)privateDescription;
- (id)shortDescription;

@end
