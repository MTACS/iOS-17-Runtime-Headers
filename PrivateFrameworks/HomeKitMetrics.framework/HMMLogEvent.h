
@interface HMMLogEvent : NSObject {
    NSDate * _endDate;
    long long  _endTimeMilliseconds;
    NSError * _error;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _startDate;
    long long  _startTimeMilliseconds;
    bool  _submitted;
}

@property (readonly) double durationInMilliseconds;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) long long endTimeMilliseconds;
@property (retain) NSError *error;
@property (retain) NSDate *startDate;
@property (readonly) long long startTimeMilliseconds;
@property (getter=isSubmitted, nonatomic) bool submitted;
@property (readonly) long long tickBasedDurationInMilliseconds;

+ (id)alloc;

- (void).cxx_destruct;
- (double)durationInMilliseconds;
- (id)endDate;
- (long long)endTimeMilliseconds;
- (id)error;
- (id)init;
- (bool)isSubmitted;
- (void)markEndTime;
- (void)setEndDate:(id)arg1;
- (void)setEndTimeMilliseconds:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSubmitted:(bool)arg1;
- (bool)shouldSubmit;
- (id)startDate;
- (long long)startTimeMilliseconds;
- (void)submitAtDate:(id)arg1;
- (long long)tickBasedDurationInMilliseconds;

@end
