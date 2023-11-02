
@interface SRWebUsage : NSObject <NSSecureCoding, SRSampleExporting> {
    double  _totalUsageTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property double totalUsageTime;

+ (bool)supportsSecureCoding;
+ (id)webUsageWithTotalUsageTime:(double)arg1;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setTotalUsageTime:(double)arg1;
- (id)sr_dictionaryRepresentation;
- (double)totalUsageTime;

@end
