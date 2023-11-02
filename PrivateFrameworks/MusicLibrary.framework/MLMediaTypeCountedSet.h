
@interface MLMediaTypeCountedSet : NSObject {
    struct map<unsigned int, unsigned long, std::less<unsigned int>, std::allocator<std::pair<const unsigned int, unsigned long>>> { 
        struct __tree<std::__value_type<unsigned int, unsigned long>, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>, std::allocator<std::__value_type<unsigned int, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned int, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned int, std::__value_type<unsigned int, unsigned long>, std::less<unsigned int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _map;
}

@property (nonatomic, readonly) unsigned long long count;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addMediaType:(unsigned int)arg1 count:(unsigned long long)arg2;
- (unsigned long long)count;
- (id)description;
- (void)enumerateMediaTypesWithBlock:(id /* block */)arg1;

@end
