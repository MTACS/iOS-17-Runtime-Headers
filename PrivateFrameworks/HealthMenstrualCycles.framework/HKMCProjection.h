
@interface HKMCProjection : NSObject <HKRedactedDescription, NSCopying, NSSecureCoding> {
    struct { 
        long long start; 
        long long duration; 
    }  _allDays;
    long long  _daysOffsetFromCalendarMethod;
    double  _endMean;
    double  _endStandardDeviation;
    bool  _partiallyLogged;
    long long  _predictionPrimarySource;
    double  _startMean;
    double  _startStandardDeviation;
}

@property (nonatomic, readonly) struct { long long x1; long long x2; } allDays;
@property (nonatomic, readonly) long long daysOffsetFromCalendarMethod;
@property (readonly) double endMean;
@property (readonly) double endStandardDeviation;
@property (readonly, copy) NSString *hk_redactedDescription;
@property (nonatomic, readonly) struct { long long x1; long long x2; } mostLikelyDays;
@property (getter=isPartiallyLogged, nonatomic, readonly) bool partiallyLogged;
@property (nonatomic, readonly) long long predictionPrimarySource;
@property (readonly) double startMean;
@property (readonly) double startStandardDeviation;

+ (bool)supportsSecureCoding;

- (long long)_dayIndexFromMean:(double)arg1 standardDeviation:(double)arg2 coefficient:(double)arg3;
- (struct { long long x1; long long x2; })allDays;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dayIndexFromEndWithCoefficient:(double)arg1;
- (long long)dayIndexFromStartWithCoefficient:(double)arg1;
- (long long)daysOffsetFromCalendarMethod;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)endMean;
- (double)endStandardDeviation;
- (unsigned long long)hash;
- (id)hk_redactedDescription;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartMean:(double)arg1 startStandardDeviation:(double)arg2 endMean:(double)arg3 endStandardDeviation:(double)arg4 allDays:(struct { long long x1; long long x2; })arg5 partiallyLogged:(bool)arg6 daysOffsetFromCalendarMethod:(long long)arg7 predictionPrimarySource:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isPartiallyLogged;
- (struct { long long x1; long long x2; })mostLikelyDays;
- (long long)predictionPrimarySource;
- (struct { long long x1; long long x2; })startDayRange;
- (double)startMean;
- (double)startStandardDeviation;

@end
