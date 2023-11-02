
@interface FigCapturePointCloudDataSinkConfiguration : FigCaptureSinkConfiguration {
    bool  _discardsLatePointCloudData;
}

@property (nonatomic) bool discardsLatePointCloudData;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (bool)discardsLatePointCloudData;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDiscardsLatePointCloudData:(bool)arg1;
- (int)sinkType;

@end
