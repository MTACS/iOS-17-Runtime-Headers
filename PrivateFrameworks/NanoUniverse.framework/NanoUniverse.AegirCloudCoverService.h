
@interface NanoUniverse.AegirCloudCoverService : NSObject {
    void authenticator;
    void backoffInterval;
    void configuration;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  directory;
    void disableFetch;
    void dispatchSourceTimer;
    void fileConverter;
    void imageScale;
    void maxBackoffInterval;
    void operationsInProgress;
    void privateQueue;
    void refreshTimeIntervalInSeconds;
    void session;
    void startBackoffInterval;
}

@property (nonatomic, readonly) NSArray *allCloudLevelFileNames;
@property (nonatomic, readonly) bool canFetchData;
@property (nonatomic, copy) NSURL *directory;
@property (nonatomic) bool disableFetch;
@property (nonatomic, retain) <NUNIFileConverter> *fileConverter;

+ (id)cloudLevelHighFileName;
+ (id)cloudLevelLowFileName;
+ (id)cloudLevelMidFileName;
+ (id)cloudLevelPrefix;

- (void).cxx_destruct;
- (id)allCloudLevelFileNames;
- (bool)canFetchData;
- (id)cloudTextureURLs;
- (id)currentURLForCloudLevelWith:(id)arg1;
- (id)directory;
- (bool)disableFetch;
- (id)fileConverter;
- (id)init;
- (id)initWithImageScale:(float)arg1;
- (void)retrieveCloudTextureURLsWithNotifyOn:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDirectory:(id)arg1;
- (void)setDisableFetch:(bool)arg1;
- (void)setFileConverter:(id)arg1;
- (id)urlForCloudLevelWith:(id)arg1;

@end
