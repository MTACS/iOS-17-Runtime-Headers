
@interface AMSLRUCacheItem : AMSDoubleLinkedListNode {
    <NSCopying> * _key;
}

@property (nonatomic) <NSCopying> *key;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 object:(id)arg2;
- (id)key;
- (void)setKey:(id)arg1;

@end
