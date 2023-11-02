
@interface WFTreeNode : NSObject {
    NSMutableArray * _mutableChildNodes;
    WFTreeNode * _parentNode;
    id  _representedObject;
}

@property (nonatomic, copy) NSArray *childNodes;
@property (getter=isLeaf, nonatomic, readonly) bool leaf;
@property (nonatomic, readonly) NSMutableArray *mutableChildNodes;
@property (nonatomic, readonly) NSString *nodeDescription;
@property (nonatomic, readonly) WFTreeNode *parentNode;
@property (nonatomic, retain) id representedObject;

- (void).cxx_destruct;
- (void)addNode:(id)arg1;
- (id)childNodes;
- (id)debugDescription;
- (id)debugDescriptionAtDepth:(unsigned long long)arg1;
- (id)descendentNodeAtRelativeIndexPath:(id)arg1;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isLeaf;
- (void)moveNodeFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)mutableChildNodes;
- (id)nodeDescription;
- (id)paddedStringAtDepth:(unsigned long long)arg1;
- (id)parentNode;
- (void)removeNode:(id)arg1;
- (void)removeNodeAtIndex:(unsigned long long)arg1;
- (id)representedObject;
- (void)setChildNodes:(id)arg1;
- (void)setParentNode:(id)arg1;
- (void)setRepresentedObject:(id)arg1;

@end
