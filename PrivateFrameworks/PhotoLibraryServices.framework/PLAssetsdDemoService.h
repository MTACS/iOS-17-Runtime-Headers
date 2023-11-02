
@interface PLAssetsdDemoService : NSObject <PLAssetsdDemoServiceProtocol> {
    PLAssetsdConnectionAuthorization * _connectionAuthorization;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cleanupForStoreDemoModeByStagingTemplateOrResettingLibrary:(id /* block */)arg1;
- (void)hasCompletedMomentAnalysisWithReply:(id /* block */)arg1;
- (void)hasCompletedRestorePostProcessingWithReply:(id /* block */)arg1;
- (id)initWithConnectionAuthorization:(id)arg1;

@end
