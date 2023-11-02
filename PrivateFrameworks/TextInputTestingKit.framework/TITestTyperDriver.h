
@interface TITestTyperDriver : NSObject {
    bool  _debug;
    NSMutableArray * _failedTests;
    NSMutableArray * _syntaxErrors;
    TIKeyboardTyper * _testTyper;
}

@property (getter=isDebug, nonatomic) bool debug;
@property (nonatomic, readonly) NSMutableArray *failedTests;
@property (nonatomic, readonly) NSMutableArray *syntaxErrors;
@property (nonatomic, retain) TIKeyboardTyper *testTyper;

- (void).cxx_destruct;
- (bool)consumeTestFile:(id)arg1;
- (bool)consumeTextString:(id)arg1;
- (id)failedTests;
- (bool)handleBoolConfig:(id)arg1 withValue:(bool)arg2 lineNumber:(int)arg3;
- (void)handleCommand:(id)arg1 withValue:(id)arg2 lineNumber:(int)arg3;
- (void)handleCorrectionMatch:(id)arg1 lineNumber:(int)arg2;
- (void)handleDocumentMatch:(id)arg1 lineNumber:(int)arg2;
- (bool)handleIntConfig:(id)arg1 withValue:(int)arg2 lineNumber:(int)arg3;
- (void)handleNewLine;
- (void)handlePredictionMatch:(id)arg1 lineNumber:(int)arg2;
- (bool)handleStringConfig:(id)arg1 withValue:(id)arg2 lineNumber:(int)arg3;
- (void)handleTyping:(id)arg1;
- (id)init;
- (id)initWithTestTyper:(id)arg1;
- (bool)isDebug;
- (void)printDebugInfo:(id)arg1 lineNumber:(int)arg2;
- (void)reportFailedTest:(id)arg1 lineNumber:(int)arg2;
- (void)reportSyntaxErrors:(id)arg1 lineNumber:(int)arg2;
- (void)selectFromPredictionBar:(id)arg1 lineNumber:(int)arg2;
- (void)setDebug:(bool)arg1;
- (void)setTestTyper:(id)arg1;
- (id)syntaxErrors;
- (id)testTyper;

@end
