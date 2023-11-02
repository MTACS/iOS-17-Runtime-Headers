
@protocol CSLanguageDetectorDelegate <NSObject>

@required

- (void)languageDetectorDidDetectLanguageWithConfidence:(NSString *)arg1 confidence:(NSDictionary *)arg2 isConfident:(bool)arg3;

@optional

- (void)startOfSpeechDetectedAtFrame:(unsigned long long)arg1;

@end
