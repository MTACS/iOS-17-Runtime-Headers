
@interface ETTaskDefinition : NSObject <ETTaskContext> {
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _inferenceGraphNetPtr;
    ETModelDefinition * _inferenceModel;
    ETOptimizerDefinition * _optimizer;
    unsigned long long  _platform;
    ETTaskState * _taskState;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _trainingGraphNetPtr;
    unsigned long long  batchSize;
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
    }  gradient_control_name;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { 
        struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  infInputBlobShapes;
    NSArray * infInputNames;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { 
        struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  infOutputBlobShapes;
    NSArray * infOutputNames;
    struct unordered_map<std::string, unsigned long, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned long>>> { 
        struct __hash_table<std::__hash_value_type<std::string, unsigned long>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, unsigned long>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, unsigned long>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, unsigned long>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, unsigned long>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  inference_layer_index;
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
    }  optimizer_control_name;
    int  precision;
    unsigned long long  runtimePlatform;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { 
        struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  trainInputBlobShapes;
    NSArray * trainInputNames;
    struct unordered_map<std::string, Espresso::layer_shape, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, Espresso::layer_shape>>> { 
        struct __hash_table<std::__hash_value_type<std::string, Espresso::layer_shape>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, Espresso::layer_shape>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, Espresso::layer_shape>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::hash<std::string>, std::equal_to<std::string>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, Espresso::layer_shape>, std::equal_to<std::string>, std::hash<std::string>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  trainOutputBlobShapes;
    NSArray * trainOutputNames;
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
    }  training_control_name;
    ETVariablesDefinition * varsDef;
}

@property struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } inferenceGraphNetPtr;
@property (nonatomic, retain) ETModelDefinition *inferenceModel;
@property (nonatomic, retain) ETOptimizerDefinition *optimizer;
@property (nonatomic) unsigned long long platform;
@property (nonatomic, retain) ETTaskState *taskState;
@property struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } trainingGraphNetPtr;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)checkShapes:(const void*)arg1 withSample:(const void*)arg2 withError:(id*)arg3;
- (struct shared_ptr<Espresso::abstract_context> { struct abstract_context {} *x1; struct __shared_weak_count {} *x2; })context_for_runtime_platform:(id*)arg1;
- (unsigned long long)dataTypeForParameterOfType:(unsigned long long)arg1 fromLayerNamed:(id)arg2;
- (id)description;
- (id)doInferenceOnData:(id)arg1 error:(id*)arg2;
- (bool)doTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id*)arg4;
- (id)getParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 error:(id*)arg3;
- (id)getTensorNamed:(id)arg1;
- (id)getTensorNamed:(id)arg1 directBind:(bool)arg2;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })inferenceGraphNetPtr;
- (id)inferenceModel;
- (id)initWithModelDefinition:(id)arg1 lossDefinition:(id)arg2 variablesDefinition:(id)arg3 optimizerDefinition:(id)arg4 forPlatform:(unsigned long long)arg5 error:(id*)arg6;
- (id)initWithTrainingModelDefinition:(id)arg1 forPlatform:(unsigned long long)arg2 error:(id*)arg3;
- (id)namesVectorToFoundationArray:(struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })arg1;
- (id)optimizer;
- (unsigned long long)platform;
- (unsigned long long)platformForLayerNamed:(id)arg1 error:(id*)arg2;
- (bool)privateDoTrainingOnData:(id)arg1 forNumberOfEpochs:(unsigned long long)arg2 withCallback:(id)arg3 error:(id*)arg4;
- (void)reloadOnRuntimePlatform:(id*)arg1;
- (bool)saveNetwork:(id)arg1 inplace:(bool)arg2 error:(id*)arg3;
- (bool)saveTrainingNetwork:(id)arg1 checkpoint:(id)arg2 error:(id*)arg3;
- (void)setInferenceGraphNetPtr:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setInferenceModel:(id)arg1;
- (bool)setInferenceNetworkWeights:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1 error:(id*)arg2;
- (void)setOptimizer:(id)arg1;
- (bool)setParameterOfType:(unsigned long long)arg1 forLayerNamed:(id)arg2 withValue:(id)arg3 error:(id*)arg4;
- (void)setPlatform:(unsigned long long)arg1;
- (void)setTaskState:(id)arg1;
- (bool)setTensorNamed:(id)arg1 withValue:(id)arg2 error:(id*)arg3;
- (void)setTrainingGraphNetPtr:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)setWeightsOfInferenceNetworkLoadedFrom:(id)arg1 AndSaveTo:(id)arg2 error:(id*)arg3;
- (void)setupInputOutputShapes:(id*)arg1;
- (void)setupShapes:(void*)arg1 forBlobs:(id)arg2 withError:(id*)arg3;
- (void)shareWeights;
- (id)taskState;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })trainingGraphNetPtr;

@end
