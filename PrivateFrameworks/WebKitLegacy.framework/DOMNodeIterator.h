
@interface DOMNodeIterator : DOMObject

@property (readonly) bool expandEntityReferences;
@property (readonly) <DOMNodeFilter> *filter;
@property (readonly) bool pointerBeforeReferenceNode;
@property (readonly) DOMNode *referenceNode;
@property (readonly) DOMNode *root;
@property (readonly) unsigned int whatToShow;

- (void)dealloc;
- (void)detach;
- (bool)expandEntityReferences;
- (id)filter;
- (id)nextNode;
- (bool)pointerBeforeReferenceNode;
- (id)previousNode;
- (id)referenceNode;
- (id)root;
- (unsigned int)whatToShow;

@end
