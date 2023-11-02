
@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {
    struct TSWPTopicNumberHints { 
        struct map<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>, std::less<const TSWPListStyle *>, std::allocator<std::pair<const TSWPListStyle *const, std::vector<TSWPTopicNumberEntry>>>> { 
            struct __tree<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>>, std::allocator<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>>> { 
                void *__begin_node_; 
                struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, void *>>> { 
                    struct __tree_end_node<std::__tree_node_base<void *> *> { 
                        void *__left_; 
                    } __value_; 
                } __pair1_; 
                struct __compressed_pair<unsigned long, std::__map_value_compare<const TSWPListStyle *, std::__value_type<const TSWPListStyle *, std::vector<TSWPTopicNumberEntry>>, std::less<const TSWPListStyle *>>> { 
                    unsigned long long __value_; 
                } __pair3_; 
            } __tree_; 
        } _numbersForListStyle; 
        unsigned long long _charIndex; 
        unsigned long long _validThroughCharIndex; 
        NSObject<TSWPStyleProvider> *_styleProvider; 
    }  _cachedTopicNumbers;
    long long  _delta;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _dirtyRange;
    bool  _isObservingStorage;
    <TSWPLayoutOwner> * _owner;
    TSWPStorage * _storage;
    TSWPCTTypesetterCache * _typesetterCache;
    bool  _useLigatures;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } dirtyRange;
@property (nonatomic, readonly) <TSWPLayoutOwner> *owner;
@property (nonatomic, readonly, retain) TSWPStorage *storage;
@property (nonatomic, readonly, retain) TSWPCTTypesetterCache *typesetterCache;

+ (void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(bool)arg7 styleProvider:(id)arg8 vertical:(bool)arg9;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearOwner;
- (void)clearTypesetterCache;
- (void)dealloc;
- (void)deflateTarget:(id)arg1 intoHints:(void*)arg2 childHints:(id)arg3 anchoredAttachmentPositions:(id*)arg4 topicNumbers:(void*)arg5 layoutState:(void*)arg6;
- (void)destroyLayoutState:(void*)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })dirtyRange;
- (void)inflateTarget:(id)arg1 fromHints:(const void*)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const void*)arg5;
- (id)initWithStorage:(id)arg1 owner:(id)arg2;
- (void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(bool*)arg3;
- (double)layoutIntoTarget:(id)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void*)layoutStateForLayoutTarget:(id)arg1 afterHint:(const struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct _NSRange { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; unsigned long long x3; struct _NSRange { unsigned long long x_4_1_1; unsigned long long x_4_1_2; } x4; unsigned long long x5; }*)arg2 childHint:(id)arg3 topicNumbers:(const void*)arg4 textIsVertical:(bool)arg5;
- (bool)needsLayoutInColumn:(id)arg1;
- (id)owner;
- (int)p_layoutConfigFlagsForTarget:(id)arg1;
- (void)resetTopicNumbers;
- (id)storage;
- (void)storage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (id)styleProvider;
- (id)typesetterCache;
- (void)willRemoveAttachmentLayout:(id)arg1;

@end
