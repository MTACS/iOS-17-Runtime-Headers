
@interface ICRadioStoreContentReference : ICRadioContentReference <ICRadioContentReferenceContainable, NSCopying, NSSecureCoding> {
    NSString * _containerID;
    NSNumber * _storeIdentifier;
}

@property (nonatomic, copy) NSString *containerID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *storeIdentifier;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIdentifier:(id)arg1;
- (id)matchDictionaryWithSubscriptionStatus:(id)arg1;
- (id)rawContentDictionaryWithSubscriptionStatus:(id)arg1;
- (void)setContainerID:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (id)storeIdentifier;

@end
