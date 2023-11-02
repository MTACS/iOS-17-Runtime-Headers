
@interface SwitchSubtree : NSObject {
    PHASESoundEventNodeDefinition * _subtree;
    NSString * _switchValue;
}

@property (nonatomic, retain) PHASESoundEventNodeDefinition *subtree;
@property (nonatomic, retain) NSString *switchValue;

- (void).cxx_destruct;
- (void)setSubtree:(id)arg1;
- (void)setSwitchValue:(id)arg1;
- (id)subtree;
- (id)switchValue;

@end
