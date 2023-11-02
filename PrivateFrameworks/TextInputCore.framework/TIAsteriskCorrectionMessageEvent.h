
@interface TIAsteriskCorrectionMessageEvent : NSObject {
    NSString * _asteriskCorrectionType;
    NSString * _bundleId;
    int  _finalWordsEnteredCount;
    TITypingSessionAligned * _messageAlignedSession;
    TITypingSession * _messageSession;
    NSString * _messageText;
    unsigned long long  _prevMsgAutocorrectionType;
    NSString * _wordCountType;
    int  _wordsEnteredCount;
}

@property (nonatomic, retain) NSString *asteriskCorrectionType;
@property (readonly) NSString *bundleId;
@property int finalWordsEnteredCount;
@property (retain) TITypingSessionAligned *messageAlignedSession;
@property (retain) TITypingSession *messageSession;
@property (nonatomic, retain) NSString *messageText;
@property (readonly) unsigned long long prevMsgAutocorrectionType;
@property (nonatomic, retain) NSString *wordCountType;
@property int wordsEnteredCount;

- (void).cxx_destruct;
- (void)adjustEmojiCountsFromKeyboardInputForWordAligned:(id)arg1;
- (void)analyzeEvent;
- (void)analyzeWordEntry:(id)arg1;
- (void)analyzeWordEntryAligned:(id)arg1;
- (id)assessAsteriskCorrection;
- (id)asteriskCorrectionType;
- (id)bundleId;
- (void)dispatchAsteriskEventWithFeatureUsageMetricsCache:(id)arg1 andContext:(id)arg2 assetAvailabilityStatus:(long long)arg3;
- (int)finalWordsEnteredCount;
- (bool)hasText:(id)arg1;
- (bool)hasTextInWordEntry:(id)arg1;
- (id)initWithSession:(id)arg1 andPrevMsgAutocorrectionType:(unsigned long long)arg2 andBundleId:(id)arg3;
- (id)messageAlignedSession;
- (id)messageSession;
- (id)messageText;
- (unsigned long long)prevMsgAutocorrectionType;
- (void)setAsteriskCorrectionType:(id)arg1;
- (void)setFinalWordsEnteredCount:(int)arg1;
- (void)setMessageAlignedSession:(id)arg1;
- (void)setMessageSession:(id)arg1;
- (void)setMessageText:(id)arg1;
- (void)setWordCountType:(id)arg1;
- (void)setWordsEnteredCount:(int)arg1;
- (id)wordCountType;
- (int)wordsEnteredCount;

@end
