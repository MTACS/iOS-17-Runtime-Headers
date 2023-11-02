
@protocol SFAsyncResourceLoader <SFResourceLoader>

@required

- (<SFCardResourceLoader> *)cardLoader;
- (<SFImageResourceLoader> *)imageLoader;
- (<SFMoreResultsResourceLoader> *)moreResultsLoader;

@end
