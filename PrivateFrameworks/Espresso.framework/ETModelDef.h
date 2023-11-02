
@interface ETModelDef : NSObject {
    NSMutableArray * _all_variables;
    struct shared_ptr<Espresso::gradient_builder> { 
        struct gradient_builder {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _gb;
    struct shared_ptr<Espresso::net> { 
        struct net {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _network;
    struct map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>> { 
        struct __tree<std::__value_type<std::string, std::vector<std::string>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::vector<std::string>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::vector<std::string>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::vector<std::string>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  layer_variable_names;
}

@property (retain) NSMutableArray *all_variables;
@property struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder {} *x1; struct __shared_weak_count {} *x2; } gb;
@property struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; } network;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)all_variables;
- (struct shared_ptr<Espresso::blob<float, 1>> { void *x1; struct __shared_weak_count {} *x2; })biasesForLayer:(id)arg1;
- (int)configureLayersToTrain:(id)arg1 reinitializeVariables:(bool)arg2;
- (struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder {} *x1; struct __shared_weak_count {} *x2; })gb;
- (id)initWithNetwork:(id)arg1;
- (void*)layerForName:(id)arg1;
- (id)layerNames;
- (struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })network;
- (void)randomizeWeightsForLayer:(id)arg1 withSeed:(float)arg2;
- (void)setAll_variables:(id)arg1;
- (void)setGb:(struct shared_ptr<Espresso::gradient_builder> { struct gradient_builder {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setNetwork:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setupVariablesDef;
- (struct shared_ptr<std::string> { void *x1; struct __shared_weak_count {} *x2; })topNamesForLayerIndex:(int)arg1;
- (void)transformForTraining:(struct shared_ptr<Espresso::net> { struct net {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)updateLayer:(id)arg1 withBiases:(struct shared_ptr<float> { float *x1; struct __shared_weak_count {} *x2; })arg2 length:(unsigned long long)arg3;
- (void)updateLayer:(id)arg1 withWeights:(struct shared_ptr<float> { float *x1; struct __shared_weak_count {} *x2; })arg2 length:(unsigned long long)arg3;
- (id)variableForLayer:(id)arg1 kind:(unsigned long long)arg2;
- (id)variableNameForLayer:(id)arg1 kind:(unsigned long long)arg2;
- (id)variables;
- (struct shared_ptr<Espresso::blob<float, 2>> { void *x1; struct __shared_weak_count {} *x2; })weightsForLayer:(id)arg1;

@end
