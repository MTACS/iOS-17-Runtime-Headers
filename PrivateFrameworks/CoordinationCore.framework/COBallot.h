
@interface COBallot : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSOrderedSet * _candidates;
    NSDictionary * _discovery;
}

@property (nonatomic, copy) NSOrderedSet *candidates;
@property (nonatomic, copy) NSDictionary *discovery;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)discovery;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBallot:(id)arg1;
- (id)initWithCandidate:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBallot:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setCandidates:(id)arg1;
- (void)setDiscovery:(id)arg1;

@end
