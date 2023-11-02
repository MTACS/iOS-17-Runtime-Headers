
@interface DOMDocumentType : DOMNode

@property (readonly) DOMNamedNodeMap *entities;
@property (readonly, copy) NSString *internalSubset;
@property (readonly, copy) NSString *name;
@property (readonly) DOMNamedNodeMap *notations;
@property (readonly, copy) NSString *publicId;
@property (readonly, copy) NSString *systemId;

- (id)entities;
- (id)internalSubset;
- (id)name;
- (id)notations;
- (id)publicId;
- (void)remove;
- (id)systemId;

@end
