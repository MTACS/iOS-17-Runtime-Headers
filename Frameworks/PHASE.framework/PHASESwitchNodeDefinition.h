
@interface PHASESwitchNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray * _subtrees;
    PHASEStringMetaParameterDefinition * _switchMetaParameterDefinition;
}

@property (nonatomic, retain) NSMutableArray *subtrees;
@property (nonatomic, readonly) PHASEStringMetaParameterDefinition *switchMetaParameterDefinition;

+ (id)new;

- (void).cxx_destruct;
- (void)addSubtree:(id)arg1 switchValue:(id)arg2;
- (id)children;
- (id)init;
- (id)initWithSwitchMetaParameterDefinition:(id)arg1;
- (id)initWithSwitchMetaParameterDefinition:(id)arg1 identifier:(id)arg2;
- (id)initWithSwitchMetaParameterDefinition:(id)arg1 uid:(id)arg2;
- (void)setSubtrees:(id)arg1;
- (id)subtrees;
- (id)switchMetaParameterDefinition;

@end
