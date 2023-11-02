
@interface MAProgressNotification : NSObject {
    double  _expectedTimeRemaining;
    bool  _isStalled;
    NSString * _taskDescription;
    long long  _totalExpected;
    long long  _totalWritten;
}

@property (nonatomic) double expectedTimeRemaining;
@property (nonatomic) bool isStalled;
@property (nonatomic, retain) NSString *taskDescription;
@property (nonatomic) long long totalExpected;
@property (nonatomic) long long totalWritten;

- (void).cxx_destruct;
- (double)expectedTimeRemaining;
- (bool)isStalled;
- (void)setExpectedTimeRemaining:(double)arg1;
- (void)setIsStalled:(bool)arg1;
- (void)setTaskDescription:(id)arg1;
- (void)setTotalExpected:(long long)arg1;
- (void)setTotalWritten:(long long)arg1;
- (id)taskDescription;
- (long long)totalExpected;
- (long long)totalWritten;

@end
