
@interface CHMetrics : NSObject {
    float  _CHMetricsIntensityBin1To2Value;
    float  _CHMetricsIntensityBin2To3Value;
    unsigned int  _audioSessionID;
    NSMutableDictionary * _dataForTesting;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSString * _engineID;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticContinuousNonsustainedIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticContinuousSustainedIDs;
    struct vector<unsigned long, std::allocator<unsigned long>> { 
        unsigned long long *__begin_; 
        unsigned long long *__end_; 
        struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
            unsigned long long *__value_; 
        } __end_cap_; 
    }  _hapticTransientIDs;
    bool  _isSPI;
    struct unordered_map<AVHapticPlayerEventType, NSString *, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>, std::allocator<std::pair<const AVHapticPlayerEventType, NSString *>>> { 
        struct __hash_table<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::__unordered_map_hasher<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>>, std::__unordered_map_equal<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::equal_to<AVHapticPlayerEventType>, std::hash<AVHapticPlayerEventType>>, std::allocator<std::__hash_value_type<AVHapticPlayerEventType, NSString *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<AVHapticPlayerEventType, NSString *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::hash<AVHapticPlayerEventType>, std::equal_to<AVHapticPlayerEventType>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<AVHapticPlayerEventType, std::__hash_value_type<AVHapticPlayerEventType, NSString *>, std::equal_to<AVHapticPlayerEventType>, std::hash<AVHapticPlayerEventType>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _legacyHapticTransientEventTypeMap;
    NSMutableDictionary * _patternLibraryData;
    NSMutableDictionary * _playerData;
    long long  _reporterID;
    bool  _retainDataForTesting;
    bool  _sessionIsShared;
}

+ (double)currentTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPatternLibraryMetric:(id)arg1;
- (id)continousDictionary:(id)arg1 slot:(unsigned long long)arg2 intensity:(float)arg3;
- (id)continuousSharpnessSlotKeyFromSlotValue:(unsigned long long)arg1;
- (void)dealloc;
- (void)dispatchOnLocal:(id /* block */)arg1;
- (id)getIDForPlayer:(id)arg1;
- (float)getLoopsForAdvancedPlayer:(id)arg1 endTime:(double)arg2;
- (float)getLoopsForPlayer:(id)arg1 endTime:(double)arg2;
- (id)getMetricsForPlayer:(id)arg1;
- (void)handleActionForPlayer:(id)arg1 action:(long long)arg2 time:(double)arg3 isAdvanced:(bool)arg4;
- (void)handleEngineStart;
- (void)handleEngineStop;
- (void)handleFinishedForPlayersAtTime:(double)arg1;
- (void)handleInitForPlayer:(id)arg1 events:(id)arg2 isAdvanced:(bool)arg3 patternID:(id)arg4;
- (void)handleParamCurveEncountered;
- (void)handleServerRecovery;
- (void)handleStartForPlayer:(id)arg1 time:(double)arg2 isAdvanced:(bool)arg3 patternID:(id)arg4;
- (id)initWithEngine:(id)arg1 audioSessionID:(unsigned int)arg2 sessionIsShared:(bool)arg3 isSPI:(bool)arg4;
- (id)intensityBinKeyFromValue:(float)arg1;
- (bool)isEnabled;
- (bool)isEventType:(unsigned long long)arg1 inList:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })arg2;
- (id)legacyTransientDictionary:(id)arg1 eventType:(unsigned long long)arg2 intensity:(float)arg3;
- (void)logMetric:(id)arg1 value:(id)arg2;
- (void)logPatternLibraryMetric:(id)arg1;
- (void)logPowerLogMetric:(id)arg1;
- (void)markAdvancedPlaybackAction:(id)arg1 action:(long long)arg2 time:(float)arg3;
- (void)markPlaybackAction:(id)arg1 action:(long long)arg2 time:(float)arg3;
- (void)prepareAdvancedPlaybackData:(id)arg1 events:(id)arg2;
- (void)prepareData:(id)arg1 events:(id)arg2;
- (void)preparePlaybackData:(id)arg1 events:(id)arg2;
- (void)removePlaybackData:(id)arg1;
- (void)resetAdvancedPlaybackData:(id)arg1;
- (void)resetPlaybackData:(id)arg1;
- (void)retainData:(id)arg1 forTestingPlayer:(id)arg2;
- (void)sendDetailedMetricsForPlayerID:(id)arg1 endTime:(float)arg2;
- (void)sendPatternLibraryMetrics;
- (void)setMetricsTestModeEnabled;
- (void)setReporter;
- (void)startReporter;
- (void)stopReporter;
- (id)transientDictionary:(id)arg1 index:(unsigned long long)arg2 intensity:(float)arg3;
- (id)transientSharpnessIndexKeyFromIndexValue:(unsigned long long)arg1;

@end
