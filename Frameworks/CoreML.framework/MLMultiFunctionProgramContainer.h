
@interface MLMultiFunctionProgramContainer : MLProgramContainer {
    NSString * _activeFunction;
    NSDictionary * _functionNameToInputLayersNames;
    NSDictionary * _functionNameToOutputLayersNames;
    struct map<std::string, InputNameToShapes, std::less<std::string>, std::allocator<std::pair<const std::string, InputNameToShapes>>> { 
        struct __tree<std::__value_type<std::string, InputNameToShapes>, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>>, std::allocator<std::__value_type<std::string, InputNameToShapes>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, InputNameToShapes>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, InputNameToShapes>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  functionNameToInputShapes;
}

@property (nonatomic, retain) NSString *activeFunction;
@property (nonatomic, retain) NSDictionary *functionNameToInputLayersNames;
@property (nonatomic, retain) NSDictionary *functionNameToOutputLayersNames;

+ (id)containerFromCompiledArchive:(void*)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id*)arg5;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeFunction;
- (id)functionNameToInputLayersNames;
- (id)functionNameToOutputLayersNames;
- (id)initWithContainer:(id)arg1 program:(const void*)arg2 error:(id*)arg3;
- (void)setActiveFunction:(id)arg1;
- (void)setFunctionNameToInputLayersNames:(id)arg1;
- (void)setFunctionNameToOutputLayersNames:(id)arg1;

@end
