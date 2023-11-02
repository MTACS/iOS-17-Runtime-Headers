
@interface BRCLRUDictionary : NSObject <NSCopying> {
    NSMutableDictionary * _dictionary;
    BRCLRUDictionaryNode * _head;
    unsigned long long  _maximumCapacity;
    BRCLRUDictionaryNode * _tail;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (nonatomic, retain) BRCLRUDictionaryNode *head;
@property (nonatomic) unsigned long long maximumCapacity;
@property (nonatomic, retain) BRCLRUDictionaryNode *tail;

- (void).cxx_destruct;
- (void)_addNodeToFront:(id)arg1;
- (void)_moveNodeToFront:(id)arg1;
- (void)_removeNode:(id)arg1;
- (void)_removeNodeFromLinkedList:(id)arg1;
- (void)_shrinkToCapacity;
- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)dictionary;
- (id)head;
- (id)initWithMaximumCapacity:(unsigned long long)arg1;
- (unsigned long long)maximumCapacity;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDictionary:(id)arg1;
- (void)setHead:(id)arg1;
- (void)setMaximumCapacity:(unsigned long long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setTail:(id)arg1;
- (id)tail;

@end
