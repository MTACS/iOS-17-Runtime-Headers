
@interface PAWorkInProgressAccessInterval : NSObject {
    PAAccess * _access;
    double  _endTime;
    double  _startTime;
}

@property (nonatomic, retain) PAAccess *access;
@property (nonatomic) double endTime;
@property (nonatomic) double startTime;

- (void).cxx_destruct;
- (id)access;
- (id)asSealedRecord;
- (double)endTime;
- (id)init;
- (void)setAccess:(id)arg1;
- (void)setEndTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end
