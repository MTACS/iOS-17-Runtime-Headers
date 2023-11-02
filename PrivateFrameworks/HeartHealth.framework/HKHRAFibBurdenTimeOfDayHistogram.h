
@interface HKHRAFibBurdenTimeOfDayHistogram : NSObject <NSSecureCoding> {
    HKHRAFibBurdenAnalysisResult * _eightAMToNoonBurden;
    HKHRAFibBurdenAnalysisResult * _eightPMToMidnightBurden;
    HKHRAFibBurdenAnalysisResult * _fourAMtoEightAMBurden;
    HKHRAFibBurdenAnalysisResult * _fourPMToEightPMBurden;
    HKHRAFibBurdenAnalysisResult * _midnightToFourAMBurden;
    HKHRAFibBurdenAnalysisResult * _noonToFourPMBurden;
}

@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *eightAMToNoonBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *eightPMToMidnightBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *fourAMtoEightAMBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *fourPMToEightPMBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *midnightToFourAMBurden;
@property (nonatomic, readonly) HKHRAFibBurdenAnalysisResult *noonToFourPMBurden;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)eightAMToNoonBurden;
- (id)eightPMToMidnightBurden;
- (void)encodeWithCoder:(id)arg1;
- (id)fourAMtoEightAMBurden;
- (id)fourPMToEightPMBurden;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMidnightToFourAMBurden:(id)arg1 fourAMtoEightAMBurden:(id)arg2 eightAMToNoonBurden:(id)arg3 noonToFourPMBurden:(id)arg4 fourPMToEightPMBurden:(id)arg5 eightPMToMidnightBurden:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)midnightToFourAMBurden;
- (id)noonToFourPMBurden;

@end
