
@interface RecognizeDrawingOperation : NSOperation {
    NSArray * _candidates;
    NSString * _history;
    TIInputManagerHandwriting * _im;
    NSLocale * _recognitionLanguage;
    CHRecognizer * _recognizer;
    TIHandwritingStrokes * _strokes;
}

@property (nonatomic, retain) NSArray *candidates;
@property (nonatomic, retain) NSString *history;
@property (nonatomic, retain) TIInputManagerHandwriting *manager;
@property (nonatomic, retain) CHRecognizer *recognizer;

+ (int)autoCorrectionModeForKeyboardAutoCorrectionType:(unsigned long long)arg1;
+ (int)capitalizationModeForKeyboardAutoCapitalizationType:(unsigned long long)arg1;
+ (id)drawingWithStrokes:(id)arg1;
+ (int)recognitionContentTypeForKeyboardState:(id)arg1;
+ (id)recognitionResultsForDrawing:(id)arg1 withRecognizer:(id)arg2 history:(id)arg3 shouldCancel:(id /* block */)arg4;
+ (id)textRecognitionResultsForDrawing:(id)arg1 withRecognizer:(id)arg2 keyboardState:(id)arg3 history:(id)arg4 shouldCancel:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)candidates;
- (void)dealloc;
- (id)history;
- (id)initWithInputManager:(id)arg1 strokes:(id)arg2 history:(id)arg3;
- (void)main;
- (id)manager;
- (id)recognizer;
- (void)setCandidates:(id)arg1;
- (void)setHistory:(id)arg1;
- (void)setManager:(id)arg1;
- (void)setRecognizer:(id)arg1;

@end
