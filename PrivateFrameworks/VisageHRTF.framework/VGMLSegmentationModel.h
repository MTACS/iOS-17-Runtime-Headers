
@interface VGMLSegmentationModel : VGMLImageToMultiFloatsModel {
    unsigned long long  _inputImageHeight;
    unsigned long long  _inputImageWidth;
    NSDictionary * _outputLayerNameRemap;
    NSDictionary * _outputLayersDictionary;
    unsigned long long  _outputSegmentationMapHeight;
    unsigned long long  _outputSegmentationMapWidth;
}

@property (nonatomic, readonly) unsigned long long inputImageHeight;
@property (nonatomic, readonly) unsigned long long inputImageWidth;
@property (nonatomic, readonly) NSDictionary *outputLayersDictionary;
@property (nonatomic, readonly) unsigned long long outputSegmentationMapHeight;
@property (nonatomic, readonly) unsigned long long outputSegmentationMapWidth;

- (void).cxx_destruct;
- (id)_runModel:(struct __CVBuffer { }*)arg1;
- (bool)hasGlasses:(struct __CVBuffer { }*)arg1;
- (void)inferInputImage:(struct __CVBuffer { }*)arg1 toOutput:(id)arg2;
- (id)init;
- (id)initWithModelPath:(id)arg1 error:(id*)arg2;
- (unsigned long long)inputImageHeight;
- (unsigned long long)inputImageWidth;
- (id)outputLayersDictionary;
- (unsigned long long)outputSegmentationMapHeight;
- (unsigned long long)outputSegmentationMapWidth;
- (id)segmentationMaps:(struct __CVBuffer { }*)arg1;

@end
