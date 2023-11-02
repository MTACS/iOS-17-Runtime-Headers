
@interface MIMachOImageSlice : NSObject {
    unsigned int  _minOSVersion;
    unsigned int  _platform;
    unsigned int  _sdkVersion;
}

@property (nonatomic) unsigned int minOSVersion;
@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned int sdkVersion;

- (id)description;
- (id)initWithPlatform:(unsigned int)arg1 sdkVersion:(unsigned int)arg2 minOSVersion:(unsigned int)arg3;
- (unsigned int)minOSVersion;
- (unsigned int)platform;
- (unsigned int)sdkVersion;
- (void)setMinOSVersion:(unsigned int)arg1;
- (void)setPlatform:(unsigned int)arg1;
- (void)setSdkVersion:(unsigned int)arg1;

@end
