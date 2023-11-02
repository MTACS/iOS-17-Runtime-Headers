
@interface CRTableStructureRecognizer : NSObject {
    NSArray * _codemap;
    unsigned long long  _codemapSize;
    unsigned long long  _colsIndex;
    unsigned long long  _computeDeviceType;
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> { 
        struct __compressed_pair<CoreRecognition::EspressoModelWrapper *, std::default_delete<CoreRecognition::EspressoModelWrapper>> { 
            struct EspressoModelWrapper {} *__value_; 
        } __ptr_; 
    }  _decoderModel;
    NSString * _decoderName;
    struct unique_ptr<CoreRecognition::EspressoModelWrapper, std::default_delete<CoreRecognition::EspressoModelWrapper>> { 
        struct __compressed_pair<CoreRecognition::EspressoModelWrapper *, std::default_delete<CoreRecognition::EspressoModelWrapper>> { 
            struct EspressoModelWrapper {} *__value_; 
        } __ptr_; 
    }  _encoderModel;
    NSString * _encoderName;
    unsigned long long  _eopIndex;
    unsigned long long  _highestBinIndex;
    unsigned long long  _highestNumberIndex;
    long long  _inferenceCount;
    unsigned long long  _lowestNumberIndex;
    long long  _maxNumberOfInputRegions;
    unsigned long long  _mergeIndex;
    <MTLDevice> * _metalDevice;
    NSArray * _modelConfigurationsNumRegions;
    NSString * _modelSmallestConfig;
    bool  _modelsLoaded;
    unsigned long long  _noTableIndex;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _rowsIndex;
}

@property (nonatomic, readonly) NSArray *codemap;

+ (id)URLOfModelName:(id)arg1;
+ (id)defaultDecoderModelName;
+ (id)defaultEncoderModelName;
+ (id)loadCodemap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_recognizeTableStructureBlock:(void*)arg1 numConfigurationRegions:(long long)arg2;
- (id)alignResult:(struct CRTableStructureRecognizerResultParsed { unsigned long long x1; unsigned long long x2; bool x3; struct vector<double, std::allocator<double>> { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_4_1_3; } x4; struct vector<double, std::allocator<double>> { double *x_5_1_1; double *x_5_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_5_1_3; } x5; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_6_1_1; struct CRTableStructureMerge {} *x_6_1_2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_2_1; } x_6_1_3; } x6; })arg1 lines:(id)arg2 lineIndexMap:(struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *x1; unsigned long long *x2; struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { unsigned long long *x_3_1_1; } x3; })arg3;
- (id)codemap;
- (struct CRTableStructureRecognizerInputFeatures { struct vector<float, std::allocator<float>> { float *x_1_1_1; float *x_1_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_1_1_3; } x1; struct vector<float, std::allocator<float>> { float *x_2_1_1; float *x_2_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_2_1_3; } x2; struct vImage_Buffer { void *x_3_1_1; unsigned long long x_3_1_2; unsigned long long x_3_1_3; unsigned long long x_3_1_4; } x3; })extractFeaturesFromImage:(id)arg1 numConfigurationRegions:(long long)arg2 lines:(id)arg3;
- (long long)getConfigurationNumRegions:(long long)arg1;
- (id)getConfigurationStringForNumRegions:(long long)arg1;
- (int)getEncoderEngine:(unsigned long long)arg1;
- (id)init;
- (id)initWithComputeDeviceType:(unsigned long long)arg1 metalDevice:(id)arg2;
- (id)initWithEncoderName:(id)arg1 decoderName:(id)arg2 computeDeviceType:(unsigned long long)arg3 metalDevice:(id)arg4;
- (bool)loadModels;
- (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })normalizedLineRegions:(id)arg1 numConfigurationRegions:(long long)arg2 usingMinMaxNorm:(bool)arg3;
- (struct CRTableStructureRecognizerResultParsed { unsigned long long x1; unsigned long long x2; bool x3; struct vector<double, std::allocator<double>> { double *x_4_1_1; double *x_4_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_4_1_3; } x4; struct vector<double, std::allocator<double>> { double *x_5_1_1; double *x_5_1_2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_2_1; } x_5_1_3; } x5; struct vector<CRTableStructureMerge, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_6_1_1; struct CRTableStructureMerge {} *x_6_1_2; struct __compressed_pair<CRTableStructureMerge *, std::allocator<CRTableStructureMerge>> { struct CRTableStructureMerge {} *x_3_2_1; } x_6_1_3; } x6; })parseResult:(id)arg1;
- (bool)preheatWithError:(id*)arg1;
- (struct vector<double, std::allocator<double>> { double *x1; double *x2; struct __compressed_pair<double *, std::allocator<double>> { double *x_3_1_1; } x3; })readBinValuesStartingAtIndex:(int*)arg1 tokenIndexes:(struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })arg2;
- (id)recognizeDetectedTableInRegion:(id)arg1 filteredResults:(id)arg2 tableIndex:(unsigned long long)arg3 image:(id)arg4;
- (id)recognizeTableStructure:(void*)arg1 numConfigurationRegions:(long long)arg2;
- (void)reduceMemoryByResizing;
- (id)tableGroupRegionFromResult:(id)arg1 recognizedLines:(id)arg2;

@end
