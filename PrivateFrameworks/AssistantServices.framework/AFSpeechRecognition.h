
@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _phrases;
    double  _processedAudioDuration;
    NSArray * _utterances;
}

@property (nonatomic, readonly, copy) NSArray *phrases;
@property (nonatomic, readonly) double processedAudioDuration;
@property (nonatomic, readonly, copy) NSArray *utterances;

+ (id)fakeOneBestFromPhrases:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)tokenListFromUtterance:(id)arg1 phrases:(id)arg2;
+ (id)transcriptFromTokens:(id)arg1;

- (void).cxx_destruct;
- (id)aceRecognition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhrases:(id)arg1;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2;
- (id)initWithPhrases:(id)arg1 utterances:(id)arg2 processedAudioDuration:(double)arg3;
- (id)nBestTokenLists;
- (id)nBestTokenListsFromSausage;
- (id)nBestTokenListsLossless;
- (id)nBestTranscripts;
- (id)oneBestTokenList;
- (id)oneBestTranscript;
- (id)phrases;
- (double)processedAudioDuration;
- (id)utterances;

@end
