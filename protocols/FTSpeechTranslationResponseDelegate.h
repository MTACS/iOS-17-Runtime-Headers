
@protocol FTSpeechTranslationResponseDelegate <NSObject>

@optional

- (void)streamDidReceiveSpeechTranslationStreamingResponse:(FTSpeechTranslationStreamingResponse *)arg1;
- (void)streamFailVerifySpeechTranslationStreamingResponse:(NSError *)arg1;

@end
