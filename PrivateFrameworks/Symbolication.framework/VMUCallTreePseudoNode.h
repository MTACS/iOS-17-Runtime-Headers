
@interface VMUCallTreePseudoNode : VMUCallTreeNode

- (bool)isPseudo;
- (id)largestTopOfStackPath;
- (id)pseudoNodeTopOfStackChild;
- (id)sortedChildrenWithPseudoNode;

@end
