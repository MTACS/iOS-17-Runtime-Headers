
@interface VCPVideoMetaLivePhotoMetaAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray * _adjusterArray;
    NSMutableData * _deSerializedMetaBuffer;
    NSMutableArray * _frameTimestampArray;
    struct CGSize { 
        double width; 
        double height; 
    }  _gyroHomographyDimension;
    bool  _gyroHomographyIsValid;
    NSMutableArray * _interpolatedFrameArray;
    VCPVideoMetaFocusAnalyzer * _metaFocusAnalyzer;
    VCPVideoMetaLensSwitchAnalyzer * _metaLensSwitchAnalzer;
    VCPVideoMetaMotionAnalyzer * _metaMotionAnalyzer;
    NSMutableArray * _metadataItemTimestampArray;
    NSMutableArray * _metadataStabilizationArray;
    NSMutableArray * _originalFrameTimestampArray;
    struct CGVector { 
        double dx; 
        double dy; 
    }  _prevEstimatedCenterMv;
    unsigned long long  _requestAnalyses;
}

+ (id)defaultDesiredKeys;
+ (id)referenceSoftwareStackVersion;

- (void).cxx_destruct;
- (float)compareNumericVersion:(id)arg1 withReferenceVersion:(id)arg2;
- (float)compareSoftwareStackVersion:(id)arg1 withReferenceVersion:(id)arg2;
- (int)convertLivePhotoBinary:(id)arg1 toDictionary:(id)arg2;
- (int)convertLivePhotoStruct:(struct FigLivePhotoMetadata { unsigned int x1; struct FigLivePhotoMetadataV1Struct { float x_2_1_1; long long x_2_1_2; float x_2_1_3; float x_2_1_4; float x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; BOOL x_2_1_9; BOOL x_2_1_10; unsigned short x_2_1_11; unsigned int x_2_1_12; struct FigLivePhotoDetectedFaceV1Struct { long long x_13_2_1; float x_13_2_2; float x_13_2_3; float x_13_2_4; float x_13_2_5; int x_13_2_6; short x_13_2_7; unsigned short x_13_2_8; } x_2_1_13[0]; } x2; }*)arg1 toDictionary:(id)arg2;
- (int)finalizeAnalysis;
- (struct __CFData { }*)getFirstAtomWithFourCharCode:(unsigned int)arg1 fromSetupData:(struct __CFData { }*)arg2;
- (struct __CFData { }*)getSetupDataFrom:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)gyroHomographyVersionIsValid:(struct opaqueCMFormatDescription { }*)arg1;
- (id)init;
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;
- (struct CGSize { double x1; double x2; })readGyroHomographyDimension:(struct opaqueCMFormatDescription { }*)arg1;
- (id)readSoftwareStackVersion:(struct opaqueCMFormatDescription { }*)arg1;

@end
