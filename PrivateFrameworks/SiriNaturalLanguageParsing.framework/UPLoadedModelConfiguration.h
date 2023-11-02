
@interface UPLoadedModelConfiguration : NSObject {
    void * _beamMaskInput;
    NSString * _bioLabelsVocabPath;
    NSString * _bundleId;
    struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; } * _calibrationEspressoModule;
    NSString * _intentVocabPath;
    void * _labelToValueType;
    NSLocale * _locale;
    struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; } * _parserEspressoModule;
    UPPreprocessor * _preprocessor;
    void * _resolver;
}

@property (nonatomic, readonly) void*beamMaskInput;
@property (nonatomic, readonly) NSString *bioLabelsVocabPath;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; }*calibrationEspressoModule;
@property (readonly) bool hasCalibrationModel;
@property (nonatomic, readonly) NSString *intentVocabPath;
@property (nonatomic, readonly) void*labelToValueType;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic, readonly) struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; }*parserEspressoModule;
@property (nonatomic, readonly) UPPreprocessor *preprocessor;
@property (nonatomic, readonly) void*resolver;

- (void).cxx_destruct;
- (void*)beamMaskInput;
- (id)bioLabelsVocabPath;
- (id)bundleId;
- (struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; }*)calibrationEspressoModule;
- (void)dealloc;
- (bool)hasCalibrationModel;
- (id)initWithModelConfiguration:(id)arg1;
- (id)intentVocabPath;
- (void*)labelToValueType;
- (id)locale;
- (struct EspressoModule { void *x1; void *x2; struct { void *x_3_1_1; int x_3_1_2; } x3; }*)parserEspressoModule;
- (id)preprocessor;
- (void*)resolver;

@end
