
@interface PPTUniversalCompletionProvider : UniversalSearchCompletionProvider {
    NSTimer * networkDelaySimulatorTimer;
    NSString * querySimulated;
}

- (void).cxx_destruct;
- (id)_generateResultsForString:(id)arg1;
- (id)_generateSingleResult;
- (void)setQueryToComplete:(id)arg1;

@end
