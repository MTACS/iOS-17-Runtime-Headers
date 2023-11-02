
@interface ETDataSourceWithCache : NSObject <ETDataSource> {
    struct map<int, ETDataPoint *, std::less<int>, std::allocator<std::pair<const int, ETDataPoint *>>> { 
        struct __tree<std::__value_type<int, ETDataPoint *>, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>, std::allocator<std::__value_type<int, ETDataPoint *>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<int, ETDataPoint *>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<int, std::__value_type<int, ETDataPoint *>, std::less<int>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _cache;
    <ETDataSource> * _source;
    bool  dump_descriptors;
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
    }  dump_path;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataPointAtIndex:(int)arg1;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 dumpPath:(id)arg2;
- (int)numberOfDataPoints;

@end
