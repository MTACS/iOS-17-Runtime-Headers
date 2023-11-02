
@interface ADJasperPointCloud : NSObject {
    NSData * _additionalData;
    struct __CVBuffer { } * _dataBuffer;
    struct JasperPointCloud { 
        struct unique_ptr<unsigned char[], std::default_delete<unsigned char[]>> { 
            struct __compressed_pair<unsigned char *, std::default_delete<unsigned char[]>> { 
                char *__value_; 
            } __ptr_; 
        } m_ownedStorage; 
        struct JasperPointCloudDataHeader {} *m_header; 
        unsigned long long m_capacity; 
    }  _pc;
}

@property (readonly) const char *bankIds;
@property (readonly) const struct CGPoint { double x1; double x2; }*cameraPixels;
@property (readonly) const float*confidences;
@property (readonly) const char *echoIds;
@property (readonly) const float*euclideanDistances;
@property (readonly) const unsigned int*flags;
@property (readonly) const float*intensities;
@property (readonly) int length;
@property (readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (readonly) const float*signalToNoiseRatios;
@property (readonly) const char *spotIds;
@property (readonly) const struct CGPoint { double x1; double x2; }*undistortedCameraPixels;

+ (id)JasperCSVAttributeNamesCannonicalOrder;
+ (long long)getKeyForName:(id)arg1;
+ (id)makeWithDataBuffer:(struct __CVBuffer { }*)arg1;
+ (unsigned int)pixelFormat;
+ (id)pointCloudByMergingPointClouds:(id)arg1;
+ (id)pointCloudByMergingPointClouds:(id)arg1 applyingTransforms:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 projectingToCamera:(id)arg3;
+ (id)pointCloudFromCSV:(id)arg1;
+ (id)pointCloudFromFile:(id)arg1;
+ (id)pointCloudFromJSPP:(id)arg1;
+ (bool)prepareDataBuffer:(struct __CVBuffer { }*)arg1 forLength:(int)arg2;
+ (bool)prepareDataBuffer:(struct __CVBuffer { }*)arg1 forLength:(int)arg2 additionalDataSize:(unsigned long long)arg3;
+ (unsigned long long)requiredStorageBytesForLength:(int)arg1;
+ (unsigned long long)requiredStorageBytesForLength:(int)arg1 additionalDataSize:(unsigned long long)arg2;
+ (void)resetPerformanceOverrides;
+ (void)setPerformanceOverrides:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)additionalData;
- (const char *)bankIds;
- (const struct CGPoint { double x1; double x2; }*)cameraPixels;
- (struct CGImage { }*)cgImageRepresentation;
- (const float*)confidences;
- (struct __CVBuffer { }*)createVisualization;
- (struct __CVBuffer { }*)createVisualizationOnImage:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)dataBuffer;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)dictionaryRepresentation;
- (const char *)echoIds;
- (const float*)euclideanDistances;
- (const unsigned int*)flags;
- (id)imageRepresentationForUTI:(id)arg1;
- (id)initByMergingPointClouds:(id)arg1;
- (id)initWithDataBuffer:(struct __CVBuffer { }*)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithLength:(int)arg1;
- (id)initWithLength:(int)arg1 storage:(struct __CVBuffer { }*)arg2;
- (id)initWithPointCloud:(id)arg1;
- (id)initWithPreparedStorage:(void*)arg1 storageSize:(unsigned long long)arg2;
- (const float*)intensities;
- (id)jpegRepresentation;
- (int)length;
- (id)mutableCopy;
- (id)pngRepresentation;
- (id)pointCloudByApplyingFilter:(id)arg1;
- (id)pointCloudByChangingPointOfViewByTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 to:(id)arg2;
- (id)pointCloudByChangingPointOfViewFrom:(id)arg1 to:(id)arg2;
- (bool)pointCloudToCSV:(id)arg1 atomically:(bool)arg2;
- (bool)pointCloudToImageFile:(id)arg1 uti:(id)arg2 atomically:(bool)arg3;
- (bool)pointCloudToJSPP:(id)arg1 atomically:(bool)arg2;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (long long)projectJasperPointsCroppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 rotatedBy:(long long)arg2 andScaledInto:(struct __CVBuffer { }*)arg3;
- (long long)projectJasperPointsFilteredBy:(id)arg1 croppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotatedBy:(long long)arg3 andScaledInto:(struct __CVBuffer { }*)arg4;
- (long long)projectJasperPointsFilteredBy:(id)arg1 croppedBy:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotatedBy:(long long)arg3 andScaledMergingWith:(struct __CVBuffer { }*)arg4;
- (bool)reset;
- (const float*)signalToNoiseRatios;
- (int)size;
- (const char *)spotIds;
- (const struct CGPoint { double x1; double x2; }*)undistortedCameraPixels;
- (bool)writeToFile:(id)arg1 atomically:(bool)arg2;

@end
