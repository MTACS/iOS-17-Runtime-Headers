
@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct SignalPack { 
        struct unordered_map<MapsSuggestionsSignalType, MSg::Signal, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>, std::allocator<std::pair<const MapsSuggestionsSignalType, MSg::Signal>>> { 
            struct __hash_table<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::__unordered_map_hasher<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>>, std::__unordered_map_equal<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::equal_to<MapsSuggestionsSignalType>, std::hash<MapsSuggestionsSignalType>>, std::allocator<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>>> { 
                struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>>> { 
                    struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>>> { 
                        void **__value_; 
                        struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>> { 
                            struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> *>> { 
                                unsigned long long __value_; 
                            } __data_; 
                        } __value_; 
                    } __ptr_; 
                } __bucket_list_; 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *>>> { 
                    struct __hash_node_base<std::__hash_node<std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, void *> *> { 
                        void *__next_; 
                    } __value_; 
                } __p1_; 
                struct __compressed_pair<unsigned long, std::__unordered_map_hasher<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::hash<MapsSuggestionsSignalType>, std::equal_to<MapsSuggestionsSignalType>>> { 
                    unsigned long long __value_; 
                } __p2_; 
                struct __compressed_pair<float, std::__unordered_map_equal<MapsSuggestionsSignalType, std::__hash_value_type<MapsSuggestionsSignalType, MSg::Signal>, std::equal_to<MapsSuggestionsSignalType>, std::hash<MapsSuggestionsSignalType>>> { 
                    float __value_; 
                } __p3_; 
            } __table_; 
        } dict_; 
    }  _innerSignalPack;
}

+ (id)extractFromDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (id)extractFromDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2;
+ (id)signalPackFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedFeatureDictionary;
- (bool)hasType:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSignalPack:(id)arg1;
- (bool)isEmpty;
- (bool)mergeIntoSignalPack:(id)arg1;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (float)valueForSignalType:(long long)arg1;

@end
