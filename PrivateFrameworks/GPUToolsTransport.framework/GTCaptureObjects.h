
@interface GTCaptureObjects : NSObject <NSSecureCoding> {
    NSArray * _captureScopes;
    NSArray * _commandQueues;
    NSArray * _devices;
    NSArray * _metalLayers;
}

@property (nonatomic, copy) NSArray *captureScopes;
@property (nonatomic, copy) NSArray *commandQueues;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, copy) NSArray *metalLayers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)captureScopes;
- (id)commandQueues;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metalLayers;
- (void)setCaptureScopes:(id)arg1;
- (void)setCommandQueues:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setMetalLayers:(id)arg1;

@end
