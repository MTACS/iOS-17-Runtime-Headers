
@interface GeneratePredictionsOperation : NSOperation {
    NSDictionary * _candidateRefsDictionary;
    NSArray * _candidates;
    NSArray * _committedCandidates;
    TIInputManagerHandwriting * _inputManager;
    unsigned long long  _predictionOptions;
    NSString * _prefixContext;
    NSArray * _proactiveTriggers;
    TIWordSearchHandwriting * _wordSearch;
}

@property (nonatomic, readonly) NSDictionary *candidateRefsDictionary;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly, copy) NSArray *committedCandidates;
@property (nonatomic, readonly) TIInputManagerHandwriting *inputManager;
@property (nonatomic, readonly) unsigned long long predictionOptions;
@property (nonatomic, readonly) NSString *prefixContext;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) TIWordSearchHandwriting *wordSearch;

- (void).cxx_destruct;
- (id)candidateRefsDictionary;
- (id)candidates;
- (id)committedCandidates;
- (id)initWithInputManager:(id)arg1 predictionOptions:(unsigned long long)arg2 prefixContext:(id)arg3;
- (id)inputManager;
- (void)main;
- (unsigned long long)predictionOptions;
- (id)prefixContext;
- (id)proactiveTriggers;
- (id)wordSearch;

@end
