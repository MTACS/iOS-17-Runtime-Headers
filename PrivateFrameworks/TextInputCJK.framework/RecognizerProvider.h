
@interface RecognizerProvider : NSObject {
    NSLocale * _recognitionLanguage;
    int  _recognitionMode;
    CHRecognizer * _recognizer;
    id /* block */  _recognizerDidLoadBlock;
}

@property (readonly) NSLocale *recognitionLanguage;
@property (readonly) int recognitionMode;
@property (readonly) CHRecognizer *recognizer;
@property (copy) id /* block */ recognizerDidLoadBlock;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRecognitionLanguage:(id)arg1 mode:(int)arg2;
- (void)provideRecognizerToBlock:(id /* block */)arg1;
- (id)recognitionLanguage;
- (int)recognitionMode;
- (id)recognizer;
- (id /* block */)recognizerDidLoadBlock;
- (void)setRecognizerDidLoadBlock:(id /* block */)arg1;
- (void)unloadRecognizer;

@end
