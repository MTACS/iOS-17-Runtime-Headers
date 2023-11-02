
@interface ECMappingContext : NSObject {
    struct map<unsigned long, unsigned long, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>>> { 
        struct __tree<std::__value_type<unsigned long, unsigned long>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, unsigned long>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, unsigned long>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, unsigned long>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  mIndexToMappedIndex;
    NSMutableArray * mMappingInfos;
    struct __CFDictionary { } * mObjectToMappingInfo;
    NSMutableDictionary * mSheetNameToMappedIndex;
}

+ (id)mappingContext;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)associateMappingInfo:(id)arg1 withSheetName:(id)arg2 andSheetIndex:(unsigned long long)arg3 andObject:(id)arg4;
- (void)dealloc;
- (id)init;
- (unsigned long long)mappedSheetIndexForSheetIndex:(unsigned long long)arg1;
- (unsigned long long)mappedSheetIndexForSheetName:(id)arg1;
- (void*)mappedSheetNames;
- (id)mappingInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)mappingInfoCount;
- (id)mappingInfoForObject:(id)arg1;

@end
