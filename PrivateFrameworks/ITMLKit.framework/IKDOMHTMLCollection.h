
@interface IKDOMHTMLCollection : IKJSObject <IKJSDOMHTMLCollection> {
    IKDOMNode * _parentNode;
}

@property (readonly) unsigned long long length;
@property (nonatomic) IKDOMNode *parentNode;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)arg1 node:(id)arg2;
- (id)item:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)parentNode;
- (void)setParentNode:(id)arg1;

@end
