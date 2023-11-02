
@interface HMDAccessoryReachabilityElectionParameter : HMFObject {
    NSUUID * _identifier;
    bool  _reachable;
}

@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly, copy) NSUUID *identifier;
@property (getter=isReachable, readonly) bool reachable;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1 isReachable:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isReachable;

@end
