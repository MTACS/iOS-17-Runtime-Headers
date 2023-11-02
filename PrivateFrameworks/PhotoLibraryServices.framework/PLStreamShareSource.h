
@interface PLStreamShareSource : NSObject {
    NSString * _fileExtension;
    NSData * _mediaData;
    long long  _mediaType;
    NSURL * _mediaURL;
    PLSandboxedURL * _sandboxedMediaURL;
    PLSandboxedURL * _sandboxedVideoComplementImageURL;
    PLSandboxedURL * _sandboxedVideoComplementVideoURL;
    PFVideoComplement * _videoComplement;
}

@property (nonatomic, retain) NSString *fileExtension;
@property (nonatomic, retain) NSData *mediaData;
@property (nonatomic) long long mediaType;
@property (nonatomic, retain) NSURL *mediaURL;
@property (nonatomic, retain) PFVideoComplement *videoComplement;

- (void).cxx_destruct;
- (void)_cleanupIfNeededMediaAtURL:(id)arg1;
- (void)cleanupResources;
- (id)fileExtension;
- (id)initWithDictionary:(id)arg1;
- (id)mediaData;
- (long long)mediaType;
- (id)mediaURL;
- (id)photoLibrary;
- (id)serializedDictionary;
- (void)setFileExtension:(id)arg1;
- (void)setMediaData:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaURL:(id)arg1;
- (void)setVideoComplement:(id)arg1;
- (id)videoComplement;

@end
