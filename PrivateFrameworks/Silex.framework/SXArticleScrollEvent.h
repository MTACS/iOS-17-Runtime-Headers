
@interface SXArticleScrollEvent : SXAnalyticsEvent {
    double  _endPosition;
    double  _startPosition;
    double  _targetPosition;
    double  _velocity;
}

@property (nonatomic) double endPosition;
@property (nonatomic) double startPosition;
@property (nonatomic) double targetPosition;
@property (nonatomic) double velocity;

- (double)endPosition;
- (void)setEndPosition:(double)arg1;
- (void)setStartPosition:(double)arg1;
- (void)setTargetPosition:(double)arg1;
- (void)setVelocity:(double)arg1;
- (double)startPosition;
- (double)targetPosition;
- (double)velocity;

@end
