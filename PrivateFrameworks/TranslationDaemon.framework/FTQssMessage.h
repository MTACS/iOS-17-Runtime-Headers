
@interface FTQssMessage : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSData * _data;
    const struct QssMessage { unsigned char x1[1]; } * _root;
    NSMutableDictionary * _storage;
}

@property (nonatomic, readonly) NSObject<FLTBFBufferAccessor><NSCopying> *container_message;
@property (nonatomic, readonly) FTApgBatchRecoverMessage *container_messageAsFTApgBatchRecoverMessage;
@property (nonatomic, readonly) FTApgPronGuessMessage *container_messageAsFTApgPronGuessMessage;
@property (nonatomic, readonly) FTAsrCorrectionsValidatorMessage *container_messageAsFTAsrCorrectionsValidatorMessage;
@property (nonatomic, readonly) FTAsrErrorBlamerMessage *container_messageAsFTAsrErrorBlamerMessage;
@property (nonatomic, readonly) FTAsrGraphemeToPhonemeMessage *container_messageAsFTAsrGraphemeToPhonemeMessage;
@property (nonatomic, readonly) FTAsrItnMessage *container_messageAsFTAsrItnMessage;
@property (nonatomic, readonly) FTAsrKeywordFinderMessage *container_messageAsFTAsrKeywordFinderMessage;
@property (nonatomic, readonly) FTAsrPostItnHammerMessage *container_messageAsFTAsrPostItnHammerMessage;
@property (nonatomic, readonly) FTAsrRecognitionMessage *container_messageAsFTAsrRecognitionMessage;
@property (nonatomic, readonly) FTAsrTextNormalizationMessage *container_messageAsFTAsrTextNormalizationMessage;
@property (nonatomic, readonly) FTBlazarBatchTranslationMessage *container_messageAsFTBlazarBatchTranslationMessage;
@property (nonatomic, readonly) FTBlazarMultiUserMessage *container_messageAsFTBlazarMultiUserMessage;
@property (nonatomic, readonly) FTBlazarMultilingualMessage *container_messageAsFTBlazarMultilingualMessage;
@property (nonatomic, readonly) FTBlazarServiceDiscoveryMessage *container_messageAsFTBlazarServiceDiscoveryMessage;
@property (nonatomic, readonly) FTBlazarSpeechTranslationMessage *container_messageAsFTBlazarSpeechTranslationMessage;
@property (nonatomic, readonly) FTBlazarTextToSpeechRouterMessage *container_messageAsFTBlazarTextToSpeechRouterMessage;
@property (nonatomic, readonly) FTBlazarTextToSpeechRouterStreamingMessage *container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
@property (nonatomic, readonly) FTLmtLmScorerMessage *container_messageAsFTLmtLmScorerMessage;
@property (nonatomic, readonly) FTMtStreamingTranslationMessage *container_messageAsFTMtStreamingTranslationMessage;
@property (nonatomic, readonly) FTMtTranslationMessage *container_messageAsFTMtTranslationMessage;
@property (nonatomic, readonly) FTNapgCreateLanguageProfileMessage *container_messageAsFTNapgCreateLanguageProfileMessage;
@property (nonatomic, readonly) FTNlShortcutFuzzyMatchMessage *container_messageAsFTNlShortcutFuzzyMatchMessage;
@property (nonatomic, readonly) FTSlsLanguageDetectionMessage *container_messageAsFTSlsLanguageDetectionMessage;
@property (nonatomic, readonly) FTTtsTextToSpeechMessage *container_messageAsFTTtsTextToSpeechMessage;
@property (nonatomic, readonly) FTTtsTextToSpeechSpeechFeatureMessage *container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
@property (nonatomic, readonly) FTTtsTextToSpeechStreamingMessage *container_messageAsFTTtsTextToSpeechStreamingMessage;
@property (nonatomic, readonly) long long container_message_type;
@property (nonatomic, readonly) FTDisableSessionLog *disable_session_log;
@property (nonatomic, readonly) FTErrorMessage *error_message;

+ (Class)container_message_immutableClassForType:(long long)arg1;
+ (long long)container_message_typeForImmutableObject:(id)arg1;

- (void).cxx_destruct;
- (struct Offset<siri::speech::qss_fb::QssMessage> { unsigned int x1; })addObjectToBuffer:(void*)arg1;
- (id)container_message;
- (id)container_messageAsFTApgBatchRecoverMessage;
- (id)container_messageAsFTApgPronGuessMessage;
- (id)container_messageAsFTAsrCorrectionsValidatorMessage;
- (id)container_messageAsFTAsrErrorBlamerMessage;
- (id)container_messageAsFTAsrGraphemeToPhonemeMessage;
- (id)container_messageAsFTAsrItnMessage;
- (id)container_messageAsFTAsrKeywordFinderMessage;
- (id)container_messageAsFTAsrPostItnHammerMessage;
- (id)container_messageAsFTAsrRecognitionMessage;
- (id)container_messageAsFTAsrTextNormalizationMessage;
- (id)container_messageAsFTBlazarBatchTranslationMessage;
- (id)container_messageAsFTBlazarMultiUserMessage;
- (id)container_messageAsFTBlazarMultilingualMessage;
- (id)container_messageAsFTBlazarServiceDiscoveryMessage;
- (id)container_messageAsFTBlazarSpeechTranslationMessage;
- (id)container_messageAsFTBlazarTextToSpeechRouterMessage;
- (id)container_messageAsFTBlazarTextToSpeechRouterStreamingMessage;
- (id)container_messageAsFTLmtLmScorerMessage;
- (id)container_messageAsFTMtStreamingTranslationMessage;
- (id)container_messageAsFTMtTranslationMessage;
- (id)container_messageAsFTNapgCreateLanguageProfileMessage;
- (id)container_messageAsFTNlShortcutFuzzyMatchMessage;
- (id)container_messageAsFTSlsLanguageDetectionMessage;
- (id)container_messageAsFTTtsTextToSpeechMessage;
- (id)container_messageAsFTTtsTextToSpeechSpeechFeatureMessage;
- (id)container_messageAsFTTtsTextToSpeechStreamingMessage;
- (long long)container_message_type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)disable_session_log;
- (id)error_message;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssMessage { unsigned char x1[1]; }*)arg2;
- (id)initWithFlatbuffData:(id)arg1 root:(const struct QssMessage { unsigned char x1[1]; }*)arg2 verify:(bool)arg3;

@end
