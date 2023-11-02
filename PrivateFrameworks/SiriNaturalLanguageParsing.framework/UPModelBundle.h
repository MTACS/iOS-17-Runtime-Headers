
@interface UPModelBundle : NSObject {
    UPCalibrationModel * _calibrationModel;
    UPParserModel * _parserModel;
    UPPreprocessor * _preprocessor;
}

@property (nonatomic, readonly) UPCalibrationModel *calibrationModel;
@property (nonatomic, readonly) UPParserModel *parserModel;
@property (nonatomic, readonly) UPPreprocessor *preprocessor;

- (void).cxx_destruct;
- (id)calibrationModel;
- (id)initWithLoadedModelConfiguration:(id)arg1 parserModel:(id)arg2 calibrationModel:(id)arg3;
- (id)initWithPreprocessor:(id)arg1 parserModel:(id)arg2 calibrationModel:(id)arg3;
- (id)parserModel;
- (id)preprocessor;

@end
