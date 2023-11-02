
@interface HAMenstrualAlgorithmsPrediction : NSObject <NSSecureCoding> {
    long long  _daysOffsetFromCalendarMethod;
    double  _endProbabilityMean;
    double  _endProbabilityStdDev;
    bool  _isOngoingMenstruation;
    unsigned int  _julianDayOfWindowStart;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lowRange;
    unsigned char  _predictionPrimarySource;
    double  _startProbabilityMean;
    double  _startProbabilityStdDev;
}

@property (nonatomic) long long daysOffsetFromCalendarMethod;
@property (nonatomic) double endProbabilityMean;
@property (nonatomic) double endProbabilityStdDev;
@property (nonatomic) bool isOngoingMenstruation;
@property (nonatomic) unsigned int julianDayOfWindowStart;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lowRange;
@property (nonatomic) unsigned char predictionPrimarySource;
@property (nonatomic) double startProbabilityMean;
@property (nonatomic) double startProbabilityStdDev;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (long long)daysOffsetFromCalendarMethod;
- (void)encodeWithCoder:(id)arg1;
- (double)endProbabilityMean;
- (double)endProbabilityStdDev;
- (id)initWithCoder:(id)arg1;
- (bool)isOngoingMenstruation;
- (unsigned int)julianDayOfWindowStart;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lowRange;
- (unsigned char)predictionPrimarySource;
- (void)setDaysOffsetFromCalendarMethod:(long long)arg1;
- (void)setEndProbabilityMean:(double)arg1;
- (void)setEndProbabilityStdDev:(double)arg1;
- (void)setIsOngoingMenstruation:(bool)arg1;
- (void)setJulianDayOfWindowStart:(unsigned int)arg1;
- (void)setLowRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setPredictionPrimarySource:(unsigned char)arg1;
- (void)setStartProbabilityMean:(double)arg1;
- (void)setStartProbabilityStdDev:(double)arg1;
- (double)startProbabilityMean;
- (double)startProbabilityStdDev;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles

- (id)hkmc_description;
- (id)hkmc_projectionConstrainingToMostLikelyDays:(bool)arg1 overridePredictionPrimarySource:(id)arg2 currentDayIndex:(long long)arg3;

@end
