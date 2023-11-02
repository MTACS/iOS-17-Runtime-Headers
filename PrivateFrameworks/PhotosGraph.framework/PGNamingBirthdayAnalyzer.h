
@interface PGNamingBirthdayAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)birthdaySceneNodesFromGraph:(id)arg1;
- (void)findBirthdayMatchesFromBirthdayByContactIdentifier:(id)arg1 contactIdentifiersWithExplicitBirthday:(id)arg2 graph:(id)arg3 birthdaySceneNodes:(id)arg4 withProgressBlock:(id /* block */)arg5;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;
- (id)weakBirthdayMomentNodesUsingSceneNodes:(id)arg1;

@end
