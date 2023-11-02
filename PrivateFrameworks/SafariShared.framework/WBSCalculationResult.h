
@interface WBSCalculationResult : NSObject {
    CalculateResult * _result;
}

@property (getter=isCalculation, nonatomic, readonly) bool calculation;
@property (getter=isCurrencyConversion, nonatomic, readonly) bool currencyConversion;
@property (nonatomic, readonly) NSString *formattedEquation;
@property (nonatomic, readonly) NSString *formattedExpression;
@property (nonatomic, readonly) NSString *formattedResult;
@property (nonatomic, readonly) NSString *sectionTitle;

- (void).cxx_destruct;
- (id)formattedEquation;
- (id)formattedExpression;
- (id)formattedResult;
- (id)initWithCalculateResult:(id)arg1;
- (bool)isCalculation;
- (bool)isCurrencyConversion;
- (bool)isEqual:(id)arg1;
- (id)reflectedStringForQueryString:(id)arg1;
- (id)sectionTitle;

@end
