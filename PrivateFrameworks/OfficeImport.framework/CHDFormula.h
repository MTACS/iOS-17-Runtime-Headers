
@interface CHDFormula : EDFormula {
    EDReferenceCollection * mReferences;
    EDWorkbook * mWorkbook;
}

+ (id)formulaWithReference:(id)arg1;
+ (id)formulaWithReferences:(id)arg1;

- (void).cxx_destruct;
- (id)constantValuesFromConstantStringFormula;
- (unsigned long long)countOfCellsBeingReferenced;
- (id)initWithReference:(id)arg1;
- (id)initWithReferences:(id)arg1;
- (id)initWithWorkbook:(id)arg1;
- (bool)isConstantStringFormula;
- (void)prepareTokens;
- (id)references;
- (id)referencesFromFormula;
- (void)setReferences:(id)arg1;
- (void)setWorkbook:(id)arg1;

@end
