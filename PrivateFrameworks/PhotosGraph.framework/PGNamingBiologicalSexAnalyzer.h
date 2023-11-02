
@interface PGNamingBiologicalSexAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor * _processor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithNamingProcessor:(id)arg1;
- (id)name;
- (void)runAnalysisWithProgressBlock:(id /* block */)arg1;
- (unsigned long long)sexMatchBetweenPersonBiologicalSex:(unsigned long long)arg1 andContactBiologicalSex:(unsigned long long)arg2;

@end
