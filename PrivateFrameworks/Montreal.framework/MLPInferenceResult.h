
@interface MLPInferenceResult : NSObject {
    struct map<unsigned int, std::map<unsigned int, unsigned int>, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, std::map<unsigned int, unsigned int>>>> { 
        struct __tree<std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, std::map<unsigned int, unsigned int>>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  confusionMatrix;
    float  logLikelihood;
    float  totalLoss;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end
