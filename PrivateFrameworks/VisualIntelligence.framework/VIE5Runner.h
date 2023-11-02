
@interface VIE5Runner : NSObject {
    bool  _allocateInputs;
    bool  _allocateOutputs;
    NSDictionary * _boundInputs;
    NSDictionary * _boundOutputs;
    NSURL * _bundleURL;
    NSArray * _inputNames;
    NSDictionary * _inputPorts;
    NSDictionary * _inputs;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct e5rt_execution_stream_operation { } * _mainESOP;
    NSString * _mainFunctionName;
    NSArray * _outputNames;
    NSDictionary * _outputPorts;
    NSDictionary * _outputs;
    struct e5rt_execution_stream { } * _stream;
}

@property (nonatomic, readonly) NSDictionary *boundInputs;
@property (nonatomic, readonly) NSDictionary *boundOutputs;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSArray *inputNames;
@property (nonatomic, readonly) NSDictionary *inputs;
@property (nonatomic, readonly) NSString *mainFunctionName;
@property (nonatomic, readonly) NSArray *outputNames;
@property (nonatomic, readonly) NSDictionary *outputs;

+ (int)allocatePort:(struct e5rt_io_port { }*)arg1 description:(id)arg2 io:(id*)arg3;
+ (int)getPort:(struct e5rt_io_port { }*)arg1 description:(id*)arg2;
+ (void)releasePorts:(id)arg1 descriptions:(id)arg2 boundedIOs:(id)arg3 wasBound:(bool)arg4;
+ (int)surfaceTypeE5rtType:(int)arg1 toVIType:(unsigned long long*)arg2;
+ (int)tensorDTypeE5rtType:(int)arg1 toVIType:(unsigned long long*)arg2;

- (void).cxx_destruct;
- (id)boundInputs;
- (id)boundOutputs;
- (id)bundleURL;
- (int)compileNetworksOnDevice;
- (void)dealloc;
- (int)execute;
- (id)executeAndGet:(id)arg1 error:(id*)arg2;
- (struct __CVBuffer { }*)getInputImageBuffer:(id)arg1;
- (int)initNetworks;
- (id)initWithBundleURL:(id)arg1 mainFunctionName:(id)arg2;
- (id)inputNames;
- (id)inputs;
- (int)loadPrecompiledNetwork;
- (id)mainFunctionName;
- (id)outputNames;
- (id)outputs;
- (void)releaseNetworks;

@end
