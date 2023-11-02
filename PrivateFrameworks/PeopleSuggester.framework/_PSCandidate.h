
@interface _PSCandidate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _bundleId;
    NSString * _derivedIntentId;
    NSString * _domainId;
    NSString * _recipientsId;
}

@property (nonatomic, readonly, copy) NSString *bundleId;
@property (nonatomic, readonly, copy) NSString *derivedIntentId;
@property (nonatomic, readonly, copy) NSString *domainId;
@property (nonatomic, readonly, copy) NSString *recipientsId;

+ (id)selfCandidate;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleId;
- (id)candidateIdentifier;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)derivedIntentId;
- (id)description;
- (id)domainId;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCandidateIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainId:(id)arg1 derivedIntentId:(id)arg2 bundleId:(id)arg3 recipientsId:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)recipientsId;

@end
