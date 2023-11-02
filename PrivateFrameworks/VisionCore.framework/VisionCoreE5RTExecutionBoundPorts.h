
@interface VisionCoreE5RTExecutionBoundPorts : NSObject {
    NSMutableDictionary * _namedPorts;
}

@property (nonatomic, readonly, copy) NSArray *allPortNames;

- (void).cxx_destruct;
- (id)allPortNames;
- (void)dealloc;
- (bool)getPort:(struct e5rt_io_port {}**)arg1 named:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (bool)recordPort:(struct e5rt_io_port { }*)arg1 named:(id)arg2 error:(id*)arg3;
- (void)releaseAllPorts;
- (void)releasePortNamed:(id)arg1;

@end
