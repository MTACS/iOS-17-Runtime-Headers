
@interface CSPhraseNDEAPIScorer : NSObject <CSKeywordAnalyzerNDEAPIScoreDelegate> {
    NSMutableData * _dataBufferNDEAPI;
    unsigned long long  _dataBufferPositionNDEAPI;
    <CSPhraseNDEAPIScorerDelegate> * _delegate;
    unsigned char  _hasReceivedEarlyDetectNDEAPIResult;
    bool  _hasReceivedNDEAPIResult;
    CSKeywordAnalyzerNDEAPI * _keywordAnalyzerNDEAPI;
    CSShadowMicScoreCreator * _shadowMicScoreCreator;
    float  _shadowMicScoreThresholdForVAD;
}

@property (nonatomic, retain) NSMutableData *dataBufferNDEAPI;
@property (nonatomic) unsigned long long dataBufferPositionNDEAPI;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CSPhraseNDEAPIScorerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned char hasReceivedEarlyDetectNDEAPIResult;
@property (nonatomic) bool hasReceivedNDEAPIResult;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CSKeywordAnalyzerNDEAPI *keywordAnalyzerNDEAPI;
@property (nonatomic, retain) CSShadowMicScoreCreator *shadowMicScoreCreator;
@property (nonatomic, readonly) float shadowMicScoreThresholdForVAD;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_rtModelFromAsset:(id)arg1 requestOptions:(id)arg2 forSiriLanguage:(id)arg3 withPhraseCount:(unsigned long long)arg4;
- (double)currentShadowMicScore;
- (id)dataBufferNDEAPI;
- (unsigned long long)dataBufferPositionNDEAPI;
- (id)delegate;
- (unsigned char)hasReceivedEarlyDetectNDEAPIResult;
- (bool)hasReceivedNDEAPIResult;
- (id)initWithAsset:(id)arg1 assetConfig:(id)arg2 firstPassSource:(unsigned long long)arg3 activeChannel:(unsigned long long)arg4 siriLanguage:(id)arg5 shouldEnableShadowMicScore:(bool)arg6 rtmodelRequestOptions:(id)arg7;
- (id)keywordAnalyzerNDEAPI;
- (void)keywordAnalyzerNDEAPI:(id)arg1 hasResultAvailable:(id)arg2 forChannel:(unsigned long long)arg3;
- (void)processAudioChunk:(id)arg1 activeChannel:(unsigned long long)arg2;
- (void)reset;
- (void)setDataBufferNDEAPI:(id)arg1;
- (void)setDataBufferPositionNDEAPI:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHasReceivedEarlyDetectNDEAPIResult:(unsigned char)arg1;
- (void)setHasReceivedNDEAPIResult:(bool)arg1;
- (void)setKeywordAnalyzerNDEAPI:(id)arg1;
- (void)setShadowMicScoreCreator:(id)arg1;
- (id)shadowMicScoreCreator;
- (float)shadowMicScoreThresholdForVAD;

@end
