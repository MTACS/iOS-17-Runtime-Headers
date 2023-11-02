
@interface HRTFEnrollmentAssetDownloadSession : NSObject {
    id /* block */  _completion;
    NSXPCConnection * _connection;
    union AssetDownloadOptions { 
        unsigned int shouldDownloadCatalog : 1; 
        unsigned int shouldDownloadAsset : 1; 
        unsigned int allowsCellularCatalogDownload : 1; 
        unsigned int allowsCellularAssetDownload : 1; 
        unsigned int discretionary : 1; 
        unsigned int reserved : 27; 
        unsigned int u32; 
    }  _options;
    id /* block */  _progressCallback;
}

- (void).cxx_destruct;
- (void)assetDownloadSessionProgressUpdate:(id)arg1;
- (void)cancel;
- (id)initWithOptions:(union AssetDownloadOptions { unsigned int x1 : 1; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 27; unsigned int x7; })arg1 progressCallback:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)start;

@end
