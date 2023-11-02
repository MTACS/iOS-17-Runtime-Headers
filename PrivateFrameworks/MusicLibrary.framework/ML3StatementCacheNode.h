
@interface ML3StatementCacheNode : NSObject {
    NSObject<NSCopying> * _dictionaryKey;
    ML3StatementCacheNode * _next;
}

@property (nonatomic, copy) NSObject<NSCopying> *dictionaryKey;
@property (nonatomic, retain) ML3StatementCacheNode *next;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryKey;
- (id)initWithDictionaryKey:(id)arg1;
- (id)next;
- (void)setDictionaryKey:(id)arg1;
- (void)setNext:(id)arg1;

@end
