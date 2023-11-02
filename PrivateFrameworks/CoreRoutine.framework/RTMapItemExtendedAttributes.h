
@interface RTMapItemExtendedAttributes : NSObject <NSCopying, NSSecureCoding> {
    NSString * _addressIdentifier;
    NSUUID * _identifier;
    bool  _isMe;
    double  _wifiConfidence;
    long long  _wifiFingerprintLabelType;
}

@property (nonatomic, copy) NSString *addressIdentifier;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic) bool isMe;
@property (nonatomic) double wifiConfidence;
@property (nonatomic) long long wifiFingerprintLabelType;

+ (id)fingerprintLabelTypeToString:(long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addressIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAddressIdentifier:(id)arg1 isMe:(bool)arg2 wifiConfidence:(double)arg3 wifiFingerprintLabelType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtendedAttributesMO:(id)arg1;
- (id)initWithIdentifier:(id)arg1 addressIdentifier:(id)arg2 isMe:(bool)arg3 wifiConfidence:(double)arg4 wifiFingerprintLabelType:(long long)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMapItemExtendedAttributes:(id)arg1;
- (bool)isMe;
- (void)setAddressIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsMe:(bool)arg1;
- (void)setWifiConfidence:(double)arg1;
- (void)setWifiFingerprintLabelType:(long long)arg1;
- (double)wifiConfidence;
- (long long)wifiFingerprintLabelType;

@end
