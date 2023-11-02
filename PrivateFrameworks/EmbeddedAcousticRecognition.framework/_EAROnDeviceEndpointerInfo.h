
@interface _EAROnDeviceEndpointerInfo : NSObject {
    struct HybridClientConfigs { 
        struct map<int, std::map<std::string, double>, std::less<int>, std::allocator<std::pair<const int, std::map<std::string, double>>>> { 
            struct __tree<std::__value_type<int, std::map<std::string, double>>, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>>, std::allocator<std::__value_type<int, std::map<std::string, double>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, std::map<std::string, double>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, std::map<std::string, double>>, std::less<int>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } hybridEndpointerThresholds; 
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
        } hybridEndpointerExtraDelayFrequency; 
    }  _hybridClientConfigs;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getEndpointerExtraDelayFrequencyForTask:(id)arg1;
- (id)getEndpointerThresholdForClientModelVersion:(unsigned int)arg1 task:(id)arg2;
- (id)initWithConfig:(id)arg1;

@end
