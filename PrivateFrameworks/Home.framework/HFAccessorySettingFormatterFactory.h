
@interface HFAccessorySettingFormatterFactory : NSObject {
    NSMutableDictionary * _formattersForKey;
}

@property (nonatomic, retain) NSMutableDictionary *formattersForKey;

+ (id)_announceEnabledFormatter;
+ (id)_audioAnalysisEnabledFormatter;
+ (id)_doorbellChimeEnabledFormatter;
+ (id)_siriFormatter;
+ (id)_siriOutputVoiceFormatter;
+ (id)_siriPersonalRequestsFormatter;
+ (id)_siriRecognitionLanguageFormatter;
+ (id)defaultFactory;

- (void).cxx_destruct;
- (id)_buildFormatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1;
- (id)formatterForKey:(id)arg1 copy:(bool)arg2;
- (id)formattersForKey;
- (id)init;
- (void)setFormattersForKey:(id)arg1;

@end
