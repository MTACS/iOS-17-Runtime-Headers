
@interface CRTextRecognizerResults : NSObject {
    NSArray * _codeMaps;
    NSDate * _endTime;
    NSDictionary * _inputOptions;
    CRLatticeResults * _latticeResults;
    NSDate * _startTime;
    NSArray * _textFeatures;
}

@property (nonatomic, retain) NSArray *codeMaps;
@property (nonatomic, retain) NSDate *endTime;
@property (nonatomic, retain) NSDictionary *inputOptions;
@property (nonatomic, retain) CRLatticeResults *latticeResults;
@property (readonly) NSArray *lineFeatures;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic, retain) NSArray *textFeatures;

- (void).cxx_destruct;
- (id)codeMaps;
- (id)endTime;
- (id)inputOptions;
- (id)latticeResults;
- (id)lineFeatures;
- (void)setCodeMaps:(id)arg1;
- (void)setEndTime:(id)arg1;
- (void)setInputOptions:(id)arg1;
- (void)setLatticeResults:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setTextFeatures:(id)arg1;
- (id)startTime;
- (id)textFeatures;

@end
