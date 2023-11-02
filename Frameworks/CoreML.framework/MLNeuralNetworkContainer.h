
@interface MLNeuralNetworkContainer : NSObject {
    NSArray * _classLabels;
    NSString * _classScoreVectorName;
    MLCompilerNeuralNetworkOutput * _compilerOutput;
    MLVersionInfo * _compilerVersionInfo;
    NSArray * _configurationList;
    int  _engine;
    bool  _hasBidirectionalLayer;
    bool  _hasDynamicLayer;
    bool  _hasOptionalInputSequenceConcat;
    NSDictionary * _imageParameters;
    NSDictionary * _imagePreprocessingParams;
    NSDictionary * _inputDescription;
    NSArray * _inputLayerNames;
    NSString * _modelFilePath;
    bool  _modelIsEncrypted;
    bool  _modelIsMIL;
    bool  _modelIsTrainingProgram;
    MLVersionInfo * _modelVersionInfo;
    NSString * _name;
    bool  _ndArrayInterpretation;
    NSDictionary * _optionalInputDefaultValues;
    NSDictionary * _optionalInputTypes;
    NSDictionary * _outputDescription;
    NSArray * _outputLayerNames;
    int  _precision;
    MLModel * _transformDesc;
    MLNeuralNetworksCompileTimeParams * _updatableModelCompiledParams;
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
    }  batches;
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
    }  heights;
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
    }  ks;
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
    }  ranks;
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
    }  sequences;
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
    }  widths;
}

@property (nonatomic, readonly) NSString *activeFunction;
@property (retain) NSArray *classLabels;
@property (retain) NSString *classScoreVectorName;
@property (nonatomic, retain) MLCompilerNeuralNetworkOutput *compilerOutput;
@property (nonatomic, retain) MLVersionInfo *compilerVersionInfo;
@property (nonatomic, retain) NSArray *configurationList;
@property (nonatomic) int engine;
@property (nonatomic) bool hasBidirectionalLayer;
@property (nonatomic) bool hasDynamicLayer;
@property (nonatomic) bool hasOptionalInputSequenceConcat;
@property (nonatomic, retain) NSDictionary *imageParameters;
@property (nonatomic, retain) NSDictionary *imagePreprocessingParams;
@property (nonatomic, retain) NSDictionary *inputDescription;
@property (nonatomic, retain) NSArray *inputLayerNames;
@property (nonatomic, retain) NSString *modelFilePath;
@property (nonatomic) bool modelIsEncrypted;
@property (nonatomic) bool modelIsMIL;
@property (nonatomic) bool modelIsTrainingProgram;
@property (nonatomic, retain) MLVersionInfo *modelVersionInfo;
@property (nonatomic, retain) NSString *name;
@property bool ndArrayInterpretation;
@property (nonatomic, retain) NSDictionary *optionalInputDefaultValues;
@property (nonatomic, retain) NSDictionary *optionalInputTypes;
@property (nonatomic, retain) NSDictionary *outputDescription;
@property (nonatomic, retain) NSArray *outputLayerNames;
@property (nonatomic) int precision;
@property (retain) MLModel *transformDesc;
@property (nonatomic, retain) MLNeuralNetworksCompileTimeParams *updatableModelCompiledParams;

+ (id)containerFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;
+ (id)containerFromCompiledArchiveCommon:(void*)arg1 filename:(id)arg2 modelVersionInfo:(id)arg3 compilerVersionInfo:(id)arg4 configuration:(id)arg5 error:(id*)arg6;
+ (id)containerFromFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
+ (bool)readIsClassifier:(void*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeFunction;
- (id)classLabels;
- (id)classScoreVectorName;
- (id)compilerOutput;
- (id)compilerVersionInfo;
- (id)configurationList;
- (int)engine;
- (bool)hasBidirectionalLayer;
- (bool)hasDynamicLayer;
- (bool)hasOptionalInputSequenceConcat;
- (id)imageParameters;
- (id)imagePreprocessingParams;
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 classScoreVectorName:(id)arg4 classLabels:(id)arg5 isEncrypted:(bool)arg6 modelVersionInfo:(id)arg7;
- (id)initWithFeatureDescriptions:(id)arg1 transformDesc:(id)arg2 outputLayerNames:(id)arg3 classScoreVectorName:(id)arg4 classLabels:(id)arg5 isEncrypted:(bool)arg6 modelVersionInfo:(id)arg7 compilerVersionInfo:(id)arg8;
- (id)initWithFilePath:(id)arg1 inputLayerNames:(id)arg2 outputLayerNames:(id)arg3 parameters:(id)arg4;
- (id)inputDescription;
- (id)inputLayerNames;
- (id)modelFilePath;
- (bool)modelIsEncrypted;
- (bool)modelIsMIL;
- (bool)modelIsTrainingProgram;
- (id)modelVersionInfo;
- (id)name;
- (bool)ndArrayInterpretation;
- (id)optionalInputDefaultValues;
- (id)optionalInputTypes;
- (id)outputDescription;
- (id)outputLayerNames;
- (int)precision;
- (void)setClassLabels:(id)arg1;
- (void)setClassScoreVectorName:(id)arg1;
- (void)setCompilerOutput:(id)arg1;
- (void)setCompilerVersionInfo:(id)arg1;
- (void)setConfigurationList:(id)arg1;
- (void)setEngine:(int)arg1;
- (void)setHasBidirectionalLayer:(bool)arg1;
- (void)setHasDynamicLayer:(bool)arg1;
- (void)setHasOptionalInputSequenceConcat:(bool)arg1;
- (void)setImageParameters:(id)arg1;
- (void)setImagePreprocessingParams:(id)arg1;
- (void)setInputDescription:(id)arg1;
- (void)setInputLayerNames:(id)arg1;
- (void)setModelFilePath:(id)arg1;
- (void)setModelIsEncrypted:(bool)arg1;
- (void)setModelIsMIL:(bool)arg1;
- (void)setModelIsTrainingProgram:(bool)arg1;
- (void)setModelVersionInfo:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNdArrayInterpretation:(bool)arg1;
- (void)setOptionalInputDefaultValues:(id)arg1;
- (void)setOptionalInputTypes:(id)arg1;
- (void)setOutputDescription:(id)arg1;
- (void)setOutputLayerNames:(id)arg1;
- (void)setPrecision:(int)arg1;
- (void)setTransformDesc:(id)arg1;
- (void)setUpdatableModelCompiledParams:(id)arg1;
- (id)transformDesc;
- (id)updatableModelCompiledParams;

@end
