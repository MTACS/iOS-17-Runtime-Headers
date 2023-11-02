
@interface CRTextDetectorResults : NSObject {
    NSArray * _detectedTables;
    NSDate * _endTime;
    NSDictionary * _inputOptions;
    NSArray * _pyramidPostInterScaleNMSTextFeatures;
    NSArray * _pyramidPostIntraScaleNMSTextFeatures;
    NSArray * _pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray * _pyramidScaleName;
    NSMutableArray * _pyramidScaleSize;
    NSDate * _startTime;
    NSArray * _textFeatures;
}

@property (nonatomic, retain) NSArray *detectedTables;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSDictionary *inputOptions;
@property (nonatomic, retain) NSArray *pyramidPostInterScaleNMSTextFeatures;
@property (nonatomic, retain) NSArray *pyramidPostIntraScaleNMSTextFeatures;
@property (nonatomic, retain) NSArray *pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic, retain) NSMutableArray *pyramidScaleName;
@property (nonatomic, retain) NSMutableArray *pyramidScaleSize;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSArray *textFeatures;

- (void).cxx_destruct;
- (id)detectedTables;
- (id)endTime;
- (id)inputOptions;
- (id)pyramidPostInterScaleNMSTextFeatures;
- (id)pyramidPostIntraScaleNMSTextFeatures;
- (id)pyramidPreIntraScaleNMSTextFeatures;
- (id)pyramidScaleName;
- (id)pyramidScaleSize;
- (void)setDetectedTables:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setInputOptions:(id)arg1;
- (void)setPyramidPostInterScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidPostIntraScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidPreIntraScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidScaleName:(id)arg1;
- (void)setPyramidScaleSize:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTextFeatures:(id)arg1;
- (id)startTime;
- (id)textFeatures;

@end
