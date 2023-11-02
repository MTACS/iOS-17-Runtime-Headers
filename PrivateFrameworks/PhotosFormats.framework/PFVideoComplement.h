
@interface PFVideoComplement : NSObject {
    bool  _didReadOriginalMetadata;
    NSString * _imagePath;
    NSDictionary * _metadata;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalImageDisplayTime;
    NSString * _originalPairingIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalVideoDuration;
    NSString * _videoPath;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } imageDisplayTime;
@property (nonatomic, readonly, copy) NSString *imagePath;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } originalImageDisplayTime;
@property (nonatomic, readonly, copy) NSString *originalPairingIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } originalVideoDuration;
@property (nonatomic, readonly, copy) NSString *pairingIdentifier;
@property (nonatomic, readonly, copy) NSString *videoPath;

+ (bool)_enumerateV3MetadataInAsset:(id)arg1 withBlock:(id /* block */)arg2 error:(out id*)arg3;
+ (unsigned long long)_originalPTSForFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inAsset:(id)arg2 error:(out id*)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })_retimedPTSForOriginalPTS:(unsigned long long)arg1 inAsset:(id)arg2 error:(out id*)arg3;
+ (struct { long long x1; int x2; unsigned int x3; long long x4; })convertTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 fromAsset:(id)arg2 toAsset:(id)arg3;
+ (id)currentFormatVersion;

- (void).cxx_destruct;
- (bool)_getSourceFilePath:(id)arg1 destinationFilePath:(id)arg2 areOnSameVolume:(bool*)arg3 volumeSupportsCloning:(bool*)arg4;
- (void)_readMetadataIfNeeded;
- (bool)copyOrLinkPath:(id)arg1 toPath:(id)arg2 error:(id*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })imageDisplayTime;
- (id)imagePath;
- (id)init;
- (id)initWithBundleAtURL:(id)arg1;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2;
- (id)initWithPathToVideo:(id)arg1 pathToImage:(id)arg2 imageDisplayTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 pairingIdentifier:(id)arg4;
- (id)initWithPropertyList:(id)arg1;
- (int)numberOfFramesRecoveredWithError:(id*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originalImageDisplayTime;
- (id)originalPairingIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originalVideoDuration;
- (id)pairingIdentifier;
- (id)propertyListRepresentation;
- (id)videoPath;
- (bool)writeToBundleAtURL:(id)arg1 error:(id*)arg2;

@end
