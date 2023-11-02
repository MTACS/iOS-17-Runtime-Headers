
@interface SPAdvertisement : NSObject <NSSecureCoding> {
    NSData * _address;
    NSData * _advertisementData;
    NSData * _reserved;
    long long  _rssi;
    NSDate * _scanDate;
    unsigned char  _status;
}

@property (nonatomic, copy) NSData *address;
@property (nonatomic, copy) NSData *advertisementData;
@property (nonatomic, copy) NSData *reserved;
@property (nonatomic) long long rssi;
@property (nonatomic, copy) NSDate *scanDate;
@property (nonatomic) unsigned char status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)address;
- (id)advertisementData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 rssi:(long long)arg3 scanDate:(id)arg4;
- (id)initWithAddress:(id)arg1 advertisementData:(id)arg2 status:(unsigned char)arg3 reserved:(id)arg4 rssi:(long long)arg5 scanDate:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)reserved;
- (long long)rssi;
- (id)scanDate;
- (void)setAddress:(id)arg1;
- (void)setAdvertisementData:(id)arg1;
- (void)setReserved:(id)arg1;
- (void)setRssi:(long long)arg1;
- (void)setScanDate:(id)arg1;
- (void)setStatus:(unsigned char)arg1;
- (unsigned char)status;

@end
