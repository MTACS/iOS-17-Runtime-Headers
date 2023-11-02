
@interface PGShareBackCoreRoutineSource : PGShareBackSource {
    CLSRoutineService * _routineService;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1;
- (bool)prepareSourceWithGraph:(id)arg1;
- (bool)suggesterInput:(id)arg1 isCloseEnoughToLocation:(id)arg2 inDateInterval:(id)arg3;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;

@end
