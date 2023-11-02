
@interface UIPrintServiceExtension : NSObject <NSExtensionRequestHandling> {
    NSExtensionContext * _extensionContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtensionContext *extensionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_respondWithResults:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)extensionContext;
- (id)printerDestinationsForPrintInfo:(id)arg1;
- (void)setExtensionContext:(id)arg1;

@end
