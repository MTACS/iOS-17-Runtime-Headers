
@interface PRHelloResponse : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _addlInfoSize;
    NSNumber * _apFirmwareVersion;
    NSNumber * _boardID;
    NSNumber * _calDataVersion;
    NSNumber * _dspFirmwareVersion;
    NSString * _extraBytes;
    unsigned long long  _hardwareVersion;
    unsigned char  _hsiVersionMajor;
    unsigned char  _hsiVersionMinor;
    NSNumber * _modemInitVersion;
    NSNumber * _moduleID;
    NSString * _roseFirmwareVersion;
    NSString * _target;
}

@property (copy) NSNumber *addlInfoSize;
@property (copy) NSNumber *apFirmwareVersion;
@property (copy) NSNumber *boardID;
@property (copy) NSNumber *calDataVersion;
@property (copy) NSNumber *dspFirmwareVersion;
@property (copy) NSString *extraBytes;
@property (nonatomic, readonly) unsigned long long hardwareVersion;
@property (nonatomic, readonly) unsigned char hsiVersionMajor;
@property (nonatomic, readonly) unsigned char hsiVersionMinor;
@property (copy) NSNumber *modemInitVersion;
@property (copy) NSNumber *moduleID;
@property (nonatomic, readonly) NSString *roseFirmwareVersion;
@property (copy) NSString *target;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)addlInfoSize;
- (id)apFirmwareVersion;
- (id)boardID;
- (id)calDataVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dspFirmwareVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)extraBytes;
- (unsigned long long)hardwareVersion;
- (unsigned char)hsiVersionMajor;
- (unsigned char)hsiVersionMinor;
- (id)initWithCoder:(id)arg1;
- (id)initWithHelloResponse:(const void*)arg1;
- (id)initWithRoseFirmwareVersion:(id)arg1 hsiVersionMajor:(unsigned char)arg2 hsiVersionMinor:(unsigned char)arg3 hardwareVersion:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (id)modemInitVersion;
- (id)moduleID;
- (id)roseFirmwareVersion;
- (void)setAddlInfoSize:(id)arg1;
- (void)setApFirmwareVersion:(id)arg1;
- (void)setBoardID:(id)arg1;
- (void)setCalDataVersion:(id)arg1;
- (void)setDspFirmwareVersion:(id)arg1;
- (void)setExtraBytes:(id)arg1;
- (void)setModemInitVersion:(id)arg1;
- (void)setModuleID:(id)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
