
@interface UARPUpdateFirmwareAnalyticsEventFrameworkParams : NSObject <NSSecureCoding> {
    NSNumber * _applyDuration;
    NSNumber * _applyStatus;
    NSNumber * _applyUserInitiated;
    NSNumber * _applyVendorError;
    NSNumber * _stagingDuration;
    NSNumber * _stagingIterations;
    NSNumber * _stagingStatus;
    NSNumber * _stagingUserInitiated;
    NSNumber * _stagingVendorError;
}

@property (retain) NSNumber *applyDuration;
@property (retain) NSNumber *applyStatus;
@property (retain) NSNumber *applyUserInitiated;
@property (retain) NSNumber *applyVendorError;
@property (retain) NSNumber *stagingDuration;
@property (retain) NSNumber *stagingIterations;
@property (retain) NSNumber *stagingStatus;
@property (retain) NSNumber *stagingUserInitiated;
@property (retain) NSNumber *stagingVendorError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applyDuration;
- (id)applyStatus;
- (id)applyUserInitiated;
- (id)applyVendorError;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setApplyDuration:(id)arg1;
- (void)setApplyStatus:(id)arg1;
- (void)setApplyUserInitiated:(id)arg1;
- (void)setApplyVendorError:(id)arg1;
- (void)setStagingDuration:(id)arg1;
- (void)setStagingIterations:(id)arg1;
- (void)setStagingStatus:(id)arg1;
- (void)setStagingUserInitiated:(id)arg1;
- (void)setStagingVendorError:(id)arg1;
- (id)stagingDuration;
- (id)stagingIterations;
- (id)stagingStatus;
- (id)stagingUserInitiated;
- (id)stagingVendorError;

@end
