
@interface SESConfig : NSObject {
    unsigned long long  _component;
    NSDictionary * _config;
    NSString * _manufacturer;
    NSString * _minOSKey;
    NSURL * _path;
    float  _productVersion;
}

@property (readonly) NSString *manufacturer;

- (void).cxx_destruct;
- (id)getConfigForComponent:(unsigned long long)arg1 manufacturer:(id)arg2 error:(id*)arg3;
- (id)initWithDeviceClass:(id)arg1 productVersion:(float)arg2;
- (id)initWithDeviceClass:(id)arg1 productVersion:(float)arg2 path:(id)arg3;
- (id)manufacturer;
- (id)readConfigForComponent:(id)arg1 manufacturer:(id)arg2 isProfile:(bool)arg3 error:(id*)arg4;

@end
