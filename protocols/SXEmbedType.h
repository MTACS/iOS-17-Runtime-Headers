
@protocol SXEmbedType <NSObject>

@required

- (unsigned long long)autoPlayMedia;
- (NSURL *)baseURL;
- (NSString *)bodyHTML;
- (NSString *)enclosingHTML;
- (NSString *)javaScript;
- (double)maximumWidth;
- (double)minimumWidth;

@end
