
@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding> {
    NSOrderedSet * _characterObservations;
    CRNeuralRecognizerConfiguration * _configuration;
    NSLocale * _locale;
    CRTextSequenceRecognizerModel * _model;
    CRRegex * _regExpressions;
    bool  _shouldUseFalsePositiveFiltering;
    bool  _shouldUseLM;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _spaceLabels;
    NSMutableSet * _subscribedLocales;
}

@property (nonatomic, readonly) NSOrderedSet *characterObservations;
@property (retain) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSLocale *locale;
@property (retain) CRTextSequenceRecognizerModel *model;
@property (readonly) struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; } pruningPolicy;
@property (nonatomic, retain) CRRegex *regExpressions;
@property (nonatomic) bool shouldUseFalsePositiveFiltering;
@property (nonatomic) bool shouldUseLM;
@property (nonatomic, readonly) bool shouldUseModernizedDecoder;
@property (nonatomic, readonly) NSMutableSet *subscribedLocales;
@property (readonly) Class superclass;

+ (id)_cvnlpDecodingResultByRerankingCandidates:(id)arg1 decodingLocale:(id)arg2;
+ (struct unordered_map<CRDisambiguatedScript, std::vector<unsigned long>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>, std::allocator<std::pair<const CRDisambiguatedScript, std::vector<unsigned long>>>> { struct __hash_table<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::__unordered_map_hasher<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::hash<CRDisambiguatedScript>, std::equal_to<CRDisambiguatedScript>>, std::__unordered_map_equal<CRDisambiguatedScript, std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, std::equal_to<CRDisambiguatedScript>, std::hash<CRDisambiguatedScript>>, std::allocator<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<CRDisambiguatedScript, std::vector<unsigned long>>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; } x1; })_disambiguatedScriptFeatureIndicesWithInfo:(id)arg1;
+ (unsigned long long)_disambiguatedScriptForString:(id)arg1;
+ (id)lmSupportedLanguages;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildActivationMatrices:(id)arg1;
- (id /* block */)_commitActionBehavior;
- (void)_create2DArraysFromInputArray:(id)arg1 classSize:(unsigned long long*)arg2 outputArrays:(void*)arg3;
- (struct AdditiveCombiningBeamScorer<CoreRecognition::decoder::CombinedBeamState> { int (**x1)(); double x2; double x3; struct vector<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>, std::allocator<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>>> { void *x_4_1_1; void *x_4_1_2; struct __compressed_pair<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer> *, std::allocator<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>>> { void *x_3_2_1; } x_4_1_3; } x4; })_createBeamScorerWithBundle:(id)arg1 beamSearchConfig:(id)arg2 lmConfig:(id)arg3;
- (id)_cvnlpDecodingResultForActivationMatrix:(id)arg1 decodingLocale:(id)arg2 beamSearchConfig:(id)arg3 lmConfig:(id)arg4 error:(id*)arg5;
- (id)_cvnlpGreedyModernizedDecodingResultForActivationMatrix:(const void*)arg1;
- (id)_cvnlpModernizedDecodingResultForActivationMatrix:(const void*)arg1 decodingLocale:(id)arg2 beamSearchConfig:(id)arg3 lmConfig:(id)arg4 error:(id*)arg5;
- (bool)_decodeFeaturesWithInfo:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
- (bool)_decodeSingleFeatureWithInfo:(id)arg1 decodingLocale:(id)arg2 greedyDecoder:(id)arg3 greedyConfig:(id)arg4 beamSearchConfig:(id)arg5 imageSize:(struct CGSize { double x1; double x2; })arg6 useCharacterBoxes:(bool)arg7 lmConfig:(id)arg8 error:(id*)arg9;
- (bool)_shouldUseCharacterDecodingToken;
- (bool)_wordLMShouldFilterCandidate:(id)arg1 inLocale:(id)arg2 lmConfig:(id)arg3;
- (id)characterObservations;
- (void)computeLanguageRecognitionForSession:(id)arg1 output:(id)arg2 imageSize:(struct CGSize { double x1; double x2; })arg3;
- (id)configuration;
- (void)dealloc;
- (bool)decodeOutput:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 error:(id*)arg3;
- (id)initWithConfiguration:(id)arg1 model:(id)arg2 error:(id*)arg3;
- (id)locale;
- (id)model;
- (id)newLanguageRecognizerSession;
- (struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; })pruningPolicy;
- (id)regExpressions;
- (void)releaseUnusedResources;
- (void)setConfiguration:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegExpressions:(id)arg1;
- (void)setShouldUseFalsePositiveFiltering:(bool)arg1;
- (void)setShouldUseLM:(bool)arg1;
- (bool)shouldDecodeWithLM;
- (bool)shouldUseFalsePositiveFiltering;
- (bool)shouldUseLM;
- (bool)shouldUseModernizedDecoder;
- (id)subscribedLocales;

@end
