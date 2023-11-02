
@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {
    long long  _chipID;
    unsigned long long  _encodedSystemVersion;
    bool  _isCellularEnabled;
    long long  _pairingVersion;
    bool  _postFailsafeObliteration;
    NSString * _productType;
}

@property (nonatomic) long long chipID;
@property (nonatomic) unsigned long long encodedSystemVersion;
@property (nonatomic) bool isCellularEnabled;
@property (nonatomic) long long pairingVersion;
@property (nonatomic) bool postFailsafeObliteration;
@property (nonatomic, retain) NSString *productType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)chipID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)encodedSystemVersion;
- (id)initWithCoder:(id)arg1;
- (bool)isCellularEnabled;
- (long long)pairingVersion;
- (bool)postFailsafeObliteration;
- (id)productType;
- (void)setChipID:(long long)arg1;
- (void)setEncodedSystemVersion:(unsigned long long)arg1;
- (void)setIsCellularEnabled:(bool)arg1;
- (void)setPairingVersion:(long long)arg1;
- (void)setPostFailsafeObliteration:(bool)arg1;
- (void)setProductType:(id)arg1;

@end
