
@interface EFInt64Set : NSObject <NSCopying, NSMutableCopying> {
    struct set<long long, std::less<long long>, std::allocator<long long> > { 
        struct __tree<long long, std::less<long long>, std::allocator<long long> > { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<long long, void *> > > { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<long long> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _underlying;
}

@property (nonatomic, readonly, copy) NSString *commaSeparatedString;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long firstIndex;
@property (nonatomic, readonly) long long lastIndex;

+ (id)indexSet;
+ (id)indexSetWithIndexesInRange:(struct _EFInt64Range { long long x1; unsigned long long x2; })arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)_enumerateIndexesInRange:(struct _EFInt64Range { long long x1; unsigned long long x2; }*)arg1 maxCount:(unsigned long long)arg2 withBlock:(id /* block */)arg3;
- (id)_initWithIndexesInRange:(struct _EFInt64Range { long long x1; unsigned long long x2; })arg1;
- (id)_initWithUnderlyingSet:(const void*)arg1;
- (id)commaSeparatedString;
- (bool)containsIndex:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (void)enumerateIndexesUsingBlock:(id /* block */)arg1;
- (long long)firstIndex;
- (unsigned long long)getIndexes:(long long*)arg1 maxCount:(unsigned long long)arg2 inIndexRange:(struct _EFInt64Range { long long x1; unsigned long long x2; }*)arg3;
- (long long)indexGreaterThanIndex:(long long)arg1;
- (id)indexesInRange:(struct _EFInt64Range { long long x1; unsigned long long x2; })arg1;
- (id)init;
- (long long)lastIndex;
- (id)lowestIndexesInRange:(struct _EFInt64Range { long long x1; unsigned long long x2; })arg1 maxCount:(unsigned long long)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
