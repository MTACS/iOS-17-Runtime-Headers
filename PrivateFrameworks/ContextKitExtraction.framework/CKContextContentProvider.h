
@interface CKContextContentProvider : NSObject

+ (unsigned char)controlCodeForExecutor:(id)arg1;
+ (void)extractContentFromWebViewPDFData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)handlePDFView:(id)arg1 withExecutor:(id)arg2;

- (void)extractUsingExecutor:(id)arg1;
- (void)extractUsingExecutor:(id)arg1 withOptions:(unsigned long long)arg2;
- (double)timeout;

@end
