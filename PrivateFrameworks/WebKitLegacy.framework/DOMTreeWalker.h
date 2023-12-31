
@interface DOMTreeWalker : DOMObject

@property (retain) DOMNode *currentNode;
@property (readonly) bool expandEntityReferences;
@property (readonly) <DOMNodeFilter> *filter;
@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;

- (id)currentNode;
- (void)dealloc;
- (bool)expandEntityReferences;
- (id)filter;
- (id)firstChild;
- (id)lastChild;
- (id)nextNode;
- (id)nextSibling;
- (id)parentNode;
- (id)previousNode;
- (id)previousSibling;
- (id)root;
- (void)setCurrentNode:(id)arg1;
- (unsigned int)whatToShow;

@end
