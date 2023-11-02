
@interface VSTrieNode : NSObject {
    NSMutableDictionary * _next;
    NSMutableArray * _objects;
}

@property (nonatomic, retain) NSMutableDictionary *next;
@property (nonatomic, retain) NSMutableArray *objects;

- (void).cxx_destruct;
- (id)init;
- (id)next;
- (id)objects;
- (void)setNext:(id)arg1;
- (void)setObjects:(id)arg1;

@end
