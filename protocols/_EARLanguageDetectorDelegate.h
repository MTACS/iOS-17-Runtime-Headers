
@protocol _EARLanguageDetectorDelegate <NSObject>

@required

- (void)languageDetectorDidCompleteProcessing:(_EARLanguageDetector *)arg1 loggingInfo:(_EARLanguageDetectorLoggingInfo *)arg2;

@optional

- (void)languageDetector:(_EARLanguageDetector *)arg1 confidences:(NSDictionary *)arg2;
- (void)languageDetector:(_EARLanguageDetector *)arg1 result:(_EARLanguageDetectorResult *)arg2;

@end
