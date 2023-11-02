
@interface CLSClassificationInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (double)_confidenceForCount:(unsigned long long)arg1 mu:(double)arg2 sigma:(double)arg3;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;

@end
