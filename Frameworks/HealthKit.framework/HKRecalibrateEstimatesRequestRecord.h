
@interface HKRecalibrateEstimatesRequestRecord : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _effectiveDate;
    HKSampleType * _sampleType;
    NSUUID * _sessionIdentifier;
    HKSource * _source;
}

@property (nonatomic, readonly, copy) NSDate *effectiveDate;
@property (nonatomic, readonly, copy) HKSampleType *sampleType;
@property (nonatomic, readonly, copy) NSUUID *sessionIdentifier;
@property (nonatomic, readonly, copy) HKSource *source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionIdentifier:(id)arg1 source:(id)arg2 sampleType:(id)arg3 effectiveDate:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)sampleType;
- (id)sessionIdentifier;
- (id)source;

@end
