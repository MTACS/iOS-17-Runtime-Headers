
@interface CTDataUsage : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _cellularHome;
    unsigned long long  _cellularRoaming;
    unsigned long long  _wifi;
}

@property (nonatomic) unsigned long long cellularHome;
@property (nonatomic) unsigned long long cellularRoaming;
@property (nonatomic) unsigned long long wifi;

+ (bool)supportsSecureCoding;

- (void)addUsage:(id)arg1;
- (unsigned long long)cellularHome;
- (unsigned long long)cellularRoaming;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(unsigned long long)arg1 roaming:(unsigned long long)arg2 wifi:(unsigned long long)arg3;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (void)setCellularHome:(unsigned long long)arg1;
- (void)setCellularRoaming:(unsigned long long)arg1;
- (void)setWifi:(unsigned long long)arg1;
- (unsigned long long)wifi;

@end
