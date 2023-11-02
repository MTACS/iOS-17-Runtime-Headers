
@interface HKRegulatoryDomainEstimate : NSObject <HKCurrentCountryCode, NSCopying> {
    NSString * _ISOCode;
    long long  _provenance;
    NSDate * _timestamp;
}

@property (nonatomic, readonly, copy) NSString *ISOCode;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)ISOCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithISOCode:(id)arg1 timestamp:(id)arg2 provenance:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)provenance;
- (id)timestamp;

@end
