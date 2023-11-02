
@interface SRWristDetection : NSObject <NSSecureCoding, SRSampleExporting, SRSampling> {
    double  _cfOffWristDate;
    double  _cfOnWristDate;
    long long  _crownOrientation;
    bool  _onWrist;
    long long  _wristLocation;
}

@property double cfOffWristDate;
@property double cfOnWristDate;
@property long long crownOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDate *offWristDate;
@property bool onWrist;
@property (readonly) NSDate *onWristDate;
@property (readonly) Class superclass;
@property long long wristLocation;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_offWristDate;
- (id)_onWristDate;
- (id)binarySampleRepresentation;
- (double)cfOffWristDate;
- (double)cfOnWristDate;
- (long long)crownOrientation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;
- (id)initWithCFOnWristDate:(double)arg1 CFOffWristDate:(double)arg2 onWrist:(bool)arg3 wristLocation:(long long)arg4 crownOrientation:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithOnWristDate:(id)arg1 offWristDate:(id)arg2 onWrist:(bool)arg3 wristLocation:(long long)arg4 crownOrientation:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)offWristDate;
- (bool)onWrist;
- (id)onWristDate;
- (void)setCfOffWristDate:(double)arg1;
- (void)setCfOnWristDate:(double)arg1;
- (void)setCrownOrientation:(long long)arg1;
- (void)setOnWrist:(bool)arg1;
- (void)setWristLocation:(long long)arg1;
- (id)sr_dictionaryRepresentation;
- (long long)wristLocation;

@end
