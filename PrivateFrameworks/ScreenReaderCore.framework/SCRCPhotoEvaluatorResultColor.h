
@interface SCRCPhotoEvaluatorResultColor : SCRCPhotoEvaluatorResult {
    double  _blueLevel;
    double  _greenLevel;
    double  _redLevel;
}

@property (nonatomic, readonly) double blueLevel;
@property (nonatomic, readonly) double greenLevel;
@property (nonatomic, readonly) double redLevel;

- (double)blueLevel;
- (double)greenLevel;
- (id)humanReadableResult;
- (id)initWithRedLevel:(double)arg1 blueLevel:(double)arg2 greenLevel:(double)arg3;
- (double)redLevel;

@end
