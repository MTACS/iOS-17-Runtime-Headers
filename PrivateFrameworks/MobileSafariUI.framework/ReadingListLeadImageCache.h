
@interface ReadingListLeadImageCache : NSObject {
    WBSCache * _cache;
    NSURL * _directoryURL;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithDirectoryURL:(id)arg1;
- (id)loadImageSynchronouslyForIconUUID:(id)arg1;

@end
