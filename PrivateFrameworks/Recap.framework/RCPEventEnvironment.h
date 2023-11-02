
@interface RCPEventEnvironment : NSObject <NSCoding, RCPMachTimestampProvider> {
    long long  _homeButtonHardware;
    bool  _isSimulator;
    long long  _machTimeDenominator;
    long long  _machTimeNumerator;
    int  _pointerScanRate;
    NSString * _productName;
    NSString * _productType;
    NSString * _productVersion;
    NSString * _recapVersion;
    NSArray * _screens;
    double  _startTimeAsIntervalSince1970;
    unsigned long long  _startTimeAsMachTimestamp;
    double  _timeScale;
    int  _touchScanRate;
}

@property (nonatomic) long long homeButtonHardware;
@property (nonatomic) bool isSimulator;
@property (nonatomic) long long machTimeDenominator;
@property (nonatomic) long long machTimeNumerator;
@property (nonatomic) int pointerScanRate;
@property (nonatomic, retain) NSString *productName;
@property (nonatomic, retain) NSString *productType;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *recapVersion;
@property (nonatomic, retain) NSArray *screens;
@property (nonatomic) double startTimeAsIntervalSince1970;
@property (nonatomic) unsigned long long startTimeAsMachTimestamp;
@property (nonatomic) double timeScale;
@property (nonatomic) int touchScanRate;

+ (id)currentEnvironment;

- (void).cxx_destruct;
- (id)_buttonConfigurationDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAbsoluteTimeCorrelation;
- (long long)homeButtonHardware;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSimulator;
- (unsigned long long)machAbsoluteTimeForTimeInterval:(double)arg1;
- (unsigned long long)machAbsoluteTimeForTimeIntervalSince1970:(double)arg1;
- (long long)machTimeDenominator;
- (long long)machTimeNumerator;
- (int)pointerScanRate;
- (id)productName;
- (id)productType;
- (id)productVersion;
- (id)recapVersion;
- (id)screens;
- (void)setHomeButtonHardware:(long long)arg1;
- (void)setIsSimulator:(bool)arg1;
- (void)setMachTimeDenominator:(long long)arg1;
- (void)setMachTimeNumerator:(long long)arg1;
- (void)setPointerScanRate:(int)arg1;
- (void)setProductName:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setRecapVersion:(id)arg1;
- (void)setScreens:(id)arg1;
- (void)setStartDate:(id)arg1 machAbsoluteTime:(unsigned long long)arg2;
- (void)setStartTimeAsIntervalSince1970:(double)arg1;
- (void)setStartTimeAsMachTimestamp:(unsigned long long)arg1;
- (void)setTimeScale:(double)arg1;
- (void)setTouchScanRate:(int)arg1;
- (double)speedFactorToAdjustRecordingEnvironment:(id)arg1;
- (double)startTimeAsIntervalSince1970;
- (unsigned long long)startTimeAsMachTimestamp;
- (id)timeDescriptionForEvent:(id)arg1;
- (double)timeIntervalForMachAbsoluteTime:(unsigned long long)arg1;
- (double)timeIntervalSince1970ForMachAbsoluteTime:(unsigned long long)arg1;
- (double)timeScale;
- (int)touchScanRate;

@end
