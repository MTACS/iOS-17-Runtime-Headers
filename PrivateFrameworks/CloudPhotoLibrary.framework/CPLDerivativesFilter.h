
@interface CPLDerivativesFilter : NSObject <NSSecureCoding> {
    NSMutableDictionary * _skipInfoForAssetChange;
    NSMutableDictionary * _skipInfoForMasterChange;
}

@property (nonatomic, readonly) NSArray *plistDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionForStoredResponse:(id)arg1 recordType:(unsigned long long)arg2;
- (void)_enumerateDropDerivativeRules:(id)arg1 ofType:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)_getTargetDictionaryForChangeType:(unsigned long long)arg1;
- (bool)_isValidDropDerivativeRecipeWithUTI:(id)arg1 sourceType:(unsigned long long)arg2 derivativeTypes:(id)arg3 changeType:(unsigned long long)arg4;
- (bool)addServerDropDerivativesRecipe:(id)arg1;
- (bool)addServerDropDerivativesRecipes:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDropDerivativeRulesWithBlock:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)mightDropSomeDerivativesForSourceType:(unsigned long long)arg1 forChangeType:(unsigned long long)arg2;
- (id)plistDescription;
- (id)redactedDescription;
- (void)reset;
- (bool)shouldDropDerivativeWithDropDerivativeRecipe:(id)arg1;

@end
