
@interface PGShareBackSource : NSObject <PGShareBackSourceProtocol> {
    NSObject<OS_os_log> * _loggingConnection;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1;
- (id)loggingConnection;
- (id)prepareAndReturnSuggesterResultsForInputs:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;
- (bool)prepareSourceWithGraph:(id)arg1;
- (id)suggesterResultsForInputs:(id)arg1 momentNodes:(id)arg2 inGraph:(id)arg3 error:(id*)arg4;
- (id)validInputsForSource:(id)arg1 givenSuggesterResults:(id)arg2;

@end
