
@interface VNRecognizeDocumentElementsRequestElementConfiguration : NSObject <NSCopying> {
    bool  _generateSegmentationMask;
    bool  _recognize;
}

@property bool generateSegmentationMask;
@property bool recognize;

+ (id)newConfiguration;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)generateSegmentationMask;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)recognize;
- (void)setGenerateSegmentationMask:(bool)arg1;
- (void)setRecognize:(bool)arg1;

@end
