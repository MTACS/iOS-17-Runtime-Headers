
@interface TSWPCTTypesetterCache : NSObject {
    struct map<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> { 
        struct __tree<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>>, std::allocator<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, std::shared_ptr<TSWPParagraphTypesetter>>, std::less<unsigned long>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _typesetters;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addTypesetterForParagraphIdentifier:(unsigned long long)arg1 typesetter:(struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (struct shared_ptr<TSWPParagraphTypesetter> { struct TSWPParagraphTypesetter {} *x1; struct __shared_weak_count {} *x2; })cachedTypesetterForParagraphIdentifier:(unsigned long long)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)p_limitCacheSize:(unsigned long long)arg1;
- (void)removeTypesetterForParagraphIndex:(unsigned long long)arg1;

@end
