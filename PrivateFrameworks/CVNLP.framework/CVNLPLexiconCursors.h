
@interface CVNLPLexiconCursors : NSObject <NSCopying> {
    struct vector<const _LXCursor *, std::allocator<const _LXCursor *>> { 
        struct _LXCursor {} **__begin_; 
        struct _LXCursor {} **__end_; 
        struct __compressed_pair<const _LXCursor **, std::allocator<const _LXCursor *>> { 
            struct _LXCursor {} **__value_; 
        } __end_cap_; 
    }  _sortedCursors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)dealloc;
- (void)enumerateLexiconCursorsSortedByPriorityWithBlock:(id /* block */)arg1;
- (id)initWithSortedCursors:(void*)arg1;

@end
