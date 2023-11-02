
@interface ACCiAP2ShimAccessory : NSObject {
    NSString * _accessoryUID;
    unsigned int  _connectionID;
    id  _context;
    bool  _dontPublish;
    unsigned int  _featureTypeMask;
    NSString * _firmwareVersion;
    NSString * _hardwareVersion;
    NSString * _keyAccessoryUID;
    NSString * _keyConnectionID;
    NSString * _keyTag;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _serialNumber;
}

@property (readonly) NSString *accessoryUID;
@property unsigned int connectionID;
@property (retain) id context;
@property bool dontPublish;
@property (readonly) unsigned int featureTypeMask;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *hardwareVersion;
@property (readonly) NSString *keyAccessoryUID;
@property (readonly) NSString *keyConnectionID;
@property (readonly) NSString *keyTag;
@property (retain) NSString *manufacturer;
@property (retain) NSString *model;
@property (retain) NSString *name;
@property (retain) NSString *serialNumber;

- (void).cxx_destruct;
- (id)accessoryInfoDict;
- (id)accessoryUID;
- (void)addFeature:(int)arg1;
- (unsigned int)connectionID;
- (id)connectionIDObj;
- (id)context;
- (id)description;
- (bool)dontPublish;
- (unsigned int)featureTypeMask;
- (id)firmwareVersion;
- (id)hardwareVersion;
- (id)initWithUID:(id)arg1 keyTag:(id)arg2 features:(unsigned int)arg3;
- (id)keyAccessoryUID;
- (id)keyConnectionID;
- (id)keyTag;
- (id)manufacturer;
- (id)model;
- (id)name;
- (void)removeFeature:(int)arg1;
- (id)serialNumber;
- (void)setConnectionID:(unsigned int)arg1;
- (void)setContext:(id)arg1;
- (void)setDontPublish:(bool)arg1;
- (void)setFirmwareVersion:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end