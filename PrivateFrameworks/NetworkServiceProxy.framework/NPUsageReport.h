
@interface NPUsageReport : NSObject <NSSecureCoding> {
    unsigned char  _addressFamily;
    NSUUID * _dayPassUUID;
    unsigned int  _edgeIndex;
    long long  _fallbackReason;
    NSString * _geohash;
    unsigned int  _keybagGeneration;
    unsigned long long  _rtt;
    NSString * _signingIdentifier;
    unsigned int  _waldoTimestamp;
}

@property (nonatomic) unsigned char addressFamily;
@property (nonatomic, retain) NSUUID *dayPassUUID;
@property (nonatomic) unsigned int edgeIndex;
@property (nonatomic, readonly) long long fallbackReason;
@property (nonatomic, retain) NSString *geohash;
@property (nonatomic) unsigned int keybagGeneration;
@property (nonatomic) unsigned long long rtt;
@property (nonatomic, readonly) NSString *signingIdentifier;
@property (nonatomic) unsigned int waldoTimestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)addressFamily;
- (id)dayPassUUID;
- (unsigned int)edgeIndex;
- (void)encodeWithCoder:(id)arg1;
- (long long)fallbackReason;
- (id)geohash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSigningIdentifier:(id)arg1 fallbackReason:(long long)arg2;
- (unsigned int)keybagGeneration;
- (unsigned long long)rtt;
- (void)setAddressFamily:(unsigned char)arg1;
- (void)setDayPassUUID:(id)arg1;
- (void)setEdgeIndex:(unsigned int)arg1;
- (void)setGeohash:(id)arg1;
- (void)setKeybagGeneration:(unsigned int)arg1;
- (void)setRtt:(unsigned long long)arg1;
- (void)setWaldoTimestamp:(unsigned int)arg1;
- (id)signingIdentifier;
- (unsigned int)waldoTimestamp;

@end
