
@interface IKDOMDocumentFragment : IKDOMNode <IKJSDOMParentNode>

@property (nonatomic, readonly) unsigned long long childElementCount;
@property (nonatomic, readonly) IKDOMHTMLCollection *children;
@property (nonatomic, readonly) IKDOMElement *firstElementChild;
@property (nonatomic, readonly) IKDOMElement *lastElementChild;

- (unsigned long long)childElementCount;
- (id)children;
- (id)firstElementChild;
- (id)lastElementChild;
- (id)nodeName;
- (long long)nodeType;

@end
