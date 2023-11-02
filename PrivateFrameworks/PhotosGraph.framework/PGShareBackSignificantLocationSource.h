
@interface PGShareBackSignificantLocationSource : PGShareBackSource {
    PGGraphHomeWorkNodeCollection * _homeNodes;
}

- (void).cxx_destruct;
- (bool)prepareSourceWithGraph:(id)arg1;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;

@end
