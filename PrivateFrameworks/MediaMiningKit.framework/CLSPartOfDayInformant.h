
@interface CLSPartOfDayInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;

@end
