
@interface CLSLocationMobilityInformant : CLSInformant

+ (id)classIdentifier;
+ (id)familyIdentifier;
+ (id)informantDependenciesIdentifiers;

- (id)_locationMobilityClueForInvestigation:(id)arg1;
- (id)gatherCluesForInvestigation:(id)arg1 progressBlock:(id /* block */)arg2;

@end
