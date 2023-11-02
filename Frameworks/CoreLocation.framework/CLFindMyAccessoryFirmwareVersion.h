
@interface CLFindMyAccessoryFirmwareVersion : NSObject {
    struct { unsigned int x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; unsigned char x8; unsigned char x9; } * _version;
}

@property (readonly) unsigned long long calibrationDataVersion;
@property (readonly) unsigned long long hardwareVersion;
@property (readonly) unsigned long long roseAPVersion;
@property (readonly) unsigned long long roseDSPVersion;
@property (readonly) NSString *rtKitVersion;
@property (readonly) NSString *specificationVersion;
@property (readonly) NSString *vanBurenVersion;

- (unsigned long long)calibrationDataVersion;
- (void)dealloc;
- (id)description;
- (unsigned long long)hardwareVersion;
- (id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)initWithData:(id)arg1;
- (unsigned long long)roseAPVersion;
- (unsigned long long)roseDSPVersion;
- (id)rtKitVersion;
- (id)specificationVersion;
- (id)vanBurenVersion;

@end
