
@interface FRCLivePhotoMetadataReader : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _burstDropTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _droppingThreshold;
    unsigned long long  _frameIndex;
    unsigned long long  _initialOriginalPTS;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _initialTime;
    NSMutableArray * _metadataList;
    AVAssetReaderOutputMetadataAdaptor * _metadataOutputAdaptor;
    unsigned int  _metadataVersion;
    unsigned long long  _numberOfDroppedFrames;
    unsigned long long  _numberOfInterpolatedFrames;
    unsigned long long  _numberOfMetadataFrames;
    long long  _previousDisplacement;
    bool  _printMetadata;
    long long  _ptsMismatches;
    unsigned long long  _recipe;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _stillImageTime;
    bool  _stillImageTransformAvailble;
    bool  _stillImageTransformReferenceDimensionsAvailable;
    unsigned long long  _totalFrames;
    bool  _verbose;
}

@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } burstDropTime;
@property (nonatomic, readonly) unsigned long long numberOfDroppedFrames;
@property (nonatomic, readonly) unsigned long long numberOfInterpolatedFrames;
@property (nonatomic, readonly) unsigned long long numberOfMetadataFrames;
@property (nonatomic) bool printMetadata;
@property (nonatomic, readonly) long long ptsMismatches;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } stillImageTime;
@property (nonatomic, readonly) bool stillImageTransformAvailble;
@property (nonatomic, readonly) bool stillImageTransformReferenceDimensionsAvailable;
@property (nonatomic) bool verbose;

- (void).cxx_destruct;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })burstDropTime;
- (id)createMetadataAdaptorForAsset:(id)arg1;
- (id)createMetadataEntryForV3Metadata:(struct { unsigned short x1; float x2[9]; unsigned long long x3; unsigned long long x4; unsigned char x5; BOOL x6; unsigned char x7; BOOL x8[13]; }*)arg1 frameIndex:(unsigned long long)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 isIDR:(bool)arg4 noRecipeGap:(bool)arg5;
- (id)init;
- (unsigned long long)numberOfDroppedFrames;
- (unsigned long long)numberOfInterpolatedFrames;
- (unsigned long long)numberOfMetadataFrames;
- (void)parseStillImageMetadata:(id)arg1;
- (unsigned long long)preParseMetadata;
- (bool)printMetadata;
- (void)printMetadata:(id)arg1 withVideoFrame:(id)arg2;
- (void)printMetadataListWithVideoTimingInfo:(id)arg1;
- (bool)processLivePhotoMetadataItem:(id)arg1 isIDR:(bool)arg2 recipeAvailable:(bool)arg3;
- (long long)ptsMismatches;
- (void)readLivePhotoMetadataFromAsset:(id)arg1;
- (void)setPrintMetadata:(bool)arg1;
- (void)setVerbose:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })stillImageTime;
- (bool)stillImageTransformAvailble;
- (bool)stillImageTransformReferenceDimensionsAvailable;
- (bool)verbose;

@end
