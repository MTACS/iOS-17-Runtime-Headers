
@interface CWFRangingMeasurement : NSObject <NSCopying, NSSecureCoding> {
    long long  _RSSI;
    long long  _SNR;
    unsigned long long  _channel;
    unsigned long long  _coreID;
    long long  _roundTripTime;
}

@property (nonatomic) long long RSSI;
@property (nonatomic) long long SNR;
@property (nonatomic) unsigned long long channel;
@property (nonatomic) unsigned long long coreID;
@property (nonatomic) long long roundTripTime;

+ (bool)supportsSecureCoding;

- (long long)RSSI;
- (long long)SNR;
- (unsigned long long)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)coreID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRangingMeasurement:(id)arg1;
- (long long)roundTripTime;
- (void)setChannel:(unsigned long long)arg1;
- (void)setCoreID:(unsigned long long)arg1;
- (void)setRSSI:(long long)arg1;
- (void)setRoundTripTime:(long long)arg1;
- (void)setSNR:(long long)arg1;

@end
