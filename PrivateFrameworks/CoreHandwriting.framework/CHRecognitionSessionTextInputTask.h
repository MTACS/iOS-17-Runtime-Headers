
@interface CHRecognitionSessionTextInputTask : CHRecognitionSessionTask {
    CHTextInputQuery * _activeTextInputQuery;
    NSArray * _initialTextInputTargets;
}

@property (nonatomic, retain) CHTextInputQuery *activeTextInputQuery;
@property (nonatomic) <CHRecognitionSessionTextInputTaskDelegate> *delegate;
@property (nonatomic, readonly) NSArray *initialTextInputTargets;

- (void).cxx_destruct;
- (id)activeTextInputQuery;
- (id)clutterFilter;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5;
- (id)initWithLocales:(id)arg1 strokeProvider:(id)arg2 initialTextInputTargets:(id)arg3 inputResult:(id)arg4 recognitionEnvironment:(long long)arg5;
- (id)initialTextInputTargets;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;
- (void)setActiveTextInputQuery:(id)arg1;
- (id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;

@end
