
@interface CLGatheringBleAdvertisement : NSObject <NSSecureCoding> {
    NSData * _address;
    NSData * _authTag;
    NSString * _contactId;
    long long  _count;
    long long  _eFlags;
    long long  _flags;
    NSData * _iTag;
    long long  _rssi;
    double  _unixTime;
}

@property (nonatomic, readonly, copy) NSData *address;
@property (nonatomic, readonly, copy) NSData *authTag;
@property (nonatomic, readonly, copy) NSString *contactId;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) long long eFlags;
@property (nonatomic, readonly) long long flags;
@property (nonatomic, readonly, copy) NSData *iTag;
@property (nonatomic, readonly) long long rssi;
@property (nonatomic, readonly) double unixTime;

+ (bool)supportsSecureCoding;

- (id)address;
- (id)authTag;
- (id)contactId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (void)dealloc;
- (id)description;
- (long long)eFlags;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedBytes;
- (long long)flags;
- (id)getDateString:(double)arg1;
- (unsigned long long)hash;
- (id)hexString:(id)arg1;
- (id)iTag;
- (id)initWithAddress:(id)arg1 contactId:(id)arg2 flags:(long long)arg3 eFlags:(long long)arg4 authTag:(id)arg5 iTag:(id)arg6 rssi:(long long)arg7 count:(long long)arg8 unixTime:(double)arg9;
- (id)initWithAddress:(id)arg1 withAuthTag:(id)arg2 withRssi:(long long)arg3 withCount:(long long)arg4 withTime:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithPersistenceBytes:(struct { double x1; unsigned char x2[6]; BOOL x3[42]; int x4; int x5; int x6; int x7; short x8; short x9; }*)arg1;
- (bool)isEqual:(id)arg1;
- (long long)rssi;
- (double)unixTime;

@end
