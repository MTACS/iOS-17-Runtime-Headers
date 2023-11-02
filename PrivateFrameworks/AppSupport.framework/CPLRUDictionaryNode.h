
@interface CPLRUDictionaryNode : NSObject {
    id  _key;
    id  _object;
    CPLRUDictionaryNode * next;
    CPLRUDictionaryNode * prev;
}

@property (nonatomic, readonly) id key;
@property (nonatomic, retain) id object;

- (void)dealloc;
- (id)initWithKey:(id)arg1 object:(id)arg2;
- (id)key;
- (id)object;
- (void)setObject:(id)arg1;

@end
