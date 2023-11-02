
@interface HDDatabaseTransactionStatistics : NSObject {
    double  _endTime;
    double  _startTime;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double endTime;
@property (nonatomic, readonly) double startTime;

- (id)_initWithStartTime:(double)arg1 endTime:(double)arg2;
- (double)duration;
- (double)endTime;
- (double)startTime;

@end
