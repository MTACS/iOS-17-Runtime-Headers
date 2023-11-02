
@interface SGNameInversionPredictor : NSObject {
    double  _confidenceThreshold;
    NSDictionary * _tradToInversionRate;
    NSDictionary * _tradToTrie;
}

+ (id)sharedInstance;
+ (bool)shouldInvertFirst:(id)arg1 last:(id)arg2;

- (void).cxx_destruct;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (id)init;
- (double)inversionRateForNamingTradition:(id)arg1;
- (bool)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (bool)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;

@end
