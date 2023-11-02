
@interface CSImportExtension : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (bool)updateAttributes:(id)arg1 forFileAtURL:(id)arg2 error:(id*)arg3;

@end
