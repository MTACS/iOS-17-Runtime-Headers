
@protocol CPEntityUpdateProviding <CPBaseTemplateProviding>

@required

- (void)updateEntityTemplate:(CPTemplate<CPEntityProviding> *)arg1 withProxyDelegate:(id <CPEntityClientTemplateDelegate>)arg2;

@end
