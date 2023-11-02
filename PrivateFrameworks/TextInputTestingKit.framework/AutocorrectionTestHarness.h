
@interface AutocorrectionTestHarness : NSObject <TIKeyboardInputManagerFactory, TITestHarness> {
    TIKeyboardInputManagerConfig * _config;
    TITestTyperDriver * _dslTestDriver;
    TIErrorGenerator * _errorGenerator;
    NSMutableArray * _insertedText;
    bool  _multilingualEnabled;
    NSMutableArray * _resultClassifiers;
    bool  _saveDebugData;
    TIInputMode * _secondaryInputMode;
    TIKeyboardTyper * _testTyper;
}

@property (nonatomic, readonly) TIKeyboardInputManagerConfig *config;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) TITestTyperDriver *dslTestDriver;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool multilingualEnabled;
@property (nonatomic, readonly) NSArray *resultClassifiers;
@property bool saveDebugData;
@property (nonatomic, readonly) TIInputMode *secondaryInputMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TIKeyboardTyper *testTyper;

+ (id)overrideInputMode:(id)arg1;

- (void).cxx_destruct;
- (bool)compareExpectedValue:(id)arg1 withResult:(id)arg2;
- (id)config;
- (id)dslTestDriver;
- (id)emptyResultForPlayback:(id)arg1;
- (id)emptyResultForTest:(id)arg1;
- (id)friendId;
- (id)initWithAttributes:(id)arg1;
- (void)initializeConversationHistory;
- (id)keyboardFromWidth:(id)arg1 orientation:(id)arg2 keyboardLayout:(id)arg3;
- (bool)multilingualEnabled;
- (id)newKeyboardInputManager;
- (void)nullifyConversationHistory;
- (bool)outcomeIsFailureForTest:(id)arg1 withResult:(id)arg2;
- (id)replayTest:(id)arg1 withError:(id)arg2;
- (bool)requiresMaintenance;
- (void)reset;
- (id)resultClassifiers;
- (id)runConversationTest:(id)arg1 trialID:(unsigned long long)arg2 withError:(id)arg3;
- (id)runTest:(id)arg1 trialID:(unsigned long long)arg2 withError:(id)arg3;
- (bool)saveDebugData;
- (id)secondaryInputMode;
- (unsigned int)seedForTest:(id)arg1 trialID:(unsigned long long)arg2;
- (id)selfId;
- (void)setResultClassifiers;
- (void)setSaveDebugData:(bool)arg1;
- (void)tearDown;
- (void)testConversation:(id)arg1 testingSender:(id)arg2 warmupMessages:(unsigned long long)arg3 adaptToSentMessages:(bool)arg4 adaptToReceivedMessages:(bool)arg5 trialID:(unsigned long long)arg6 withError:(id)arg7 writingResults:(id)arg8;
- (id)testTerminator;
- (id)testTyper;
- (void)trainWithCorpus:(id)arg1;
- (id)typeTest:(id)arg1 withError:(id)arg2;

@end
