
@interface TAScanRequestSettings : NSObject <NSSecureCoding> {
    double  _interVisitScanDelay;
    unsigned long long  _maxInterVisitScanRequests;
    double  _minInterVisitDisplayOnDuration;
    double  _minVisitEntryDisplayOnDuration;
}

@property (nonatomic, readonly) double interVisitScanDelay;
@property (nonatomic, readonly) unsigned long long maxInterVisitScanRequests;
@property (nonatomic, readonly) double minInterVisitDisplayOnDuration;
@property (nonatomic, readonly) double minVisitEntryDisplayOnDuration;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDefaults;
- (id)initWithMinVisitEntryDisplayOnDuration:(double)arg1 minInterVisitDisplayOnDuration:(double)arg2 interVisitScanDelay:(double)arg3 maxInterVisitScanRequests:(unsigned long long)arg4;
- (id)initWithMinVisitEntryDisplayOnDurationOrDefault:(id)arg1 minInterVisitDisplayOnDurationOrDefault:(id)arg2 interVisitScanDelayOrDefault:(id)arg3 maxInterVisitScanRequestsOrDefault:(id)arg4;
- (double)interVisitScanDelay;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maxInterVisitScanRequests;
- (double)minInterVisitDisplayOnDuration;
- (double)minVisitEntryDisplayOnDuration;

@end
