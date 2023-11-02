
@interface BRCLRUDictionaryNode : NSObject <NSCopying> {
    id  _key;
    BRCLRUDictionaryNode * _next;
    id  _object;
    BRCLRUDictionaryNode * _prev;
}

@property (nonatomic, readonly) id key;
@property (nonatomic) BRCLRUDictionaryNode *next;
@property (nonatomic, retain) id object;
@property (nonatomic) BRCLRUDictionaryNode *prev;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithKey:(id)arg1 object:(id)arg2;
- (id)key;
- (id)next;
- (id)object;
- (id)prev;
- (void)setNext:(id)arg1;
- (void)setObject:(id)arg1;
- (void)setPrev:(id)arg1;

@end
