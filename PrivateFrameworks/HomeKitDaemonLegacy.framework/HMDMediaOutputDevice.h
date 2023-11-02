
@interface HMDMediaOutputDevice : HMFObject {
    NSString * _name;
    void * _outputDevice;
    NSString * _uniqueIdentifier;
}

@property (readonly) AVOutputDevice *av_OutputDevice;
@property (nonatomic, readonly) unsigned int deviceSubtype;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) void*outputDevice;
@property (nonatomic, readonly) bool supportsHAP;
@property (nonatomic, readonly) bool supportsWHA;
@property (nonatomic, readonly) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (id)av_OutputDevice;
- (void)dealloc;
- (id)description;
- (unsigned int)deviceSubtype;
- (unsigned long long)hash;
- (id)initWithOutputDevice:(void*)arg1;
- (bool)isEqual:(id)arg1;
- (id)modelID;
- (id)name;
- (void*)outputDevice;
- (void)setOutputDevice:(void*)arg1;
- (bool)shouldCreateAppleMediaAccessory;
- (bool)supportsHAP;
- (bool)supportsWHA;
- (id)uniqueIdentifier;

@end
