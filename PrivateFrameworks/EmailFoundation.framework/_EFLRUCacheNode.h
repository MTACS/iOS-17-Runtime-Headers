
@interface _EFLRUCacheNode : NSObject {
    id  _element;
    id  _key;
    _EFLRUCacheNode * _next;
    _EFLRUCacheNode * _previous;
}

@property (nonatomic, readonly) id element;
@property (nonatomic, readonly) id key;
@property (nonatomic, retain) _EFLRUCacheNode *next;
@property (nonatomic, retain) _EFLRUCacheNode *previous;

- (void).cxx_destruct;
- (id)element;
- (id)initWithKey:(id)arg1 element:(id)arg2;
- (id)key;
- (id)next;
- (id)previous;
- (void)setNext:(id)arg1;
- (void)setPrevious:(id)arg1;

@end
