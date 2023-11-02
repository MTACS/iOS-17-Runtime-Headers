
@interface ODDPresentationPoint : ODDPoint {
    NSMutableArray * mChildren;
    ODDPresentationPoint * mParent;
}

- (void).cxx_destruct;
- (void)addChild:(id)arg1 order:(unsigned long long)arg2;
- (id)children;
- (id)parent;
- (void)setType:(int)arg1;

@end
