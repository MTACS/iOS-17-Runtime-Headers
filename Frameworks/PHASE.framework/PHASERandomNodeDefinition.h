
@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray * _subtrees;
    long long  _uniqueSelectionQueueLength;
}

@property (nonatomic) long long noRepeatLastX;
@property (nonatomic, retain) NSMutableArray *subtrees;
@property (nonatomic) long long uniqueSelectionQueueLength;

- (void).cxx_destruct;
- (void)addSubtree:(id)arg1 weight:(id)arg2;
- (id)children;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUID:(id)arg1;
- (long long)noRepeatLastX;
- (void)setNoRepeatLastX:(long long)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setUniqueSelectionQueueLength:(long long)arg1;
- (id)subtrees;
- (long long)uniqueSelectionQueueLength;

@end
