
@interface FKTextDetector : NSObject {
    int  _binarizerLimit;
    bool  _colorSplits;
    int  _contrastLimit;
    bool  _createFeaturesForAllConcomps;
    bool  _detectDiacritics;
    bool  _enableBinarizerFiltering;
    struct { 
        unsigned long long scaleBuffer; 
        unsigned long long binarizer; 
        unsigned long long linesegs; 
        unsigned long long concomps; 
        unsigned long long sequences; 
        unsigned long long total; 
    }  _memoryUsage;
    struct { 
        int minScale; 
        int maxScale; 
    }  _mergeSettings;
    bool  _minimizeFalseDetections;
    int  _minimumCharacterHeight;
    NSObject<OS_dispatch_queue> * _multiThreadingQueue;
    NSString * _recognitionLanguage;
    NSArray * _recognitionLanguages;
    struct recognizer { void *x1; int x2; struct { int x_3_1_1; void *x_3_1_2; struct { void *x_3_2_1; void *x_3_2_2; unsigned long long x_3_2_3[4]; unsigned long long x_3_2_4[4]; unsigned long long x_3_2_5; unsigned long long x_3_2_6; unsigned long long x_3_2_7; unsigned long long x_3_2_8; unsigned long long x_3_2_9; unsigned long long x_3_2_10; unsigned long long x_3_2_11; unsigned long long x_3_2_12; unsigned long long x_3_2_13; unsigned long long x_3_2_14; int x_3_2_15; } x_3_1_3; struct { void *x_4_2_1; void *x_4_2_2; unsigned long long x_4_2_3[4]; unsigned long long x_4_2_4[4]; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; unsigned long long x_4_2_8; unsigned long long x_4_2_9; unsigned long long x_4_2_10; unsigned long long x_4_2_11; unsigned long long x_4_2_12; unsigned long long x_4_2_13; unsigned long long x_4_2_14; int x_4_2_15; } x_3_1_4; struct { void *x_5_2_1; void *x_5_2_2; unsigned long long x_5_2_3[4]; unsigned long long x_5_2_4[4]; unsigned long long x_5_2_5; unsigned long long x_5_2_6; unsigned long long x_5_2_7; unsigned long long x_5_2_8; unsigned long long x_5_2_9; unsigned long long x_5_2_10; unsigned long long x_5_2_11; unsigned long long x_5_2_12; unsigned long long x_5_2_13; unsigned long long x_5_2_14; int x_5_2_15; } x_3_1_5; } x3[5]; } * _recognizer;
    bool  _returnSubFeatures;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _roi;
    struct FKSession {} * _sessions;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    long long  _thresholdingAlgorithm;
    unsigned int  _timeBinarizer;
    unsigned int  _timeConcomps;
    unsigned int  _timeDownscale;
    unsigned int  _timeRecognizer;
    unsigned int  _timeSequences;
}

@property (nonatomic) int binarizerLimit;
@property (nonatomic) bool colorSplits;
@property (nonatomic) int contrastLimit;
@property (nonatomic) bool createFeaturesForAllConcomps;
@property (nonatomic) bool detectDiacritics;
@property (nonatomic) bool enableBinarizerFiltering;
@property (nonatomic) struct { int x1; int x2; } mergeSettings;
@property (nonatomic) bool minimizeFalseDetections;
@property (nonatomic) int minimumCharacterHeight;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *multiThreadingQueue;
@property (nonatomic, copy) NSString *recognitionLanguage;
@property (nonatomic, copy) NSArray *recognitionLanguages;
@property (nonatomic) bool returnSubFeatures;
@property (nonatomic) long long thresholdingAlgorithm;

- (int)binarizerLimit;
- (bool)colorSplits;
- (int)contrastLimit;
- (bool)createFeaturesForAllConcomps;
- (id)createFeaturesForROI:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 originalSize:(struct CGSize { double x1; double x2; })arg2 lastID:(long long*)arg3;
- (id)createFeaturesForSessionScale:(int)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 originalSize:(struct CGSize { double x1; double x2; })arg3 startID:(long long*)arg4;
- (void)dealloc;
- (bool)detectDiacritics;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (id)detectFeaturesInBuffer:(struct __CVBuffer { }*)arg1 withRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (bool)disableMultithreading;
- (bool)enableBinarizerFiltering;
- (unsigned long long)getMemoryUsageOfLastOperation;
- (id)initWithDimensions:(struct CGSize { double x1; double x2; })arg1;
- (unsigned char)isValidPixelBuffer:(struct __CVBuffer { }*)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (void)mergeFeature:(id)arg1 withArray:(id)arg2;
- (struct { int x1; int x2; })mergeSettings;
- (bool)minimizeFalseDetections;
- (int)minimumCharacterHeight;
- (id)multiThreadingQueue;
- (id)recognitionLanguage;
- (id)recognitionLanguages;
- (void)resetOptions;
- (void)resetTimers;
- (bool)returnSubFeatures;
- (void)runRecognizerOnFeatures:(id)arg1 roi:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 size:(struct CGSize { double x1; double x2; })arg3 lastID:(long long*)arg4;
- (void)setBinarizerLimit:(int)arg1;
- (void)setColorSplits:(bool)arg1;
- (void)setContrastLimit:(int)arg1;
- (void)setCreateFeaturesForAllConcomps:(bool)arg1;
- (void)setDetectDiacritics:(bool)arg1;
- (void)setEnableBinarizerFiltering:(bool)arg1;
- (void)setMergeSettings:(struct { int x1; int x2; })arg1;
- (void)setMinimizeFalseDetections:(bool)arg1;
- (void)setMinimumCharacterHeight:(int)arg1;
- (void)setMultiThreadingQueue:(id)arg1;
- (void)setRecognitionLanguage:(id)arg1;
- (void)setRecognitionLanguages:(id)arg1;
- (void)setReturnSubFeatures:(bool)arg1;
- (void)setThresholdingAlgorithm:(long long)arg1;
- (long long)thresholdingAlgorithm;
- (void)translatePropertiesToOptionsWithNumSessions:(int)arg1;

@end
