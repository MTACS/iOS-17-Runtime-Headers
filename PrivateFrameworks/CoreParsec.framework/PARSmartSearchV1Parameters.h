
@interface PARSmartSearchV1Parameters : NSObject <NSSecureCoding> {
    double  _weightAll;
    double  _weightLast1day;
    double  _weightLast1hour;
    double  _weightLast1month;
    double  _weightLast1week;
    double  _weightMinThresholdToSend;
    double  _weightMostRecent;
}

@property (nonatomic, readonly) double weightAll;
@property (nonatomic, readonly) double weightLast1day;
@property (nonatomic, readonly) double weightLast1hour;
@property (nonatomic, readonly) double weightLast1month;
@property (nonatomic, readonly) double weightLast1week;
@property (nonatomic, readonly) double weightMinThresholdToSend;
@property (nonatomic, readonly) double weightMostRecent;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initFromBag:(id)arg1;
- (id)initFromLast1hour:(double)arg1 last1day:(double)arg2 last1week:(double)arg3 last1month:(double)arg4 all:(double)arg5 mostRecent:(double)arg6 minThresholdToSend:(double)arg7;
- (id)initWithCoder:(id)arg1;
- (double)weightAll;
- (double)weightLast1day;
- (double)weightLast1hour;
- (double)weightLast1month;
- (double)weightLast1week;
- (double)weightMinThresholdToSend;
- (double)weightMostRecent;

@end
