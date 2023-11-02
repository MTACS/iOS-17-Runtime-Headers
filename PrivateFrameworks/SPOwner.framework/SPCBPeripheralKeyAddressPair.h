
@interface SPCBPeripheralKeyAddressPair : NSObject <NSCopying, NSSecureCoding> {
    NSData * _leMACAddress;
    NSData * _longTermKey;
}

@property (nonatomic, readonly, copy) NSData *leMACAddress;
@property (nonatomic, readonly, copy) NSData *longTermKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLEMACAddress:(id)arg1 longTermKey:(id)arg2;
- (id)leMACAddress;
- (id)longTermKey;

@end
