
@interface SUUIURLViewElement : SUUIViewElement {
    NSURL * _url;
}

@property (nonatomic, readonly) NSURL *URL;

- (void).cxx_destruct;
- (id)URL;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end
