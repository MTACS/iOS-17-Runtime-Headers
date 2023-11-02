
@interface ACHBackCompatMonthlyChallengeDefinition : NSObject <NSSecureCoding> {
    NSExpression * _goalExpression;
    NSString * _identifier;
    NSString * _typeString;
}

@property (nonatomic, readonly) NSExpression *goalExpression;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *typeString;

+ (id)definitionFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dateComponentsFromIdentifier;
- (id)_goalExpressionValue;
- (unsigned long long)_monthlyChallengeTypeFromTypeString;
- (void)encodeWithCoder:(id)arg1;
- (id)goalExpression;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)template;
- (id)typeString;

@end
