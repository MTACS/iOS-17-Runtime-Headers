
@interface MTTimeInBedSession : NSObject <MTSleepSession> {
    NSDate * _endDate;
    unsigned long long  _endReason;
    NSArray * _intervals;
    NSDictionary * _metadata;
    bool  _needsAdditionalProcessing;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) unsigned long long endReason;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *intervals;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic) bool needsAdditionalProcessing;
@property (nonatomic, readonly) long long sampleType;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;
+ (id)timeInBedSessionWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)endReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 intervals:(id)arg3 endReason:(unsigned long long)arg4 metadata:(id)arg5;
- (id)intervals;
- (id)metadata;
- (bool)needsAdditionalProcessing;
- (long long)sampleType;
- (void)setEndDate:(id)arg1;
- (void)setEndReason:(unsigned long long)arg1;
- (void)setIntervals:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setNeedsAdditionalProcessing:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
