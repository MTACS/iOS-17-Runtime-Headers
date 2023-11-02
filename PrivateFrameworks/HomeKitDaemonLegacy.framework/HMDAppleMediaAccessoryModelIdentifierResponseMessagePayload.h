
@interface HMDAppleMediaAccessoryModelIdentifierResponseMessagePayload : HMFObject <HMMessageEncoding> {
    NSUUID * _modelIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *modelIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)hash;
- (id)initWithModelIdentifier:(id)arg1;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelIdentifier;
- (id)payloadCopy;

@end
