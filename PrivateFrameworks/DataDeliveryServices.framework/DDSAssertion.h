
@interface DDSAssertion : NSObject <NSCopying, NSSecureCoding> {
    NSString * _description;
    NSMutableSet * _descriptors;
    NSDate * _lastUpdated;
    DDSAssetQuery * _query;
}

@property (nonatomic, readonly) NSSet *assertionIdentifiers;
@property (nonatomic, readonly) NSSet *clientIdentifiers;
@property (nonatomic, retain) NSMutableSet *descriptors;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, readonly) DDSAssetPolicy *policy;
@property (nonatomic, readonly) DDSAssetQuery *query;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addDescriptorWithAssertionID:(id)arg1 clientID:(id)arg2 policy:(id)arg3;
- (id)assertionIDsForClientID:(id)arg1;
- (id)assertionIdentifiers;
- (id)clientIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptors;
- (id)dumpDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQuery:(id)arg1;
- (void)invalidateDescription;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAssertion:(id)arg1;
- (id)lastUpdated;
- (id)policy;
- (id)query;
- (void)removeDescriptorWithAssertionID:(id)arg1;
- (void)removeDescriptorWithClientID:(id)arg1;
- (void)setDescriptors:(id)arg1;
- (void)setLastUpdated:(id)arg1;

@end
