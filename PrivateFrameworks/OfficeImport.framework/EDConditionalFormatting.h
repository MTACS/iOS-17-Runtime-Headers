
@interface EDConditionalFormatting : NSObject {
    bool  mApplyToDate;
    EDReferenceCollection * mRanges;
    NSMutableArray * mRules;
}

+ (id)conditionalFormatting;

- (void).cxx_destruct;
- (void)addRange:(id)arg1;
- (void)addRule:(id)arg1;
- (id)description;
- (id)init;
- (bool)isApplyToDate;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)rangeCount;
- (id)ruleAtIndex:(unsigned long long)arg1;
- (unsigned long long)ruleCount;
- (id)rules;

@end
