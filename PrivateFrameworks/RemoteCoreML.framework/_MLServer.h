
@interface _MLServer : NSObject {
    id /* block */  _loadFunction;
    _MLNetworking * _nwObj;
    _MLNetworkOptions * _nwOptions;
    _MLNetworkPacket * _packet;
    id /* block */  _predictFunction;
    NSObject<OS_dispatch_queue> * _q;
    id /* block */  _textFunction;
    id /* block */  _unLoadFunction;
}

@property (nonatomic, copy) id /* block */ loadFunction;
@property (nonatomic, readonly) _MLNetworking *nwObj;
@property (nonatomic, readonly) _MLNetworkOptions *nwOptions;
@property (nonatomic, readonly) _MLNetworkPacket *packet;
@property (nonatomic, copy) id /* block */ predictFunction;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *q;
@property (nonatomic, copy) id /* block */ textFunction;
@property (nonatomic, copy) id /* block */ unLoadFunction;

- (void).cxx_destruct;
- (void)doReceive:(id)arg1 context:(id)arg2 isComplete:(bool)arg3 error:(id)arg4;
- (id)initWithOptions:(id)arg1;
- (id /* block */)loadFunction;
- (id)nwObj;
- (id)nwOptions;
- (id)packet;
- (id /* block */)predictFunction;
- (id)q;
- (void)setLoadCommand:(id /* block */)arg1;
- (void)setLoadFunction:(id /* block */)arg1;
- (void)setPredictCommand:(id /* block */)arg1;
- (void)setPredictFunction:(id /* block */)arg1;
- (void)setTextCommand:(id /* block */)arg1;
- (void)setTextFunction:(id /* block */)arg1;
- (void)setUnLoadCommand:(id /* block */)arg1;
- (void)setUnLoadFunction:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (id /* block */)textFunction;
- (id /* block */)unLoadFunction;

@end
