
@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray * _subtrees;
}

+ (id)new;

- (void).cxx_destruct;
- (void)addSubtree:(id)arg1;
- (id)children;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithUID:(id)arg1;

@end
