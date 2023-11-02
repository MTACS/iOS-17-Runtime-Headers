
@interface DDUIInfoPlistService : NSObject {
    unsigned int  _deviceTypes;
    NSString * _identifier;
    NSString * _usageDescription;
}

@property (nonatomic) unsigned int deviceTypes;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *usageDescription;

- (void).cxx_destruct;
- (id)description;
- (unsigned int)deviceTypes;
- (id)identifier;
- (void)setDeviceTypes:(unsigned int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUsageDescription:(id)arg1;
- (id)usageDescription;

@end
