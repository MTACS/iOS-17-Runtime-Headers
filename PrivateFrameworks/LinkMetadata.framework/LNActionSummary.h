
@interface LNActionSummary : LNActionConfiguration <NSCopying, NSSecureCoding> {
    NSURL * _bundleURL;
    NSArray * _otherParameterIdentifiers;
    LNActionSummaryString * _summaryString;
    NSString * _table;
}

@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSArray *otherParameterIdentifiers;
@property (nonatomic, readonly) LNActionSummaryString *summaryString;
@property (nonatomic, readonly) NSString *table;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionConfigurationByEvaluatingAction:(id)arg1;
- (id)actionConfigurationByEvaluatingAction:(id)arg1 context:(id)arg2;
- (id)bundleURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSummaryString:(id)arg1 bundleURL:(id)arg2 table:(id)arg3 otherParameterIdentifiers:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizedFormatStringForLocaleIdentifier:(id)arg1;
- (id)otherParameterIdentifiers;
- (id)summaryString;
- (id)table;

@end
