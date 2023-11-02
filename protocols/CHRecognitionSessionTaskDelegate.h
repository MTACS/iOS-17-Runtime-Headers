
@protocol CHRecognitionSessionTaskDelegate <NSObject>

@required

- (<CHRecognizing> *)recognizerForLocale:(NSLocale *)arg1;
- (CHTextCorrectionRecognizer *)textCorrectionRecognizerForLocales:(NSArray *)arg1;

@end
