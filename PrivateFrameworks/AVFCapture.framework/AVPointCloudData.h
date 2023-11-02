
@interface AVPointCloudData : NSObject {
    struct __CVBuffer { } * _dataBuffer;
    ADJasperPointCloud * _jasperPointCloud;
    long long  _projectorMode;
}

@property (readonly) const char *bankIdentifiers;
@property (readonly) const float*confidenceScores;
@property (nonatomic, readonly, retain) ADJasperPointCloud *jasperPointCloud;
@property (readonly) struct __CVBuffer { }*pointCloudDataBuffer;
@property (readonly) unsigned int pointCloudFormatType;
@property (readonly) long long pointCount;
@property (readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**points;
@property (readonly) const /* Warning: Unrecognized filer type: '' using 'void*' */ void**pointsAndConfidenceScores;
@property (readonly) long long projectorMode;
@property (readonly) const char *spotIdentifiers;

+ (void)initialize;

- (const char *)bankIdentifiers;
- (const float*)confidenceScores;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)initWithDataBuffer:(struct __CVBuffer { }*)arg1;
- (id)jasperPointCloud;
- (struct __CVBuffer { }*)pointCloudDataBuffer;
- (unsigned int)pointCloudFormatType;
- (long long)pointCount;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)points;
- (const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)pointsAndConfidenceScores;
- (long long)projectorMode;
- (const char *)spotIdentifiers;

@end
