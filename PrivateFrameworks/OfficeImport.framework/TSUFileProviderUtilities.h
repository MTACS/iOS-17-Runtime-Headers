
@interface TSUFileProviderUtilities : NSObject

+ (void)bookmarkableStringFromDocumentURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)didUpdateAlternateContentsDocumentForDocumentAtURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)fetchAlternateContentsURLForDocumentURL:(id)arg1 completion:(id /* block */)arg2;
+ (void)initialize;
+ (void)setAlternateContentsURL:(id)arg1 onDocumentURL:(id)arg2 completion:(id /* block */)arg3;

- (id)init;

@end
