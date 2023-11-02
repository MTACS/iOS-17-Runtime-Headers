
@interface SIPeopleSegmentationData : SIOutputData {
    struct __CVBuffer { } * _segmentation;
}

@property struct __CVBuffer { }*segmentation;

- (struct CGSize { double x1; double x2; })_resolutionByConfig:(id)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (id)initWithOutputSemanticBuffer:(struct __CVBuffer { }*)arg1;
- (struct __CVBuffer { }*)segmentation;
- (void)setSegmentation:(struct __CVBuffer { }*)arg1;

@end
