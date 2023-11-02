
@interface FigPointCloudDataCaptureConnectionConfiguration : FigVideoCaptureConnectionConfiguration {
    int  _projectorMode;
    bool  _supplementalPointCloudData;
}

@property (nonatomic) int projectorMode;
@property (nonatomic) bool supplementalPointCloudData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)projectorMode;
- (void)setProjectorMode:(int)arg1;
- (void)setSupplementalPointCloudData:(bool)arg1;
- (bool)supplementalPointCloudData;

@end
