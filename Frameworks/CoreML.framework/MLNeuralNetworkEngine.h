
@interface MLNeuralNetworkEngine : MLModelEngine <MLClassifier, MLCompiledModelLoader, MLNeuralNetwork, MLRegressor> {
    struct map<std::string, bool, std::less<std::string>, std::allocator<std::pair<const std::string, bool>>> { 
        struct __tree<std::__value_type<std::string, bool>, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>>, std::allocator<std::__value_type<std::string, bool>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, bool>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, bool>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _OutputBlobIsDynamic;
    NSString * _activeFunction;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _batches;
    struct vector<bool, std::allocator<bool>> { 
        unsigned long long *__begin_; 
        unsigned long long __size_; 
        struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { 
            unsigned long long __value_; 
        } __cap_alloc_; 
    }  _bufferAvailable;
    NSObject<OS_dispatch_semaphore> * _bufferSemaphore;
    NSArray * _classLabels;
    NSString * _classScoreVectorName;
    MLCompilerNeuralNetworkOutput * _compilerOutput;
    MLVersionInfo * _compilerVersionInfo;
    void * _context;
    struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
        struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
            struct __rep { 
                union { 
                    struct __long { 
                        char *__data_; 
                        unsigned long long __size_; 
                        unsigned int __cap_ : 63; 
                        unsigned int __is_long_ : 1; 
                    } __l; 
                    struct __short { 
                        BOOL __data_[23]; 
                        unsigned char __padding_[0]; 
                        unsigned int __size_ : 7; 
                        unsigned int __is_long_ : 1; 
                    } __s; 
                    struct __raw { 
                        unsigned long long __words[3]; 
                    } __r; 
                } ; 
            } __value_; 
        } __r_; 
    }  _currentConfigurationName;
    NSDictionary * _defaultOptionalValues;
    int  _engine;
    NSDictionary * _espressoInputShapes;
    NSDictionary * _espressoInputStrides;
    EspressoProfilingNetworkInfo * _espressoProfileInfo;
    NSObject<OS_dispatch_queue> * _espressoQueue;
    struct set<std::string, std::less<std::string>, std::allocator<std::string>> { 
        struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<std::string>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _flexibleShapesConfigNamesInNet;
    bool  _hardwareFallbackDetected;
    bool  _hasBidirectionalLayer;
    bool  _hasOptionalInputSequenceConcat;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _heights;
    NSDictionary * _imagePreprocessingParameters;
    NSMutableDictionary * _inputBlobNameToLastBackingMode;
    struct vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::map<std::string, espresso_buffer_t *> *, std::allocator<std::map<std::string, espresso_buffer_t *>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _inputBuffers;
    MLFeatureProviderConformer * _inputFeatureConformer;
    NSArray * _inputLayers;
    bool  _isANEPathForbidden;
    bool  _isEspressoBiasPreprocessingShared;
    bool  _isGPUPathForbidden;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _ks;
    NSString * _modelFilePath;
    bool  _modelIsEncrypted;
    bool  _modelIsMIL;
    MLVersionInfo * _modelVersionInfo;
    bool  _ndArrayInterpretation;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    unsigned long long  _numInputs;
    unsigned long long  _numOutputs;
    NSDictionary * _optionalInputTypes;
    NSMutableDictionary * _outputBlobNameToLastBackingMode;
    struct vector<std::map<std::string, espresso_buffer_t *>, std::allocator<std::map<std::string, espresso_buffer_t *>>> { 
        void *__begin_; 
        void *__end_; 
        struct __compressed_pair<std::map<std::string, espresso_buffer_t *> *, std::allocator<std::map<std::string, espresso_buffer_t *>>> { 
            void *__value_; 
        } __end_cap_; 
    }  _outputBuffers;
    NSArray * _outputLayers;
    struct map<std::string, Espresso::vimage2espresso_param, std::less<std::string>, std::allocator<std::pair<const std::string, Espresso::vimage2espresso_param>>> { 
        struct __tree<std::__value_type<std::string, Espresso::vimage2espresso_param>, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>>, std::allocator<std::__value_type<std::string, Espresso::vimage2espresso_param>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, Espresso::vimage2espresso_param>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, Espresso::vimage2espresso_param>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _params;
    MLPixelBufferPool * _pixelBufferPool;
    void * _plan;
    int  _precision;
    NSObject<OS_dispatch_queue> * _predictionsQueue;
    id  _probabilityDictionarySharedKeySet;
    int  _qos;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _ranks;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _sequences;
    NSObject<OS_dispatch_semaphore> * _submitSemaphore;
    struct OpaqueVTPixelTransferSession { } * _transferSession;
    bool  _usingCPU;
    struct map<std::string, int, std::less<std::string>, std::allocator<std::pair<const std::string, int>>> { 
        struct __tree<std::__value_type<std::string, int>, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>, std::allocator<std::__value_type<std::string, int>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, int>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, int>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _widths;
}

@property (nonatomic, retain) NSString *activeFunction;
@property (retain) NSObject<OS_dispatch_semaphore> *bufferSemaphore;
@property (nonatomic, retain) NSArray *classLabels;
@property (nonatomic, retain) NSString *classScoreVectorName;
@property (nonatomic, readonly, retain) MLVersionInfo *compilerVersionInfo;
@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic) void*context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSDictionary *defaultOptionalValues;
@property (readonly, copy) NSString *description;
@property (nonatomic) int engine;
@property (nonatomic, retain) NSDictionary *espressoInputShapes;
@property (nonatomic, retain) NSDictionary *espressoInputStrides;
@property (nonatomic, retain) EspressoProfilingNetworkInfo *espressoProfileInfo;
@property (retain) NSObject<OS_dispatch_queue> *espressoQueue;
@property (nonatomic) bool hardwareFallbackDetected;
@property (nonatomic) bool hasBidirectionalLayer;
@property (nonatomic) bool hasOptionalInputSequenceConcat;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *imagePreprocessingParameters;
@property (nonatomic, readonly) NSMutableDictionary *inputBlobNameToLastBackingMode;
@property (readonly) MLFeatureProviderConformer *inputFeatureConformer;
@property (nonatomic, readonly, retain) NSArray *inputLayers;
@property bool isANEPathForbidden;
@property (nonatomic) bool isEspressoBiasPreprocessingShared;
@property bool isGPUPathForbidden;
@property (readonly) MLModelMetadata *metadata;
@property (nonatomic, readonly) MLModelDescription *modelDescription;
@property (nonatomic, retain) NSString *modelFilePath;
@property (nonatomic, readonly) bool modelIsEncrypted;
@property (nonatomic) bool modelIsMIL;
@property (nonatomic, readonly) MLVersionInfo *modelVersionInfo;
@property (nonatomic) bool ndArrayInterpretation;
@property (nonatomic) struct { void *x1; int x2; } network;
@property (nonatomic, readonly) unsigned long long numInputs;
@property (nonatomic, readonly) unsigned long long numOutputs;
@property (nonatomic, readonly) NSDictionary *optionalInputTypes;
@property (nonatomic, readonly) NSMutableDictionary *outputBlobNameToLastBackingMode;
@property (nonatomic, readonly, retain) NSArray *outputLayers;
@property (nonatomic, readonly) MLPixelBufferPool *pixelBufferPool;
@property (nonatomic) void*plan;
@property (nonatomic) int precision;
@property (nonatomic, readonly) unsigned long long predictionTypeForKTrace;
@property (retain) NSObject<OS_dispatch_queue> *predictionsQueue;
@property (nonatomic, retain) id probabilityDictionarySharedKeySet;
@property (nonatomic) int qos;
@property (nonatomic, readonly) bool recordsPredictionEvent;
@property (nonatomic, readonly) unsigned long long signpostID;
@property (retain) NSObject<OS_dispatch_semaphore> *submitSemaphore;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsConcurrentSubmissions;
@property (nonatomic) bool usingCPU;

+ (Class)containerClass;
+ (int)gpuEngine;
+ (int)gpuPrecision;
+ (id)loadModelFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)neuralNetworkFromContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
+ (id)neuralNetworkFromContainer:(id)arg1 error:(id*)arg2;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_addCompiledNetworkOrProgramToPlan:(void*)arg1 error:(id*)arg2;
- (bool)_addNetworkToPlan:(void*)arg1 error:(id*)arg2;
- (void)_deallocContextAndPlan;
- (int)_espressoDeviceForConfiguration:(id)arg1 error:(id*)arg2;
- (bool)_espressoOutputShapeForFeatureName:(id)arg1 matchesShapeOfMLMultiArray:(id)arg2;
- (bool)_handleAddNetworkToPlanStatus:(int)arg1 error:(id*)arg2;
- (bool)_matchEngineToOptions:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)_pixelBufferFromEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 description:(id)arg2 error:(id*)arg3;
- (bool)_setMultiArrayOutputBacking:(id)arg1 forOutputFeatureName:(id)arg2 toEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg3 error:(id*)arg4;
- (bool)_setMultipleBuffersOnPlan:(void*)arg1 error:(id*)arg2;
- (bool)_setupContextAndPlanWithConfiguration:(id)arg1 error:(id*)arg2;
- (bool)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(bool)arg2 error:(id*)arg3;
- (bool)_setupContextAndPlanWithConfiguration:(id)arg1 usingCPU:(bool)arg2 reshapeWithContainer:(bool)arg3 error:(id*)arg4;
- (bool)_setupContextAndPlanWithForceCPU:(bool)arg1 error:(id*)arg2;
- (id)activeFunction;
- (id)addClassifierInformationToOutput:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)availableOutputBlobList;
- (bool)bindDirectlyInputFeatureNamed:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 cleanUpBlocks:(id)arg3 error:(id*)arg4;
- (bool)bindDynamicOutputBuffers:(const void*)arg1 error:(id*)arg2;
- (bool)bindInputFeatureNamed:(id)arg1 convertingMultiArray:(id)arg2 bufferIndex:(unsigned long long)arg3 error:(id*)arg4;
- (bool)bindInputFeatureNamed:(id)arg1 featureValue:(id)arg2 bufferIndex:(unsigned long long)arg3 cleanUpBlocks:(id)arg4 error:(id*)arg5;
- (bool)bindInputFeatureNamed:(id)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 cleanUpBlocks:(id)arg3 error:(id*)arg4;
- (bool)bindInputFeatures:(id)arg1 bufferIndex:(unsigned long long)arg2 cleanUpBlocks:(id)arg3 error:(id*)arg4;
- (bool)bindInputsAndOutputs:(id)arg1 cleanUpBlocks:(id)arg2 bufferIndex:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (bool)bindOutputBuffers:(const void*)arg1 outputBackings:(id)arg2 automaticOutputBackingMode:(id)arg3 directlyBoundOutputFeatureNames:(id)arg4 error:(id*)arg5;
- (id)bufferSemaphore;
- (id)classLabels;
- (id)classScoreVectorName;
- (id)classify:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)collectParametersFromContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)compilerVersionInfo;
- (id)completeOutputBackings:(id)arg1 automaticOutputBackingMode:(id)arg2 error:(id*)arg3;
- (void*)context;
- (id)convertPredictionToClassifierResult:(id)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (bool)copyEbuf:(const struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 ofPixelType:(unsigned long long)arg2 toPixelBuffer:(struct __CVBuffer { }*)arg3 error:(id*)arg4;
- (bool)copyImagePreprocessingParametersTo:(void*)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)copyPixelBufferByApplyingImagePreprocessing:(const struct vimage2espresso_param { float x1; int x2; int x3; int x4; float x5; float x6; float x7; float x8; int x9; unsigned int x10; unsigned int x11; unsigned int x12; int x13; int x14; int x15; }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)copyPixelBufferByApplyingImagePreprocessingForFeatureNamed:(id)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)copyPixelBufferFromPixelBuffer:(struct __CVBuffer { }*)arg1 usingPixelFormat:(unsigned int)arg2;
- (void)dealloc;
- (id)defaultOptionalValues;
- (void)dumpTestVectorsToPath:(id)arg1;
- (void)enableInstrumentsTracing;
- (int)engine;
- (id)espressoInputShapes;
- (id)espressoInputStrides;
- (id)espressoProfileInfo;
- (id)espressoQueue;
- (id)evaluate:(id)arg1 error:(id*)arg2;
- (id)evaluateBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)evaluateInputs:(id)arg1 bufferIndex:(unsigned long long)arg2 options:(id)arg3 error:(id*)arg4;
- (id)evaluateInputs:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)evaluateInputs:(id)arg1 options:(id)arg2 verifyInputs:(bool)arg3 error:(id*)arg4;
- (bool)executePlan:(void*)arg1 error:(id*)arg2;
- (id)executionSchedule;
- (bool)hardwareFallbackDetected;
- (bool)hasBidirectionalLayer;
- (bool)hasOptionalInputSequenceConcat;
- (id)imageFeatureValueFromEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 backingCVPixelBuffer:(struct __CVBuffer { }*)arg2 description:(id)arg3 error:(id*)arg4;
- (id)imageFeatureValueFromPixelBuffer:(struct __CVBuffer { }*)arg1 usingPixelFormat:(unsigned int)arg2;
- (id)imagePreprocessingParameters;
- (id)initWithContainer:(id)arg1 configuration:(id)arg2 error:(id*)arg3;
- (id)initWithContainer:(id)arg1 error:(id*)arg2;
- (long long)inputBindStateForFeatureValue:(id)arg1 error:(id*)arg2;
- (id)inputBlobNameToLastBackingMode;
- (id)inputFeatureConformer;
- (id)inputLayers;
- (bool)isANEPathForbidden;
- (bool)isEspressoBiasPreprocessingShared;
- (bool)isGPUPathForbidden;
- (bool)lockPixelBuffer:(struct __CVBuffer { }*)arg1 cleanUpBlocks:(id)arg2 error:(id*)arg3;
- (id)modelFilePath;
- (bool)modelIsEncrypted;
- (bool)modelIsMIL;
- (id)modelVersionInfo;
- (id)multiArrayFeatureValueFromEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 backingMultiArray:(id)arg2 description:(id)arg3 outputName:(id)arg4 error:(id*)arg5;
- (bool)ndArrayInterpretation;
- (struct { void *x1; int x2; })network;
- (unsigned long long)numInputs;
- (unsigned long long)numOutputs;
- (unsigned long long)obtainBuffer;
- (bool)opacifyAndPermutePixelBuffer:(struct __CVBuffer { }*)arg1 bufferContainsBGRA:(bool)arg2 error:(id*)arg3;
- (id)optionalInputTypes;
- (id)outputBackingMultiArrayForFeatureName:(id)arg1;
- (id)outputBlobNameToLastBackingMode;
- (id)outputLayers;
- (id)parameterValueForKey:(id)arg1 error:(id*)arg2;
- (id)pixelBufferBackedMultiArrayWithShape:(id)arg1;
- (struct __CVBuffer { }*)pixelBufferFromOutputBacking:(id)arg1 forFeature:(id)arg2;
- (id)pixelBufferPool;
- (void*)plan;
- (void)populateMultiArrayShape:(id*)arg1 strides:(id*)arg2 forEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg3 featureDescription:(id)arg4 ndArrayInterpretation:(bool)arg5;
- (id)populateOutputs:(unsigned long long)arg1 outputBackings:(id)arg2 directlyBoundOutputFeatureNames:(id)arg3 error:(id*)arg4;
- (int)precision;
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (unsigned long long)predictionTypeForKTrace;
- (id)predictionsFromBatch:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)predictionsQueue;
- (void)prepareBlobNamed:(id)arg1 forNewBlobBackingMode:(long long)arg2 bindMode:(int)arg3;
- (id)probabilityDictionarySharedKeySet;
- (int)qos;
- (bool)rebuildPlan:(id*)arg1;
- (bool)rebuildPlan:(bool)arg1 error:(id*)arg2;
- (bool)recordsPredictionEvent;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)releaseBuffer:(unsigned long long)arg1;
- (bool)resetSizes:(id)arg1 error:(id*)arg2;
- (bool)resetSizesNoAutoRelease:(id)arg1 error:(id*)arg2;
- (bool)resetSizesWithEspressoConfigurations:(id)arg1 error:(id*)arg2;
- (bool)sequenceConcatConsumesOptionalInputNamed:(id)arg1;
- (int)sequenceNamed:(id)arg1;
- (void)setActiveFunction:(id)arg1;
- (void)setBufferSemaphore:(id)arg1;
- (void)setClassLabels:(id)arg1;
- (void)setClassScoreVectorName:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setDefaultOptionalValues:(id)arg1;
- (void)setEngine:(int)arg1;
- (bool)setEspressoBlobShapes:(void*)arg1 widths:(void*)arg2 heights:(void*)arg3 ks:(void*)arg4 batches:(void*)arg5 sequences:(void*)arg6 ranks:(void*)arg7 error:(id*)arg8;
- (void)setEspressoInputShapes:(id)arg1;
- (void)setEspressoInputStrides:(id)arg1;
- (void)setEspressoProfileInfo:(id)arg1;
- (void)setEspressoQueue:(id)arg1;
- (void)setHardwareFallbackDetected:(bool)arg1;
- (void)setHasBidirectionalLayer:(bool)arg1;
- (void)setHasOptionalInputSequenceConcat:(bool)arg1;
- (void)setImagePreprocessingParameters:(id)arg1;
- (void)setIsANEPathForbidden:(bool)arg1;
- (void)setIsEspressoBiasPreprocessingShared:(bool)arg1;
- (void)setIsGPUPathForbidden:(bool)arg1;
- (void)setModelFilePath:(id)arg1;
- (void)setModelIsMIL:(bool)arg1;
- (void)setNdArrayInterpretation:(bool)arg1;
- (void)setNetwork:(struct { void *x1; int x2; })arg1;
- (void)setPlan:(void*)arg1;
- (void)setPrecision:(int)arg1;
- (void)setPredictionsQueue:(id)arg1;
- (void)setProbabilityDictionarySharedKeySet:(id)arg1;
- (void)setQos:(int)arg1;
- (void)setSubmitSemaphore:(id)arg1;
- (void)setUsingCPU:(bool)arg1;
- (id)sortBatchByShape:(id)arg1 withMap:(id*)arg2 error:(id*)arg3;
- (id)submitSemaphore;
- (unsigned long long)supportFromEspressoLayerInfo:(id)arg1;
- (unsigned long long)supportFromEspressoPlatform:(int)arg1;
- (bool)transferOneComponent16HalfPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2 withScale:(float)arg3 bias:(float)arg4;
- (bool)transferPixelBuffer:(struct __CVBuffer { }*)arg1 toPixelBuffer:(struct __CVBuffer { }*)arg2;
- (bool)tryToSetOutputBacking:(id)arg1 forFeatureName:(id)arg2 toEbuf:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg3 reportPointerFlags:(int*)arg4 error:(id*)arg5;
- (bool)updateDynamicOutputBlobIndicatorCacheAndReturnError:(id*)arg1;
- (bool)usingCPU;
- (bool)usingEspressoConfigurations;
- (id)verifyInputs:(id)arg1 error:(id*)arg2;

@end
