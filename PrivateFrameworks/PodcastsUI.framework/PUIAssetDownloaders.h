
@interface PUIAssetDownloaders : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundArtworkDownloader;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundArtworkSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  libraryArtworkSource;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  storeArtworkSource;
}

+ (id)sharedDownloaders;

- (void).cxx_destruct;
- (id)init;
- (void)registerBackgroundCompletion:(id /* block */)arg1 forSession:(id)arg2;

@end
