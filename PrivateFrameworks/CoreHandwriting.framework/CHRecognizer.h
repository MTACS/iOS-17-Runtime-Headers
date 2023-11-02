
@interface CHRecognizer : NSObject <CHRecognizing> {
    NSCharacterSet * _activeCharacterSet;
    CHRecognitionInsight * _activeRecognitionInsight;
    CHDrawing * _cachedDrawing;
    struct map<std::set<long>, std::vector<CHCandidateResult>, std::less<std::set<long>>, std::allocator<std::pair<const std::set<long>, std::vector<CHCandidateResult>>>> { 
        struct __tree<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>>, std::allocator<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::set<long>, std::__value_type<std::set<long>, std::vector<CHCandidateResult>>, std::less<std::set<long>>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _cachedResults;
    struct map<unsigned int, unsigned int, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned int>>> { 
        struct __tree<std::__value_type<unsigned int, unsigned int>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned int>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _characterIDMap;
    void * _characterLanguageModel;
    void * _cjkDynamicLexicon;
    void * _cjkStaticLexicon;
    CHRecognizerConfiguration * _configuration;
    struct _LXLexicon { } * _customLexicon;
    struct _LXLexicon { } * _customPhraseLexicon;
    struct CHNeuralNetwork { int (*x1)(); bool x2; struct CHCodeMap {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_10_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_10_1_2; } x10; } * _engine;
    void * _formatGrammarFST;
    struct CHNeuralNetwork { int (*x1)(); bool x2; struct CHCodeMap {} *x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; id x8; id x9; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_10_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_10_1_2; } x10; } * _freeformEngine;
    void ** _icuTransliterator;
    unsigned long long  _lastCharacterSegmentCount;
    NSMutableIndexSet * _lastCharacterSegmentIndexes;
    NSURL * _learningDictionaryURL;
    void * _lmVocabulary;
    unsigned long long  _maxRecognitionResultCount;
    CHMecabraWrapper * _mecabraWrapper;
    CHPostProcessingManager * _mergedResultPostProcessor;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumDrawingSize;
    struct optional<CoreRecognition::decoder::CTCBeamSearchDecoder<CoreRecognition::decoder::AdditiveCombiningBeamScorer<>, CoreRecognition::decoder::SpaceSegmentedPathBuilder<CoreRecognition::decoder::CombinedBeamState>>> { 
        union { 
            BOOL __null_state_; 
            struct CTCBeamSearchDecoder<CoreRecognition::decoder::AdditiveCombiningBeamScorer<>, CoreRecognition::decoder::SpaceSegmentedPathBuilder<CoreRecognition::decoder::CombinedBeamState>> { 
                int (**_vptr$AbstractCTCDecoder)(); 
                unsigned long long blankLabel_; 
                struct AdditiveCombiningBeamScorer<CoreRecognition::decoder::CombinedBeamState> { 
                    int (**_vptr$BaseBeamScorer)(); 
                    double weight_; 
                    double logProbLowerBound_; 
                    struct vector<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>, std::allocator<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>>> { 
                        void *__begin_; 
                        void *__end_; 
                        struct __compressed_pair<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer> *, std::allocator<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>>> { 
                            void *__value_; 
                        } __end_cap_; 
                    } scorers_; 
                } beamScorer_; 
                struct SpaceSegmentedPathBuilder<CoreRecognition::decoder::CombinedBeamState> { 
                    int (**_vptr$AbstractResultPathBuilder)(); 
                    bool optimizeAlignment_; 
                    struct vector<unsigned long, std::allocator<unsigned long>> { 
                        unsigned long long *__begin_; 
                        unsigned long long *__end_; 
                        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                            unsigned long long *__value_; 
                        } __end_cap_; 
                    } spaceLabels_; 
                } pathBuilder_; 
                struct CTCBeamSearchConfig { 
                    unsigned long long blankLabel; 
                    int beamWidth; 
                    int numBestPaths; 
                    double labelSelectionThreshold; 
                    struct optional<CoreRecognition::decoder::ActivationPruning> { 
                        union { 
                            BOOL __null_state_; 
                            struct ActivationPruning { 
                                float threshold; 
                                unsigned long long numCandidates; 
                                bool cumulative; 
                            } __val_; 
                        } ; 
                        bool __engaged_; 
                    } pruner; 
                } config_; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _modernizedTextDecoder;
    CHRecognitionInsightRequest * _nextRecognitionInsightRequest;
    CHStringOVSChecker * _ovsStringChecker;
    CHPatternNetwork * _patternFST;
    struct _LXLexicon { } * _phraseLexicon;
    CHPatternNetwork * _postProcessingFST;
    CHPostProcessingManager * _postProcessor;
    void * _radicalClusterFST;
    CHCTCRecognitionModel * _recognitionModel;
    NSObject<OS_dispatch_queue> * _recognitionQueue;
    int  _recognitionType;
    struct _LXLexicon { } * _secondaryStaticLexicon;
    CHSpellChecker * _spellChecker;
    struct _LXLexicon { } * _staticLexicon;
    CVNLPCTCTextDecoder * _textDecoder;
    NSMutableDictionary * _textReplacementLowercasedKeyMapping;
    NSDictionary * _textReplacements;
    struct VariantMap { int *x1; int *x2; int *x3; int x4; int *x5; unsigned long long x6; } * _transliterationVariantMap;
    NSArray * _whitelistMecabraRareCharacters;
    void * _wordLanguageModel;
}

@property (nonatomic, retain) NSCharacterSet *activeCharacterSet;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (setter=_setConfiguration:, nonatomic, retain) CHRecognizerConfiguration *configuration;
@property (nonatomic) int contentType;
@property (nonatomic) struct _LXLexicon { }*customPhraseLexicon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableCachingIfAvailable;
@property (nonatomic) bool enableGen2CharacterLMIfAvailable;
@property (nonatomic) bool enableGen2ModelIfAvailable;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (nonatomic, retain) CHMecabraWrapper *mecabraWrapper;
@property (nonatomic, retain) CHPostProcessingManager *mergedResultPostProcessor;
@property (nonatomic) struct CGSize { double x1; double x2; } minimumDrawingSize;
@property (nonatomic, retain) CHStringOVSChecker *ovsStringChecker;
@property (nonatomic, retain) CHPostProcessingManager *postProcessor;
@property (nonatomic) int recognitionMode;
@property (nonatomic) int recognitionType;
@property (nonatomic, readonly) CHRecognitionInsight *recordedInsightFromLastRequest;
@property (nonatomic, retain) CHSpellChecker *spellChecker;
@property (nonatomic) struct _LXLexicon { }*staticLexicon;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDictionary *textReplacements;
@property (nonatomic) void*wordLanguageModel;

+ (void)_updatePrecedingAndTrailingSeparatorsForTopCandidate:(id)arg1 history:(id)arg2 textAfter:(id)arg3 locale:(id)arg4 outTrailingSeparator:(id*)arg5 inFirstTokenHasPrecedingSpace:(bool)arg6 outFirstTokenHasPrecedingSpace:(bool*)arg7;
+ (bool)isLocaleSupported:(id)arg1 withMode:(int)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_addAlternativeCandidatesForTokenizedResult:(id)arg1;
- (void)_adjustCandidatesForConfusableCharacters:(void*)arg1;
- (void)_adjustResultsForConfusableCharacters:(id)arg1;
- (id)_applySentenceTransliterationCandidates:(unsigned short*)arg1 codesLen:(int)arg2 codesMax:(int)arg3;
- (void)_applyTransliterationAndSyntheticCandidates:(void*)arg1;
- (void)_calculateBestTranscriptionPaths:(id*)arg1 scores:(id*)arg2 fromTokenizedResult:(id)arg3 pathCount:(long long)arg4 history:(id)arg5 skipLMRescoring:(bool)arg6;
- (double)_calculateJointWordLMScoreForString:(id)arg1 wordRanges:(id)arg2 wordIDs:(id)arg3 patternEntries:(id)arg4 history:(unsigned int*)arg5 historyLength:(unsigned long long)arg6;
- (id)_changeableColumnCountUpdatedResult:(id)arg1 options:(id)arg2;
- (id)_contextTokenIDsFromHistory:(id)arg1 maxCharacterLength:(unsigned long long)arg2 maxTokenCount:(unsigned long long)arg3;
- (id)_defaultPunctuationStringsOutputScores:(id*)arg1 maxCandidateCount:(long long)arg2;
- (unsigned long long)_effectiveMaxRecognitionResultCount;
- (void)_initializeMergedResultPostProcessor;
- (bool)_isLocaleSupported:(id)arg1;
- (id)_postprocessingMergedRecognitionResult:(id)arg1 options:(id)arg2;
- (void)_rescoreCandidatesWithLanguageModel:(void*)arg1 history:(id)arg2;
- (id)_resultUsingNextGenerationPipelineWithDrawing:(id)arg1 options:(id)arg2;
- (void)_setConfiguration:(id)arg1;
- (id)_tokenFromLegacyResult:(id)arg1 wordIndex:(unsigned long long)arg2 strokeSet:(id)arg3 substrokeCount:(long long)arg4;
- (id)_tokenizedTextResultFromResults:(id)arg1 segmentGroup:(id)arg2 offsetSegment:(long long)arg3 decodedStrokeSets:(bool)arg4 spaceBehavior:(long long)arg5;
- (id)_tokensUsingLMTokenizerForString:(id)arg1 wordRanges:(id)arg2 nonWordPatterns:(id)arg3 outTokenIDs:(id*)arg4;
- (void)_updateWordLanguageModel:(void*)arg1;
- (id)activeCharacterSet;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (id)bestTranscriptionPathsForTokenizedResult:(id)arg1 scores:(id*)arg2 history:(id)arg3;
- (void)candidateAccepted:(void*)arg1;
- (id)characterSetForStrings:(id)arg1;
- (struct vector<const void *, std::allocator<const void *>> { void **x1; void **x2; struct __compressed_pair<const void **, std::allocator<const void *>> { void **x_3_1_1; } x3; })completionsForCandidate:(id)arg1 candidateContext:(id)arg2 prefix:(id)arg3 option:(unsigned long long)arg4;
- (struct vector<const void *, std::allocator<const void *>> { void **x1; void **x2; struct __compressed_pair<const void **, std::allocator<const void *>> { void **x_3_1_1; } x3; })completionsForCandidate:(id)arg1 prefix:(id)arg2 option:(unsigned long long)arg3;
- (id)configuration;
- (int)contentType;
- (struct _LXLexicon { }*)customPhraseLexicon;
- (void)dealloc;
- (bool)enableCachingIfAvailable;
- (bool)enableGen2CharacterLMIfAvailable;
- (bool)enableGen2ModelIfAvailable;
- (id)initWithMode:(int)arg1 locale:(id)arg2;
- (id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithMode:(int)arg1 locale:(id)arg2 learningDictionaryURL:(id)arg3 recognizerOptions:(id)arg4;
- (id)initWithMode:(int)arg1 locale:(id)arg2 recognizerOptions:(id)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2;
- (id)initWithType:(int)arg1 mode:(int)arg2 learningDictionaryURL:(id)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale { }*)arg3;
- (id)initWithType:(int)arg1 mode:(int)arg2 locale:(struct __CFLocale { }*)arg3 learningDictionaryURL:(id)arg4;
- (bool)isOVSString:(id)arg1;
- (bool)isRareChineseEntry:(id)arg1;
- (id)locale;
- (unsigned long long)maxRecognitionResultCount;
- (id)mecabraWrapper;
- (id)mergedResultPostProcessor;
- (struct CGSize { double x1; double x2; })minimumDrawingSize;
- (id)ovsStringChecker;
- (id)postProcessor;
- (id)recognitionEngineCachingKey;
- (int)recognitionMode;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2;
- (id)recognitionResultsForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* block */)arg3;
- (int)recognitionType;
- (void)recordInsightWithRequest:(id)arg1;
- (id)recordedInsightFromLastRequest;
- (void)setActiveCharacterSet:(id)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setContentType:(int)arg1;
- (void)setCustomLexicon:(struct _LXLexicon { }*)arg1 customVocabulary:(void*)arg2;
- (void)setCustomPhraseLexicon:(struct _LXLexicon { }*)arg1;
- (void)setEnableCachingIfAvailable:(bool)arg1;
- (void)setEnableGen2CharacterLMIfAvailable:(bool)arg1;
- (void)setEnableGen2ModelIfAvailable:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setMaxRecognitionResultCount:(unsigned long long)arg1;
- (void)setMecabraWrapper:(id)arg1;
- (void)setMergedResultPostProcessor:(id)arg1;
- (void)setMinimumDrawingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOvsStringChecker:(id)arg1;
- (void)setPostProcessor:(id)arg1;
- (void)setRecognitionMode:(int)arg1;
- (void)setRecognitionType:(int)arg1;
- (void)setSpellChecker:(id)arg1;
- (void)setStaticLexicon:(struct _LXLexicon { }*)arg1;
- (void)setTextReplacements:(id)arg1;
- (void)setWordLanguageModel:(void*)arg1;
- (id)spellChecker;
- (struct _LXLexicon { }*)staticLexicon;
- (id)strokeIndexesForLastCharacter;
- (id)supportedCharacterSet;
- (id)supportedStrings;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 shouldCancel:(id /* block */)arg3;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 writingStatistics:(id)arg3 shouldCancel:(id /* block */)arg4;
- (id)textReplacements;
- (id)transliterationVariantsForString:(id)arg1;
- (void)updateAddressBookLexicon:(id)arg1;
- (void)updateMecabraWithRegionalOTAAssets:(id)arg1 nonRegionalOTAAssets:(id)arg2;
- (void)updateUserDictionaryLexicon:(id)arg1;
- (void*)wordLanguageModel;

@end
