
@interface CHRecognitionInsight : NSObject {
    int  _autoCapitalizationMode;
    int  _autoCorrectionMode;
    int  _baseWritingDirection;
    CHDrawing * _inputDrawing;
    CHRecognitionInsightRequest * _insightRequest;
    NSError * _recognitionError;
    NSCharacterSet * _recognizerActiveCharacterSet;
    int  _recognizerContentType;
    NSLocale * _recognizerLocale;
    unsigned long long  _recognizerMaxRecognitionResultCount;
    struct CGSize { 
        double width; 
        double height; 
    }  _recognizerMinimumDrawingSize;
    NSDictionary * _recognizerOptions;
    int  _recognizerRecognitionMode;
    CHTokenizedTextResult * _textResult;
}

@property (nonatomic, readonly) int autoCapitalizationMode;
@property (nonatomic, readonly) NSString *autoCapitalizationModeDescription;
@property (nonatomic, readonly) int autoCorrectionMode;
@property (nonatomic, readonly) NSString *autoCorrectionModeDescription;
@property (nonatomic, readonly) int baseWritingDirection;
@property (nonatomic, readonly) NSString *baseWritingDirectionDescription;
@property (nonatomic, readonly, copy) CHDrawing *inputDrawing;
@property (nonatomic, readonly) CHRecognitionInsightRequest *insightRequest;
@property (nonatomic, readonly, copy) NSError *recognitionError;
@property (nonatomic, readonly, copy) NSCharacterSet *recognizerActiveCharacterSet;
@property (nonatomic, readonly) int recognizerContentType;
@property (nonatomic, readonly) NSString *recognizerContentTypeDescription;
@property (nonatomic, readonly, copy) NSLocale *recognizerLocale;
@property (nonatomic, readonly) unsigned long long recognizerMaxRecognitionResultCount;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } recognizerMinimumDrawingSize;
@property (nonatomic, readonly, copy) NSDictionary *recognizerOptions;
@property (nonatomic, readonly) int recognizerRecognitionMode;
@property (nonatomic, readonly) NSString *recognizerRecognitionModeDescription;
@property (nonatomic, readonly, copy) CHTokenizedTextResult *textResult;

- (void).cxx_destruct;
- (int)autoCapitalizationMode;
- (id)autoCapitalizationModeDescription;
- (int)autoCorrectionMode;
- (id)autoCorrectionModeDescription;
- (int)baseWritingDirection;
- (id)baseWritingDirectionDescription;
- (id)description;
- (id)inputDrawing;
- (id)insightRequest;
- (id)recognitionError;
- (id)recognizerActiveCharacterSet;
- (int)recognizerContentType;
- (id)recognizerContentTypeDescription;
- (id)recognizerLocale;
- (unsigned long long)recognizerMaxRecognitionResultCount;
- (struct CGSize { double x1; double x2; })recognizerMinimumDrawingSize;
- (id)recognizerOptions;
- (int)recognizerRecognitionMode;
- (id)recognizerRecognitionModeDescription;
- (void)recordConfigurationForRecognizer:(id)arg1 options:(id)arg2;
- (void)recordInputDrawing:(id)arg1;
- (void)recordInsightRequest:(id)arg1;
- (void)recordTextResult:(id)arg1 recognitionError:(id)arg2;
- (id)textResult;

@end
