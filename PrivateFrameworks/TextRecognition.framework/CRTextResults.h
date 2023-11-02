
@interface CRTextResults : NSObject {
    CRTextDetectorResults * _detectorResults;
    NSDate * _endTime;
    long long  _filteredOutFeatureCount;
    CRTextRecognizerResults * _recognizerResults;
    NSDate * _startTime;
    NSArray * _textFeatures;
    CRTextFeature * _titleTextFeature;
}

@property (nonatomic, retain) CRTextDetectorResults *detectorResults;
@property (nonatomic, retain) NSDate *endTime;
@property long long filteredOutFeatureCount;
@property (readonly) NSArray *lineFeatures;
@property (nonatomic, retain) CRTextRecognizerResults *recognizerResults;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSArray *textFeatures;
@property (nonatomic, retain) CRTextFeature *titleTextFeature;

+ (id)linesFromTextFeatures:(id)arg1;

- (void).cxx_destruct;
- (id)detectorResults;
- (id)endTime;
- (long long)filteredOutFeatureCount;
- (id)lineFeatures;
- (id)recognizerResults;
- (void)setDetectorResults:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setFilteredOutFeatureCount:(long long)arg1;
- (void)setRecognizerResults:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTextFeatures:(id)arg1;
- (void)setTitleTextFeature:(id)arg1;
- (id)startTime;
- (id)textFeatures;
- (id)titleTextFeature;

@end
