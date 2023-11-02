
@interface CSAttSiriAttendingTriggerEventInfo : NSObject <NSSecureCoding> {
    CSAttSiriRequestContext * _ctx;
    NSString * _detectedToken;
    unsigned long long  _triggerAbsStartSampleId;
    unsigned long long  _triggerMachTime;
}

@property (nonatomic, copy) CSAttSiriRequestContext *ctx;
@property (nonatomic, retain) NSString *detectedToken;
@property (nonatomic) unsigned long long triggerAbsStartSampleId;
@property (nonatomic) unsigned long long triggerMachTime;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ctx;
- (id)description;
- (id)detectedToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCtx:(id)arg1;
- (void)setDetectedToken:(id)arg1;
- (void)setTriggerAbsStartSampleId:(unsigned long long)arg1;
- (void)setTriggerMachTime:(unsigned long long)arg1;
- (unsigned long long)triggerAbsStartSampleId;
- (unsigned long long)triggerMachTime;

@end
