
@interface ABPKMLNetworkV2 : NSObject {
    NSMutableDictionary * _inputBuffers;
    NSString * _networkPath;
    struct e5rt_execution_stream_operation { } * _operation;
    NSMutableDictionary * _outputBuffers;
    struct e5rt_execution_stream { } * _stream;
    bool  _useSurface;
}

@property (nonatomic, readonly) NSMutableDictionary *inputBuffers;
@property (nonatomic, readonly) NSMutableDictionary *outputBuffers;

- (void).cxx_destruct;
- (bool)changeNetWorkConfig:(id)arg1;
- (void)dealloc;
- (bool)execute;
- (id)initWithNetworkPath:(id)arg1 inputNames:(id)arg2 outputNames:(id)arg3 useSurface:(bool)arg4;
- (id)initWithNetworkPath:(id)arg1 networkConfig:(id)arg2 inputNames:(id)arg3 outputNames:(id)arg4 useSurface:(bool)arg5;
- (id)inputBuffers;
- (id)outputBuffers;

@end
