
@interface HKUserDomainConceptQueryResult : NSObject <NSCopying, NSSecureCoding> {
    long long  _rawAnchor;
    HKUserDomainConcept * _userConcept;
}

@property (nonatomic, readonly, copy) HKQueryAnchor *anchor;
@property (nonatomic, readonly) long long rawAnchor;
@property (nonatomic, readonly, copy) HKUserDomainConcept *userConcept;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserConcept:(id)arg1 rawAnchor:(long long)arg2;
- (long long)rawAnchor;
- (id)userConcept;

@end
