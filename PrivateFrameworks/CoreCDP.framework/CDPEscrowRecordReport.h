
@interface CDPEscrowRecordReport : NSObject <CDPInitUnavailable, NSCopying, NSSecureCoding> {
    CDPEscrowRecordViability * _deviceViability;
}

@property (nonatomic, retain) CDPEscrowRecordViability *deviceViability;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceViability;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaultValues;
- (id)initWithDeviceStatus:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDeviceViability:(id)arg1;
- (id)updatedReportWithRecord:(id)arg1;

@end
