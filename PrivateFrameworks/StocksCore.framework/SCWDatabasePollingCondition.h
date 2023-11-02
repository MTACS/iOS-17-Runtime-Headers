
@interface SCWDatabasePollingCondition : NSObject {
    double  _minIntervalSinceLastSync;
}

@property (nonatomic, readonly) double minIntervalSinceLastSync;

- (id)initWithMinIntervalSinceLastSync:(double)arg1;
- (double)minIntervalSinceLastSync;

@end
