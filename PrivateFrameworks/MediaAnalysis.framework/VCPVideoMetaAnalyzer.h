
@interface VCPVideoMetaAnalyzer : NSObject {
    float  _photoOffset;
}

@property (nonatomic) float photoOffset;
@property (nonatomic, readonly, retain) NSDictionary *privateResults;
@property (nonatomic, readonly, retain) NSDictionary *publicResults;

+ (id)analyzerForTrackType:(id)arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 requestAnalyses:(unsigned long long)arg3 formatDescription:(struct opaqueCMFormatDescription { }*)arg4;

- (int)finalizeAnalysis;
- (float)photoOffset;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;
- (id)publicResults;
- (void)setPhotoOffset:(float)arg1;

@end
