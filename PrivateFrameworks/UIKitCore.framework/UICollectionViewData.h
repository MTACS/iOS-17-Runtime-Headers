
@interface UICollectionViewData : NSObject {
    _UICollectionViewDataAttributesMap * _attributesMap;
    NSArray * _clonedCellAttributes;
    NSArray * _clonedDecorationAttributes;
    NSArray * _clonedSupplementaryAttributes;
    UICollectionView * _collectionView;
    struct { 
        unsigned int contentSizeIsValid : 1; 
        unsigned int itemCountsAreValid : 1; 
        unsigned int layoutIsPreparing : 1; 
        unsigned int layoutIsPrepared : 1; 
        unsigned int layoutLocked : 1; 
    }  _collectionViewDataFlags;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSMutableDictionary * _decorationLayoutAttributes;
    _UIMutableFastIndexSet * _globalIndexesOfItemsAwaitingValidation;
    struct unordered_map<long, UICollectionViewLayoutAttributes *, std::hash<long>, std::equal_to<long>, std::allocator<std::pair<const long, UICollectionViewLayoutAttributes *>>> { 
        struct __hash_table<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>>, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>>, std::allocator<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>>> { 
            struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { 
                struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>>> { 
                    void **__value_; 
                    struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { 
                        struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> *>> { 
                            unsigned long long __value_; 
                        } __data_; 
                    } __value_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *>>> { 
                struct __hash_node_base<std::__hash_node<std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, void *> *> { 
                    void *__next_; 
                } __value_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, std::__unordered_map_hasher<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::hash<long>, std::equal_to<long>>> { 
                unsigned long long __value_; 
            } __p2_; 
            struct __compressed_pair<float, std::__unordered_map_equal<long, std::__hash_value_type<long, UICollectionViewLayoutAttributes *>, std::equal_to<long>, std::hash<long>>> { 
                float __value_; 
            } __p3_; 
        } __table_; 
    }  _globalItemMap;
    NSMutableDictionary * _invalidatedDecorationIndexPaths;
    NSMutableDictionary * _invalidatedSupplementaryIndexPaths;
    long long  _lastResultForNumberOfItemsBeforeSection;
    long long  _lastSectionTestedForNumberOfItemsBeforeSection;
    UICollectionViewLayout * _layout;
    unsigned long long  _preUpdateCachedItemCount;
    struct vector<long, std::allocator<long>> { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long *, std::allocator<long>> { 
            long long *__value_; 
        } __end_cap_; 
    }  _sectionItemCounts;
    NSMutableDictionary * _supplementaryLayoutAttributes;
    long long  _totalItemCount;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_TEST_validLayoutRect;

@end
