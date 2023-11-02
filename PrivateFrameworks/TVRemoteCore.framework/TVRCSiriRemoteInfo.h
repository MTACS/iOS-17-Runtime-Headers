
@interface TVRCSiriRemoteInfo : NSObject <NSSecureCoding> {
    NSData * _btAddressData;
    CBOOBKeyInfo * _cbKeyInfo;
    bool  _connected;
    NSString * _firmwareVersion;
    NSString * _identifier;
    NSData * _irkData;
    NSString * _name;
    NSString * _serialNumber;
    bool  _supportsFindMy;
    NSString * _tvModel;
    NSString * _tvName;
}

@property (nonatomic, retain) NSData *btAddressData;
@property (nonatomic, retain) CBOOBKeyInfo *cbKeyInfo;
@property (nonatomic) bool connected;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *irkData;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *serialNumber;
@property (nonatomic) bool supportsFindMy;
@property (nonatomic, retain) NSString *tvModel;
@property (nonatomic, retain) NSString *tvName;
@property (nonatomic, readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)btAddressData;
- (id)cbKeyInfo;
- (bool)connected;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)irkData;
- (bool)isEqualToRemoteInfo:(id)arg1;
- (id)name;
- (id)serialNumber;
- (void)setBtAddressData:(id)arg1;
- (void)setCbKeyInfo:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIrkData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (void)setSupportsFindMy:(bool)arg1;
- (void)setTvModel:(id)arg1;
- (void)setTvName:(id)arg1;
- (bool)supportsFindMy;
- (id)tvModel;
- (id)tvName;
- (id)uuid;

@end
