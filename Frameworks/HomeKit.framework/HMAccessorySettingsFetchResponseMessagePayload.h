
@interface HMAccessorySettingsFetchResponseMessagePayload : NSObject <HMFLogging, HMFObject, HMMessageEncoding> {
    HMAccessorySettingsPartialFetchFailureInformation * _failureInformation;
    NSArray * _settings;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMAccessorySettingsPartialFetchFailureInformation *failureInformation;
@property (readonly) NSArray *fetchResults;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSArray *settings;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)shortDescription;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)description;
- (id)failureInformation;
- (id)fetchResults;
- (unsigned long long)hash;
- (id)initWithPayload:(id)arg1;
- (id)initWithSettings:(id)arg1 failureInformation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;
- (id)privateDescription;
- (id)settings;
- (id)shortDescription;

@end
