
@interface CMIInferenceDeviceEspressoV1 : NSObject <CMIInferenceDevice> {
    void * _context;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _networks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createExecutionStream;
- (void)dealloc;
- (id)init;
- (id)loadNetworkWithPath:(id)arg1;

@end
