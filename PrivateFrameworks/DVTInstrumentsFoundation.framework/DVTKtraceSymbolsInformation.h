
@interface DVTKtraceSymbolsInformation : NSObject {
    struct map<unsigned long long, std::pair<unsigned long long, id>, std::less<unsigned long long>, std::allocator<std::pair<const unsigned long long, std::pair<unsigned long long, id>>>> { 
        struct __tree<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>>, std::allocator<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long long, std::__value_type<unsigned long long, std::pair<unsigned long long, id>>, std::less<unsigned long long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _symbolInfos;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSymbolInfoForRange:(unsigned long long)arg1 length:(unsigned long long)arg2 symbolInfo:(id)arg3;
- (id)getSymbolInfoForAddress:(unsigned long long)arg1;

@end
