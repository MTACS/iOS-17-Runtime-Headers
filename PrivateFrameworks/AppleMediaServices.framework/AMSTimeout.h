
@interface AMSTimeout : NSObject {
    <AMSTimeoutClockSource> * _clockSource;
    double  _expirationTimestamp;
    bool  _expired;
    double  _timestampAtPreviousQuery;
}

@property (nonatomic, retain) <AMSTimeoutClockSource> *clockSource;
@property (nonatomic) double expirationTimestamp;
@property (getter=hasExpired, nonatomic, readonly) bool expired;
@property (nonatomic) double timestampAtPreviousQuery;

+ (id)timeoutWithExpiration:(double)arg1;

- (void).cxx_destruct;
- (id)clockSource;
- (double)expirationTimestamp;
- (bool)hasExpired;
- (id)initWithExpiration:(double)arg1 clockSource:(id)arg2;
- (void)setClockSource:(id)arg1;
- (void)setExpirationTimestamp:(double)arg1;
- (void)setTimestampAtPreviousQuery:(double)arg1;
- (double)timestampAtPreviousQuery;

@end
