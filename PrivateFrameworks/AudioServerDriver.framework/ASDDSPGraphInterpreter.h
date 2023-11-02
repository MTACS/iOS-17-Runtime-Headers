
@interface ASDDSPGraphInterpreter : NSObject {
    struct unique_ptr<DSPGraph::Interpreter, std::default_delete<DSPGraph::Interpreter>> { 
        struct __compressed_pair<DSPGraph::Interpreter *, std::default_delete<DSPGraph::Interpreter>> { 
            struct Interpreter {} *__value_; 
        } __ptr_; 
    }  _interpreter;
}

+ (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
+ (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
+ (struct unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, std::string>>> { struct __hash_table<std::__hash_value_type<std::string, std::string>, std::__unordered_map_hasher<std::string, std::__hash_value_type<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>>, std::__unordered_map_equal<std::string, std::__hash_value_type<std::string, std::string>, std::equal_to<std::string>, std::hash<std::string>>, std::allocator<std::__hash_value_type<std::string, std::string>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>>> { void **x_1_3_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> *>> { unsigned long long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<std::string, std::string>, void *> *> { void *x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })stringMapFromStringDictionary:(id)arg1;
+ (struct vector<std::string, std::allocator<std::string>> { void *x1; void *x2; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x_3_1_1; } x3; })stringVectorFromStringArray:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)compileFile:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id)compileText:(id)arg1 withSubstitutions:(id)arg2 includingPaths:(id)arg3;
- (id)init;

@end
