
@interface SSCalculatorResultBuilder : SSResultBuilder {
    NSString * _input;
    bool  _isCalculation;
    bool  _isCurrencyConversion;
    NSString * _output;
}

@property (nonatomic, retain) NSString *input;
@property (nonatomic) bool isCalculation;
@property (nonatomic) bool isCurrencyConversion;
@property (nonatomic, retain) NSString *output;

+ (id)bundleId;
+ (bool)supportsResult:(id)arg1;
+ (id)yahooAttributionImageWithSize:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (id)buildBackgroundColor;
- (id)buildCommand;
- (id)buildCompactCardSection;
- (id)buildInlineCardSections;
- (id)buildPreviewButtonItems;
- (id)buildResult;
- (id)initWithResult:(id)arg1;
- (id)input;
- (bool)isCalculation;
- (bool)isCurrencyConversion;
- (id)output;
- (void)setInput:(id)arg1;
- (void)setIsCalculation:(bool)arg1;
- (void)setIsCurrencyConversion:(bool)arg1;
- (void)setOutput:(id)arg1;

@end
