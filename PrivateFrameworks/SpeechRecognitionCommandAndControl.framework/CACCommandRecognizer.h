
@interface CACCommandRecognizer : NSObject {
    NSArray * _builtInLMIdentifiers;
    NSDictionary * _contextEvaluators;
    unsigned int  _flags;
    id  _owner;
    CACSpeechRecognizer * _speechRecognizer;
    NSArray * _spokenCommandsCache;
    NSString * _type;
}

@property (retain) id owner;
@property (readonly) CACSpeechRecognizer *speechRecognizer;
@property (readonly) NSArray *spokenCommands;
@property (retain) NSString *type;

+ (void)_accumulateCloseMatchUsingCommandIdentifier:(id)arg1 substitutionTable:(id)arg2;
+ (void)_showHintWithAccumulateCloseMatches;
+ (void)resetCloseMatchAccumulator;
+ (void)suspendCloseMatchAccumulatorForCommand;

- (void).cxx_destruct;
- (void)_buildLanguageModelUsingCommands;
- (id)_commandParametersFromCACLanguageModel:(id)arg1;
- (void)_synchronizeSpeechRecognizerSettings;
- (id)commandParametersFromCACLanguageModel:(id)arg1;
- (id)commandStrings;
- (id)commandTextSequenceFromCACLanguageModel:(id)arg1;
- (void)handleSpokenCommand:(id)arg1;
- (id)initWithCommands:(id)arg1 contextEvaluators:(id)arg2 builtInLMIdentifiers:(id)arg3;
- (bool)isAppropriateForContext;
- (bool)isListening;
- (id)objectForContextEvaluatorKey:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;
- (void)setType:(id)arg1;
- (id)speechRecognizer;
- (void)speechRecognizer:(id)arg1 didBeginUtteranceWithID:(unsigned long long)arg2;
- (void)speechRecognizer:(id)arg1 didRecognizeRXResult:(struct __RXLanguageObject { }*)arg2;
- (id)spokenCommands;
- (void)startListening;
- (void)stopListening;
- (void)synchronizeWithReason:(id)arg1;
- (id)type;

@end
