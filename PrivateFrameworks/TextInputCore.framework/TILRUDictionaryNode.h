
@interface TILRUDictionaryNode : NSObject {
    id  _key;
    id  _object;
    TILRUDictionaryNode * next;
    TILRUDictionaryNode * prev;
}

@property (nonatomic, readonly) id key;
@property (nonatomic, retain) id object;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 object:(id)arg2;
- (id)key;
- (id)object;
- (void)setObject:(id)arg1;

@end
