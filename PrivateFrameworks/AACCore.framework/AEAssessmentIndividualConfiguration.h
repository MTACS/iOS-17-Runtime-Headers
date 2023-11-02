
@interface AEAssessmentIndividualConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsNetworkAccess;
}

@property (nonatomic) bool allowsNetworkAccess;

+ (bool)supportsSecureCoding;

- (bool)allowsNetworkAccess;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowsNetworkAccess:(bool)arg1;

@end
