
@interface TCComputeDevice : NSObject {
    NSArray * _devices;
    bool  _forceCPU;
}

@property (nonatomic, retain) NSArray *devices;
@property (nonatomic) bool forceCPU;

- (void).cxx_destruct;
- (id)asMLCDevice;
- (id)asMLCDevice:(long long)arg1;
- (id)asVNDevice;
- (id)asVNDevice:(long long)arg1;
- (id)devices;
- (bool)forceCPU;
- (id)initWithDevices:(id)arg1 forceCPU:(bool)arg2;
- (void)setDevices:(id)arg1;
- (void)setForceCPU:(bool)arg1;

@end
