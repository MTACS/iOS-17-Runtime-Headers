
@interface FPListRemoteVersionsOperation : FPOperation {
    NSURL * _documentURL;
    bool  _includeCachedVersions;
    NSOperationQueue * _queue;
}

@property (nonatomic) bool includeCachedVersions;

- (void).cxx_destruct;
- (id)fp_prettyDescription;
- (bool)includeCachedVersions;
- (id)initWithDocumentURL:(id)arg1;
- (bool)isSandboxExtensionConsumed;
- (void)main;
- (void)presendNotifications;
- (void)setIncludeCachedVersions:(bool)arg1;

@end
