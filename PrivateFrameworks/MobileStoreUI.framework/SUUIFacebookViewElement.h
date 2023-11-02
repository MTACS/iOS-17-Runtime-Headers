
@interface SUUIFacebookViewElement : SUUIViewElement {
    long long  _facebookType;
    NSString * _urlString;
}

@property (nonatomic, readonly) NSString *URLString;
@property (nonatomic, readonly) long long facebookType;

- (void).cxx_destruct;
- (id)URLString;
- (id)applyUpdatesWithElement:(id)arg1;
- (long long)facebookType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (long long)pageComponentType;

@end
