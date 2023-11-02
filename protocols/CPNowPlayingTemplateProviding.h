
@protocol CPNowPlayingTemplateProviding <CPBaseTemplateProviding>

@required

- (void)updateNowPlayingTemplate:(CPNowPlayingTemplate *)arg1 withProxyDelegate:(id <CPNowPlayingClientTemplateDelegate>)arg2;

@end
