
@interface TSWPFontHeightCache : NSObject {
    unsigned int  _cacheSize;
    struct list<unsigned long, std::allocator<unsigned long>> { 
        struct __list_node_base<unsigned long, void *> { 
            void *__prev_; 
            void *__next_; 
        } __end_; 
        struct __compressed_pair<unsigned long, std::allocator<std::__list_node<unsigned long, void *>>> { 
            unsigned long long __value_; 
        } __size_alloc_; 
    }  _fontHashList;
    struct map<unsigned long, TSWPFontHeightCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontHeightCacheEntry>>> { 
        struct __tree<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, TSWPFontHeightCacheEntry>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _fontHashToInfoMap;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    unsigned int  _maxCacheSize;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedCache;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; })fontHeightInfoForFont:(struct __CTFont { }*)arg1;
- (id)init;
- (void)p_addEntryForFont:(struct __CTFont { }*)arg1 heightInfo:(const struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg2;
- (bool)p_findEntryForFont:(struct __CTFont { }*)arg1 outHeightInfo:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; }*)arg2 collision:(bool*)arg3;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end
