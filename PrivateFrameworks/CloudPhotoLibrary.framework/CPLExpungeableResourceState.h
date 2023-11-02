
@interface CPLExpungeableResourceState : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expungedDate;
    unsigned long long  _expungedState;
    unsigned long long  _resourceType;
}

@property (nonatomic, copy) NSDate *expungedDate;
@property (nonatomic) unsigned long long expungedState;
@property (nonatomic) unsigned long long resourceType;

+ (id)normalizedExpungeableResourceStatesFromExpungeableResourceStates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expungedDate;
- (unsigned long long)expungedState;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)resourceType;
- (void)setExpungedDate:(id)arg1;
- (void)setExpungedState:(unsigned long long)arg1;
- (void)setResourceType:(unsigned long long)arg1;

@end
