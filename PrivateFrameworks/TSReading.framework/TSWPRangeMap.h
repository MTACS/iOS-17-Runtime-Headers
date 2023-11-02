
@interface TSWPRangeMap : NSObject {
    struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> { 
            struct _TSWPCharIndexAndAffinity {} *__value_; 
        } __end_cap_; 
    }  _mappedIndexes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _subRange;
    struct vector<_TSWPCharIndexAndAffinity, std::allocator<_TSWPCharIndexAndAffinity>> { 
        struct _TSWPCharIndexAndAffinity {} *__begin_; 
        struct _TSWPCharIndexAndAffinity {} *__end_; 
        struct __compressed_pair<_TSWPCharIndexAndAffinity *, std::allocator<_TSWPCharIndexAndAffinity>> { 
            struct _TSWPCharIndexAndAffinity {} *__value_; 
        } __end_cap_; 
    }  _unmappedIndexes;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unmappedIndexes:(const void*)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 unmappedPairIndexes:(const void*)arg2;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })mappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })unmappedCharRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
