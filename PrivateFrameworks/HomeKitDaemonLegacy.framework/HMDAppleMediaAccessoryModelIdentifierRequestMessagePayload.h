
@interface HMDAppleMediaAccessoryModelIdentifierRequestMessagePayload : HMFObject <HMFLogging, HMMessageEncoding> {
    NSString * _accessoryIdentifier;
}

@property (readonly, copy) NSString *accessoryIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)messageName;

- (void).cxx_destruct;
- (id)accessoryIdentifier;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithAccessoryIdentifier:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;

@end
