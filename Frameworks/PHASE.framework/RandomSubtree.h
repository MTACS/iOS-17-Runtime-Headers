
@interface RandomSubtree : NSObject {
    PHASESoundEventNodeDefinition * _subtree;
    double  _weight;
}

@property (nonatomic, retain) PHASESoundEventNodeDefinition *subtree;
@property (nonatomic) double weight;

- (void).cxx_destruct;
- (void)setSubtree:(id)arg1;
- (void)setWeight:(double)arg1;
- (id)subtree;
- (double)weight;

@end
