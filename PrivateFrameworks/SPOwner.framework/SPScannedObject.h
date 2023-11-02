
@interface SPScannedObject : NSObject <NSCopying, NSSecureCoding> {
    SPAccessoryInformation * _accessoryInformation;
    NSData * _address;
    NSData * _advertisement;
    unsigned char  _ek;
    NSNumber * _hint;
    SPIndexInformation * _indexInformation;
    long long  _rssi;
    NSDate * _scanDate;
    unsigned char  _status;
}

@property (nonatomic, readonly, copy) SPAccessoryInformation *accessoryInformation;
@property (nonatomic, copy) NSData *address;
@property (nonatomic, copy) NSData *advertisement;
@property (nonatomic) unsigned char ek;
@property (nonatomic, readonly, copy) NSNumber *hint;
@property (nonatomic, readonly, copy) SPIndexInformation *indexInformation;
@property (nonatomic, readonly, copy) NSData *optional;
@property (nonatomic) long long rssi;
@property (nonatomic, copy) NSDate *scanDate;
@property (nonatomic) unsigned char status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryInformation;
- (id)address;
- (id)advertisement;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned char)ek;
- (void)encodeWithCoder:(id)arg1;
- (id)hint;
- (id)indexInformation;
- (id)initWithCoder:(id)arg1;
- (id)initWithScanDate:(id)arg1 address:(id)arg2 advertisement:(id)arg3 status:(unsigned char)arg4 ek:(unsigned char)arg5 hint:(id)arg6 rssi:(long long)arg7 indexInformation:(id)arg8 acccessoryInformation:(id)arg9;
- (id)optional;
- (long long)rssi;
- (id)scanDate;
- (void)setAddress:(id)arg1;
- (void)setAdvertisement:(id)arg1;
- (void)setEk:(unsigned char)arg1;
- (void)setRssi:(long long)arg1;
- (void)setScanDate:(id)arg1;
- (void)setStatus:(unsigned char)arg1;
- (unsigned char)status;

@end
