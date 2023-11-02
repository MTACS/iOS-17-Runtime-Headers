
@interface PKPayLaterProductAssessmentCollection : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _eligibleProductAssessments;
    NSArray * _ineligibleProductAssessments;
    NSDictionary * _productAssessments;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)eligibleProductAssessments;
- (void)encodeWithCoder:(id)arg1;
- (id)financingOptionWithSelectionIdentifier:(id)arg1 productType:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)ineligibleProductAssessments;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productAssessmentForProductType:(unsigned long long)arg1;

@end
