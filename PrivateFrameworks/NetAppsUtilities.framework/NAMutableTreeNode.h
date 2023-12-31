
@interface NAMutableTreeNode : NATreeNode

@property (nonatomic, copy) NSSet *childNodes;
@property (nonatomic, retain) id representedObject;

- (void)addChild:(id)arg1;
- (void)addChildren:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildrenPassingTest:(id /* block */)arg1;
- (void)setChildNodes:(id)arg1;

@end
