
@interface VATKeywordSpotter : NSObject {
    <VATKeywordSpotterDelegate> * _delegate;
    long long  _fileByteCount;
    double  _fileCurrentDuration;
    NSString * _filePath;
    void * _floatFstDecoder;
    int  _frameCountSinceKeywordDetected;
    bool  _isRunning;
    struct vector<voiceactions::FstSpotterResults, std::allocator<voiceactions::FstSpotterResults>> { 
        struct FstSpotterResults {} *__begin_; 
        struct FstSpotterResults {} *__end_; 
        struct __compressed_pair<voiceactions::FstSpotterResults *, std::allocator<voiceactions::FstSpotterResults>> { 
            struct FstSpotterResults {} *__value_; 
        } __end_cap_; 
    }  _keywordResults;
    NSArray * _keywordsWithPhonemes;
    struct unordered_map<std::string, float, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, float>>> { 
        struct __hash_table<std::__hash_value_type<std::string, float>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, float>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, float>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, float>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, float>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, float>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _phraseThresholds;
    int  _processedFrameCount;
    double  _startTime;
    bool  _started;
    FeatureExtractObjc * fe;
}

@property (nonatomic) bool audioDebuggingEnabled;
@property (nonatomic) bool batchDecodeEnabled;
@property (nonatomic) VATConfiguration *configuration;
@property (nonatomic, copy) NSString *customSecondPassModelPath;
@property (nonatomic) bool duringKeywordSilenceCheckEnabled;
@property (nonatomic) bool postKeywordSilenceCheckEnabled;
@property (nonatomic) bool preKeywordSilenceCheckEnabled;
@property (nonatomic) VATSpeechRecognizer *recognizer;
@property (nonatomic) bool secondPassEnabled;

+ (id)pronounciationsFor:(id)arg1 wordSeparator:(id)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_acousticCallback:(id)arg1 rows:(long long)arg2 cols:(long long)arg3;
- (void)_categoryDealloc;
- (id)_handleAudioDebuggingForKeyword:(id)arg1 result:(void*)arg2 buffer:(id)arg3;
- (id)_handleSecondPass:(id)arg1 expectedKeyword:(id)arg2 duration:(double*)arg3 secondPassAudio:(id*)arg4;
- (void)_handleValidResult:(void*)arg1;
- (void)_initializeDecoderForKeywordsWithPhonemes:(id)arg1;
- (bool)_isDetectionValidForResult:(void*)arg1 reason:(id*)arg2;
- (void)_postKeywordSilenceProcessingWithResults:(id)arg1 rows:(long long)arg2 cols:(long long)arg3;
- (id)_replaceModelPathWithAbsolutePathForTest:(id)arg1;
- (id)_thresholdsForAllPhrases;
- (void)addAudioSamples:(const void*)arg1 count:(int)arg2;
- (void)addAudioSamples:(const void*)arg1 count:(int)arg2 isFloat:(bool)arg3;
- (void)addAudioSamples:(const void*)arg1 count:(int)arg2 isFloat:(bool)arg3 filePath:(id)arg4 byteCount:(long long)arg5 currentDuration:(double)arg6;
- (void)addAudioSamples:(const void*)arg1 length:(int)arg2;
- (bool)audioDebuggingEnabled;
- (bool)batchDecodeEnabled;
- (id)configuration;
- (id)customSecondPassModelPath;
- (void)dealloc;
- (bool)duringKeywordSilenceCheckEnabled;
- (id)init:(id)arg1 delegate:(id)arg2 silenceLookback:(int)arg3 silenceExpect:(int)arg4 batchDecode:(bool)arg5 enableAudioDebugging:(bool)arg6;
- (id)initWithConfig:(id)arg1 keywords:(id)arg2 delegate:(id)arg3;
- (id)initWithConfig:(id)arg1 keywordsWithPhonemes:(id)arg2 delegate:(id)arg3;
- (id)initWithConfig:(id)arg1 keywordsWithPhonemes:(id)arg2 delegate:(id)arg3 silenceLookback:(int)arg4 silenceExpect:(int)arg5 batchDecode:(bool)arg6 enableAudioDebugging:(bool)arg7;
- (id)initWithKeywords:(id)arg1 delegate:(id)arg2;
- (id)initWithKeywordsWithPhonemes:(id)arg1 delegate:(id)arg2;
- (bool)isValidRecognizer;
- (bool)postKeywordSilenceCheckEnabled;
- (bool)preKeywordSilenceCheckEnabled;
- (id)recognizer;
- (bool)secondPassEnabled;
- (void)setAudioDebuggingEnabled:(bool)arg1;
- (void)setBatchDecodeEnabled:(bool)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCustomSecondPassModelPath:(id)arg1;
- (void)setDuringKeywordSilenceCheckEnabled:(bool)arg1;
- (void)setPostKeywordSilenceCheckEnabled:(bool)arg1;
- (void)setPreKeywordSilenceCheckEnabled:(bool)arg1;
- (void)setRecognizer:(id)arg1;
- (void)setSecondPassEnabled:(bool)arg1;
- (void)setSecondPassEnabled:(bool)arg1 customAssetPath:(id)arg2;
- (void)setStreamingMode:(bool)arg1;
- (void)start;
- (void)stop;
- (void)updateWithKeywords:(id)arg1;
- (void)updateWithKeywordsWithPhonemes:(id)arg1;

@end
