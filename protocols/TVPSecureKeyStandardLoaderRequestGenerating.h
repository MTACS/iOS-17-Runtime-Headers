
@protocol TVPSecureKeyStandardLoaderRequestGenerating <NSObject>

@required

- (id)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 requestForFetchingDataFromURL:(NSURL *)arg2;
- (id)secureKeyStandardLoader:(TVPSecureKeyStandardLoader *)arg1 requestForPostingData:(NSData *)arg2 toURL:(NSURL *)arg3;

@end
