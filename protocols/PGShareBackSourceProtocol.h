
@protocol PGShareBackSourceProtocol

@required

- (NSArray *)prepareAndReturnSuggesterResultsForInputs:(NSArray *)arg1 inGraph:(PGGraph *)arg2 error:(id*)arg3;
- (bool)prepareSourceWithGraph:(PGGraph *)arg1;
- (NSArray *)suggesterResultsForInputs:(NSArray *)arg1 momentNodes:(NSSet *)arg2 inGraph:(PGGraph *)arg3 error:(id*)arg4;
- (NSArray *)validInputsForSource:(NSArray *)arg1 givenSuggesterResults:(NSArray *)arg2;

@end
