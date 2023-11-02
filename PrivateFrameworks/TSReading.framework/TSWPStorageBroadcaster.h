
@interface TSWPStorageBroadcaster : NSObject {
    struct set<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> { 
        struct __tree<id<TSWPStorageObserver>, std::less<id<TSWPStorageObserver>>, std::allocator<id<TSWPStorageObserver>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<id<TSWPStorageObserver>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::less<id<TSWPStorageObserver>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _observers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 delta:(long long)arg3 broadcastKind:(int)arg4;
- (void)dealloc;
- (void)removeAllObservers;
- (void)removeObserver:(id)arg1;

@end
