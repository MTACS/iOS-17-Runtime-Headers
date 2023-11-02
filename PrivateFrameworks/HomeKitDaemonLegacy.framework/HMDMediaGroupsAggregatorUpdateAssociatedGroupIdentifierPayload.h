
@interface HMDMediaGroupsAggregatorUpdateAssociatedGroupIdentifierPayload : HMFObject <HMMessageEncoding> {
    NSUUID * _associatedGroupIdentifier;
    NSUUID * _groupIdentifier;
}

@property (readonly, copy) NSUUID *associatedGroupIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSUUID *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)messageName;

- (void).cxx_destruct;
- (id)associatedGroupIdentifier;
- (id)attributeDescriptions;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithGroupIdentifier:(id)arg1 associatedGroupIdentifier:(id)arg2;
- (id)initWithPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)payloadCopy;

@end
