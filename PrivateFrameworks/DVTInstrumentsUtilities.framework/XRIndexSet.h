
@interface XRIndexSet : NSObject <NSCopying, NSMutableCopying> {
    struct XRIndexSetImpl<unsigned long long, 4, std::allocator<xray::internal::RangeImp<unsigned long long>>> { 
        struct multiset<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> { 
            struct __tree<xray::internal::RangeImp<unsigned long long>, std::less<xray::internal::RangeImp<unsigned long long>>, std::allocator<xray::internal::RangeImp<unsigned long long>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<xray::internal::RangeImp<unsigned long long>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::less<xray::internal::RangeImp<unsigned long long>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _ranges; 
        struct array<xray::internal::RangeImp<unsigned long long>, 4UL> { 
            struct RangeImp<unsigned long long> { 
                unsigned long long first; 
                unsigned long long last; 
            } __elems_[4]; 
        } _cache; 
        bool _cacheIsValid; 
    }  _impl;
}

+ (id)indexSetWithIndex:(unsigned long long)arg1;
+ (id)indexSetWithIndexesInRange:(struct _XRIndexRange { unsigned long long x1; unsigned long long x2; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)containsIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (bool)countEquals:(unsigned long long)arg1;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (void)enumerateRangesUsingBlock:(id /* block */)arg1;
- (unsigned long long)firstIndex;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(struct _XRIndexRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)intersectsIndexesInRange:(struct _XRIndexRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)isEmpty;
- (unsigned long long)lastIndex;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
