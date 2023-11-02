
@interface HKHRSampleClassification : NSObject <NSCopying, NSSecureCoding> {
    long long  _classification;
    NSDateInterval * _sampleDateInterval;
    NSTimeZone * _sampleTimeZone;
    NSUUID * _sampleUUID;
}

@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) NSDateInterval *sampleDateInterval;
@property (nonatomic, readonly) NSTimeZone *sampleTimeZone;
@property (nonatomic, readonly) NSUUID *sampleUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)classification;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSampleUUID:(id)arg1 classification:(long long)arg2 sampleDateInterval:(id)arg3 sampleTimeZone:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)sampleDateInterval;
- (id)sampleTimeZone;
- (id)sampleUUID;

@end
