
@interface CTSignalStrengthMeasurements : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _ecio;
    NSNumber * _ecn0;
    NSNumber * _rscp;
    NSNumber * _rsrp;
    NSNumber * _rsrq;
    NSNumber * _rssi;
    NSNumber * _rxagc;
    NSNumber * _snr;
}

@property (nonatomic, retain) NSNumber *ecio;
@property (nonatomic, retain) NSNumber *ecn0;
@property (nonatomic, retain) NSNumber *rscp;
@property (nonatomic, retain) NSNumber *rsrp;
@property (nonatomic, retain) NSNumber *rsrq;
@property (nonatomic, retain) NSNumber *rssi;
@property (nonatomic, retain) NSNumber *rxagc;
@property (nonatomic, retain) NSNumber *snr;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)ecio;
- (id)ecn0;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)rscp;
- (id)rsrp;
- (id)rsrq;
- (id)rssi;
- (id)rxagc;
- (void)setEcio:(id)arg1;
- (void)setEcn0:(id)arg1;
- (void)setRscp:(id)arg1;
- (void)setRsrp:(id)arg1;
- (void)setRsrq:(id)arg1;
- (void)setRssi:(id)arg1;
- (void)setRxagc:(id)arg1;
- (void)setSnr:(id)arg1;
- (id)snr;

@end
