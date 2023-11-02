
@interface _UITouchPredictor : NSObject <NSCopying> {
    _UIValuePredictor * _angleValuePredictor;
    double  _averageTouchInterval;
    _UIValuePredictor * _azimuthValuePredictor;
    _UIValuePredictor * _forceValuePredictor;
    double  _lastTouchTimestamp;
    double  _numPredictionsBuffer;
    long long  _numPredictionsBufferCount;
    NSMutableArray * _predictions;
    bool  _predictionsValid;
    _UIValuePredictor * _xValuePredictor;
    _UIValuePredictor * _yValuePredictor;
}

- (void).cxx_destruct;
- (id)_angleValuePredictor;
- (id)_azimuthValuePredictor;
- (unsigned long long)_dampenedNumPredictionsAtIndex:(unsigned long long)arg1;
- (id)_forceValuePredictor;
- (unsigned long long)_numPredictionsAtIndex:(unsigned long long)arg1 hardLimit:(unsigned long long*)arg2;
- (id)_predictedTouchesAtIndex:(unsigned long long)arg1 forTouch:(id)arg2;
- (void)_updatePredictionsForTouch:(id)arg1 weight:(double)arg2;
- (id)_xValuePredictor;
- (id)_yValuePredictor;
- (void)addTouch:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(bool)arg3 includeDetailedConfidence:(bool)arg4;
- (id)init;
- (id)initWithTouchPredictor:(id)arg1;
- (id)predictedTouchesForTouch:(id)arg1;

@end
