
@interface VGMLEspressoModel : NSObject {
    void * _context;
    int  _engine;
    NSMutableArray * _inputBuffers;
    NSMutableArray * _inputLayerNames;
    struct { 
        void *plan; 
        int network_index; 
    }  _network;
    NSString * _networkFilePath;
    unsigned long long  _numInputs;
    unsigned long long  _numOutputs;
    NSMutableArray * _outputBuffers;
    NSMutableArray * _outputLayerNames;
    void * _plan;
    int  _plan_flags;
    int  _storageFormat;
}

@property (nonatomic, readonly) NSString *networkFilePath;
@property (nonatomic, readonly) unsigned long long numInputs;
@property (nonatomic, readonly) unsigned long long numOutputs;

- (void).cxx_destruct;
- (void)dealloc;
- (const unsigned long long*)getInputDimensions:(unsigned long long)arg1;
- (unsigned long long)getInputSize;
- (const unsigned long long*)getOutputDimensions:(unsigned long long)arg1;
- (unsigned long long)getOutputSize;
- (id)inferInputs:(id)arg1;
- (void)inferInputs:(id)arg1 toOutputs:(id)arg2;
- (void)inferModel;
- (id)initWithModelInfo:(id)arg1;
- (id)initWithModelPath:(id)arg1;
- (id)networkFilePath;
- (unsigned long long)numInputs;
- (unsigned long long)numOutputs;

@end
