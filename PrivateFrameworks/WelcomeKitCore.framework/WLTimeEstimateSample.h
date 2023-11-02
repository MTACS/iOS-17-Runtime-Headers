
@interface WLTimeEstimateSample : NSObject {
    <NSObject> * _associatedObject;
    unsigned long long  _estimate;
    NSDate * _startDate;
    unsigned long long  _threshold;
}

@property (nonatomic, retain) <NSObject> *associatedObject;
@property (nonatomic) unsigned long long estimate;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) unsigned long long threshold;

- (void).cxx_destruct;
- (id)associatedObject;
- (unsigned long long)estimate;
- (void)setAssociatedObject:(id)arg1;
- (void)setEstimate:(unsigned long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)setThreshold:(unsigned long long)arg1;
- (id)startDate;
- (unsigned long long)threshold;

@end
