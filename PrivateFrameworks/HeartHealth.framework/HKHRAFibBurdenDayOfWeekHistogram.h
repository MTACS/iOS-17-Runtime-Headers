
@interface HKHRAFibBurdenDayOfWeekHistogram : NSObject <NSSecureCoding> {
    HKHRAFibBurdenAnalysisResult * _fridayBurden;
    HKHRAFibBurdenAnalysisResult * _mondayBurden;
    HKHRAFibBurdenAnalysisResult * _saturdayBurden;
    HKHRAFibBurdenAnalysisResult * _sundayBurden;
    HKHRAFibBurdenAnalysisResult * _thursdayBurden;
    HKHRAFibBurdenAnalysisResult * _tuesdayBurden;
    HKHRAFibBurdenAnalysisResult * _wednesdayBurden;
}

@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *fridayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *mondayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *saturdayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *sundayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *thursdayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *tuesdayBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *wednesdayBurden;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)fridayBurden;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSundayBurden:(id)arg1 mondayBurden:(id)arg2 tuesdayBurden:(id)arg3 wednesdayBurden:(id)arg4 thursdayBurden:(id)arg5 fridayBurden:(id)arg6 saturdayBurden:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)mondayBurden;
- (id)saturdayBurden;
- (id)sundayBurden;
- (id)thursdayBurden;
- (id)tuesdayBurden;
- (id)wednesdayBurden;

@end
