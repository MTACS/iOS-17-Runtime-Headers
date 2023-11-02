
@interface DYShaderProfilerResult : NSObject {
    NSMutableDictionary * _allShaderBinaryInfo;
    NSMutableArray * _averagePerDrawKickDurations;
    NSMutableDictionary * _blitEncoderTimeInfo;
    NSArray * _blitTimeData;
    unsigned int  _commandBufferCount;
    NSMutableDictionary * _computeKernelBinaryInfo;
    struct DYShaderProfilerTiming { 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _cycle; 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _time; 
    }  _computeTiming;
    NSDictionary * _derivedCountersData;
    unsigned int  _deviceUtilization;
    struct unordered_map<unsigned long long, unsigned int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned int>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned int>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _drawCallInfoIndexMap;
    NSMutableArray * _drawCallInfoList;
    NSMutableArray * _effectiveKickTimes;
    NSMutableArray * _effectivePerEncoderDrawKickTimes;
    unsigned int  _encoderCount;
    NSMutableArray * _encoderFunctionIndexList;
    NSMutableDictionary * _encoderFunctionIndexToEncoderIndexMap;
    NSDictionary * _encoderIndexToLabelMap;
    NSMutableArray * _encoderInfoList;
    NSMutableDictionary * _fragmentShaderBinaryInfo;
    struct DYShaderProfilerTiming { 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _cycle; 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _time; 
    }  _fragmentTiming;
    unsigned long long  _frameTime;
    struct unordered_map<unsigned long long, std::unordered_map<int, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::unordered_map<int, unsigned int>>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, std::unordered_map<int, unsigned int>>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _functionIndexToDrawCallIndexMap;
    double  _gpuTime;
    NSMutableArray * _loadActionTimes;
    NSMutableArray * _perCommandBufferEncoderCount;
    struct unordered_map<unsigned long long, unsigned int, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, unsigned int>>> { 
        struct __hash_table<std::__hash_value_type<unsigned long long, unsigned int>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, unsigned int>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, unsigned int>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, unsigned int>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _perContextDrawCallCounterDY;
    NSMutableArray * _programInfoList;
    NSMutableArray * _programPipelineInfoList;
    NSMutableArray * _shaderProfilingFrameTimes;
    double  _shaderProfilingTime;
    NSMutableArray * _storeActionTimes;
    struct DYShaderProfilerTiming { 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _cycle; 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _time; 
    }  _timing;
    NSMutableDictionary * _vertexShaderBinaryInfo;
    struct DYShaderProfilerTiming { 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _cycle; 
        struct Statistics { 
            double average; 
            double min; 
            double max; 
        } _time; 
    }  _vertexTiming;
}

@property (nonatomic, retain) NSMutableArray *averagePerDrawKickDurations;
@property (nonatomic, retain) NSMutableDictionary *blitEncoderTimeInfo;
@property (nonatomic, retain) NSArray *blitTimeData;
@property (nonatomic) unsigned int commandBufferCount;
@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } computeTiming;
@property (nonatomic, retain) NSDictionary *derivedCountersData;
@property (nonatomic) unsigned int deviceUtilization;
@property (nonatomic, retain) NSMutableArray *drawCallInfoList;
@property (nonatomic, retain) NSMutableArray *effectiveKickTimes;
@property (nonatomic, retain) NSMutableArray *effectivePerEncoderDrawKickTimes;
@property (nonatomic) unsigned int encoderCount;
@property (nonatomic, readonly) NSMutableArray *encoderFunctionIndexList;
@property (nonatomic, readonly) NSMutableDictionary *encoderFunctionIndexToEncoderIndexMap;
@property (nonatomic, retain) NSDictionary *encoderIndexToLabelMap;
@property (nonatomic, readonly) NSMutableArray *encoderInfoList;
@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } fragmentTiming;
@property (nonatomic) unsigned long long frameTime;
@property (nonatomic) double gpuTime;
@property (nonatomic, retain) NSMutableArray *loadActionTimes;
@property (nonatomic, retain) NSMutableArray *perCommandBufferEncoderCount;
@property (nonatomic, readonly) NSMutableArray *programInfoList;
@property (nonatomic, retain) NSMutableArray *programPipelineInfoList;
@property (nonatomic, retain) NSMutableArray *shaderProfilingFrameTimes;
@property (nonatomic) double shaderProfilingTime;
@property (nonatomic, retain) NSMutableArray *storeActionTimes;
@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } timing;
@property (nonatomic) struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; } vertexTiming;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)averagePerDrawKickDurations;
- (id)blitEncoderTimeInfo;
- (id)blitTimeData;
- (void)buildDrawCallIndexMap;
- (unsigned int)commandBufferCount;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })computeTiming;
- (id)derivedCountersData;
- (unsigned int)deviceUtilization;
- (id)drawCallInfoList;
- (id)effectiveKickTimes;
- (id)effectivePerEncoderDrawKickTimes;
- (unsigned int)encoderCount;
- (id)encoderFunctionIndexList;
- (id)encoderFunctionIndexToEncoderIndexMap;
- (id)encoderIndexToLabelMap;
- (id)encoderInfoList;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })fragmentTiming;
- (unsigned long long)frameTime;
- (double)gpuTime;
- (id)init;
- (id)loadActionTimes;
- (id)perCommandBufferEncoderCount;
- (id)programInfoList;
- (id)programPipelineInfoList;
- (void)setAveragePerDrawKickDurations:(id)arg1;
- (void)setBlitEncoderTimeInfo:(id)arg1;
- (void)setBlitTimeData:(id)arg1;
- (void)setCommandBufferCount:(unsigned int)arg1;
- (void)setComputeTiming:(struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (void)setDerivedCountersData:(id)arg1;
- (void)setDeviceUtilization:(unsigned int)arg1;
- (void)setDrawCallInfoList:(id)arg1;
- (void)setEffectiveKickTimes:(id)arg1;
- (void)setEffectivePerEncoderDrawKickTimes:(id)arg1;
- (void)setEncoderCount:(unsigned int)arg1;
- (void)setEncoderIndexToLabelMap:(id)arg1;
- (void)setFragmentTiming:(struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (void)setFrameTime:(unsigned long long)arg1;
- (void)setGpuTime:(double)arg1;
- (void)setLoadActionTimes:(id)arg1;
- (void)setPerCommandBufferEncoderCount:(id)arg1;
- (void)setProgramPipelineInfoList:(id)arg1;
- (void)setShaderProfilingFrameTimes:(id)arg1;
- (void)setShaderProfilingTime:(double)arg1;
- (void)setStoreActionTimes:(id)arg1;
- (void)setTiming:(struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (void)setVertexTiming:(struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })arg1;
- (id)shaderProfilingFrameTimes;
- (double)shaderProfilingTime;
- (id)storeActionTimes;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })timing;
- (struct DYShaderProfilerTiming { struct Statistics { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; struct Statistics { double x_2_1_1; double x_2_1_2; double x_2_1_3; } x2; })vertexTiming;

@end
