
@interface SLBertClassifier : NSObject {
    NSString * _assetVersion;
    MLModel * _bertModel;
    unsigned long long  _maxInputCharsPerWord;
    unsigned long long  _maxNumTokens;
    unsigned long long  _numLeadingTokens;
    NSString * _outputNodeName;
    bool  _shouldAppendLeadingText;
    NSArray * _truncationTokenList;
    NSString * _unkToken;
    NSArray * _vocab;
}

@property (nonatomic, retain) NSString *assetVersion;
@property (nonatomic, retain) MLModel *bertModel;
@property (nonatomic) unsigned long long maxInputCharsPerWord;
@property (nonatomic) unsigned long long maxNumTokens;
@property (nonatomic) unsigned long long numLeadingTokens;
@property (nonatomic, retain) NSString *outputNodeName;
@property (nonatomic) bool shouldAppendLeadingText;
@property (nonatomic, retain) NSArray *truncationTokenList;
@property (nonatomic, retain) NSString *unkToken;
@property (nonatomic, retain) NSArray *vocab;

- (void).cxx_destruct;
- (id)_createInputIdsAndRunModel:(id)arg1;
- (bool)_isCharPunctuation:(unsigned short)arg1;
- (id)_normalizeText:(id)arg1;
- (void)_readVocabFromFile:(id)arg1;
- (id)_splitOnPunctuation:(id)arg1;
- (id)_wordPieceTokenizer:(id)arg1;
- (id)assetVersion;
- (id)bertModel;
- (id)initWithConfig:(id)arg1 error:(id*)arg2 locale:(id)arg3;
- (unsigned long long)maxInputCharsPerWord;
- (unsigned long long)maxNumTokens;
- (unsigned long long)numLeadingTokens;
- (id)outputNodeName;
- (id)processInputText:(id)arg1;
- (id)processSpeechPackage:(id)arg1;
- (void)setAssetVersion:(id)arg1;
- (void)setBertModel:(id)arg1;
- (void)setMaxInputCharsPerWord:(unsigned long long)arg1;
- (void)setMaxNumTokens:(unsigned long long)arg1;
- (void)setNumLeadingTokens:(unsigned long long)arg1;
- (void)setOutputNodeName:(id)arg1;
- (void)setShouldAppendLeadingText:(bool)arg1;
- (void)setTruncationTokenList:(id)arg1;
- (void)setUnkToken:(id)arg1;
- (void)setVocab:(id)arg1;
- (bool)shouldAppendLeadingText;
- (id)truncationTokenList;
- (id)unkToken;
- (id)vocab;

@end
