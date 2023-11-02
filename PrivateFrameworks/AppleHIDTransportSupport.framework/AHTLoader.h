
@interface AHTLoader : NSObject {
    unsigned int  _connect;
    unsigned int  _imageTag;
    unsigned int  _loadingGroup;
    NSString * _name;
    unsigned int  _service;
}

@property (nonatomic) unsigned int connect;
@property (nonatomic, readonly) unsigned int imageTag;
@property (nonatomic, readonly) unsigned int loadingGroup;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) unsigned int service;

+ (id)allDevices;
+ (id)bootloaderPropertiesForImageTag:(unsigned int)arg1;
+ (bool)errorFromAfuKextResult:(int)arg1 error:(id*)arg2;
+ (bool)errorFromKernel:(int)arg1 error:(id*)arg2;
+ (id)registryPropertiesForService:(unsigned int)arg1;
+ (id)withName:(id)arg1;
+ (id)withService:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)close;
- (unsigned int)connect;
- (void)dealloc;
- (id)description;
- (id)fullDescription;
- (unsigned int)imageTag;
- (id)initWithService:(unsigned int)arg1;
- (bool)loadImage:(id)arg1 payloadOnly:(bool)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
- (unsigned int)loadingGroup;
- (id)name;
- (bool)open:(id*)arg1;
- (bool)overrideFDR:(id)arg1 fdrClass:(id)arg2 fdrSubclass:(id)arg3 error:(id*)arg4;
- (unsigned int)service;
- (void)setConnect:(unsigned int)arg1;
- (void)setService:(unsigned int)arg1;

@end
