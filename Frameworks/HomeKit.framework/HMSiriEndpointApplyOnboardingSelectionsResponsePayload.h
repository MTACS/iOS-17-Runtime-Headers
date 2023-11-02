
@interface HMSiriEndpointApplyOnboardingSelectionsResponsePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    long long  _onboardingResult;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) long long onboardingResult;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (id)attributeDescriptions;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOnboardingResult:(long long)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)onboardingResult;
- (id)payloadCopy;
- (id)privateDescription;
- (id)shortDescription;

@end
