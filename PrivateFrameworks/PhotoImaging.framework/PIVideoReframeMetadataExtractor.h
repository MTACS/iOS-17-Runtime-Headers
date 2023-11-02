
@interface PIVideoReframeMetadataExtractor : NSObject {
    AVAsset * _asset;
    AVAssetTrack * _mdataTrack;
    AVAssetTrack * _videoTrack;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  ndcMetadataTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  pxlMetadataTransform;
    NSArray * timedMetadataArray;
}

@property (nonatomic, readonly) NSArray *timedMetadataArray;

+ (bool)canProvideMetadataForAVAsset:(id)arg1;

- (void).cxx_destruct;
- (struct CGVector { double x1; double x2; })centerMotionVectorFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x1; struct FigLivePhotoMetadataV1Struct { float x_2_1_1; long long x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; BOOL x_2_1_9; BOOL x_2_1_10; unsigned short x_2_1_11; unsigned int x_2_1_12; struct FigLivePhotoDetectedFaceV1Struct { long long x_13_2_1; float x_13_2_2; float x_13_2_3; float x_13_2_4; float x_13_2_5; int x_13_2_6; short x_13_2_7; unsigned short x_13_2_8; } x_2_1_13[0]; } x2; }*)arg1;
- (id)extractMetadata;
- (id)init;
- (id)initWithAVAsset:(id)arg1;
- (struct CGVector { double x1; double x2; })motionBlurVectorFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x1; struct FigLivePhotoMetadataV1Struct { float x_2_1_1; long long x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; BOOL x_2_1_9; BOOL x_2_1_10; unsigned short x_2_1_11; unsigned int x_2_1_12; struct FigLivePhotoDetectedFaceV1Struct { long long x_13_2_1; float x_13_2_2; float x_13_2_3; float x_13_2_4; float x_13_2_5; int x_13_2_6; short x_13_2_7; unsigned short x_13_2_8; } x_2_1_13[0]; } x2; }*)arg1;
- (id)timedMetadataArray;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })trajectoryeHomographyFromMetadata:(const struct FigLivePhotoMetadata { unsigned int x1; struct FigLivePhotoMetadataV1Struct { float x_2_1_1; long long x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; BOOL x_2_1_9; BOOL x_2_1_10; unsigned short x_2_1_11; unsigned int x_2_1_12; struct FigLivePhotoDetectedFaceV1Struct { long long x_13_2_1; float x_13_2_2; float x_13_2_3; float x_13_2_4; float x_13_2_5; int x_13_2_6; short x_13_2_7; unsigned short x_13_2_8; } x_2_1_13[0]; } x2; }*)arg1 containsV3Metadata:(bool*)arg2;

@end
