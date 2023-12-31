
@protocol IKJSDOMParentNode <JSExport>

@required

- (unsigned long long)childElementCount;
- (IKDOMHTMLCollection *)children;
- (IKDOMElement *)firstElementChild;
- (IKDOMElement *)lastElementChild;

@end
