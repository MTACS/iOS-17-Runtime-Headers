
@interface MSVLRUDictionaryNode : NSObject <NSCopying> {
    id  _key;
    MSVLRUDictionaryNode * _next;
    id  _object;
    MSVLRUDictionaryNode * _prev;
}

@property (nonatomic, readonly) id key;
@property (nonatomic) MSVLRUDictionaryNode *next;
@property (nonatomic, retain) id object;
@property (nonatomic) MSVLRUDictionaryNode *prev;

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