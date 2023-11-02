
@interface HAMenstrualAlgorithmsDeviationInput : NSObject <NSSecureCoding> {
    NSNumber * _julianDayMinAnalysisWindowEndInfrequent;
    NSNumber * _julianDayMinAnalysisWindowEndIrregular;
    NSNumber * _julianDayMinAnalysisWindowEndProlonged;
    NSNumber * _julianDayMinAnalysisWindowEndSpotting;
    NSNumber * _julianDayMinAnalysisWindowStartInfrequent;
    NSNumber * _julianDayMinAnalysisWindowStartIrregular;
    NSNumber * _julianDayMinAnalysisWindowStartProlonged;
    NSNumber * _julianDayMinAnalysisWindowStartSpotting;
}

@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowEndInfrequent;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowEndIrregular;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowEndProlonged;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowEndSpotting;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowStartInfrequent;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowStartIrregular;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowStartProlonged;
@property (nonatomic, retain) NSNumber *julianDayMinAnalysisWindowStartSpotting;

// Image: /System/Library/PrivateFrameworks/HealthAlgorithms.framework/HealthAlgorithms

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)julianDayMinAnalysisWindowEndInfrequent;
- (id)julianDayMinAnalysisWindowEndIrregular;
- (id)julianDayMinAnalysisWindowEndProlonged;
- (id)julianDayMinAnalysisWindowEndSpotting;
- (id)julianDayMinAnalysisWindowStartInfrequent;
- (id)julianDayMinAnalysisWindowStartIrregular;
- (id)julianDayMinAnalysisWindowStartProlonged;
- (id)julianDayMinAnalysisWindowStartSpotting;
- (void)setJulianDayMinAnalysisWindowEndInfrequent:(id)arg1;
- (void)setJulianDayMinAnalysisWindowEndIrregular:(id)arg1;
- (void)setJulianDayMinAnalysisWindowEndProlonged:(id)arg1;
- (void)setJulianDayMinAnalysisWindowEndSpotting:(id)arg1;
- (void)setJulianDayMinAnalysisWindowStartInfrequent:(id)arg1;
- (void)setJulianDayMinAnalysisWindowStartIrregular:(id)arg1;
- (void)setJulianDayMinAnalysisWindowStartProlonged:(id)arg1;
- (void)setJulianDayMinAnalysisWindowStartSpotting:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthMenstrualCyclesDaemon.framework/HealthMenstrualCyclesDaemon

+ (id)_dayIndexAfterLastDeviationOfType:(long long)arg1 profile:(id)arg2 calendar:(id)arg3;
+ (id)hdmc_deviationInputWithProfile:(id)arg1 enabledSetExplicitly:(bool)arg2 calendar:(id)arg3;

@end
