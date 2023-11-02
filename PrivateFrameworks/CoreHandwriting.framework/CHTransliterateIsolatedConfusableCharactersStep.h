
@interface CHTransliterateIsolatedConfusableCharactersStep : CHPostprocessingStep {
    struct map<std::string, std::pair<std::string, double>, std::less<std::string>, std::allocator<std::pair<const std::string, std::pair<std::string, double>>>> { 
        struct __tree<std::__value_type<std::string, std::pair<std::string, double>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::pair<std::string, double>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::pair<std::string, double>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::pair<std::string, double>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _transliterationMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (id)process:(id)arg1 options:(id)arg2;

@end
