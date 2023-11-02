
@interface PFCloudKitImporterWorkItem : NSObject {
    PFCloudKitImporterOptions * _options;
    NSCloudKitMirroringImportRequest * _request;
}

- (void)dealloc;
- (void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithOptions:(id)arg1 request:(id)arg2;

@end
