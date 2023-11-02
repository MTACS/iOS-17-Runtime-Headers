
@interface _ANEInMemoryModel : NSObject {
    NSString * _compilerOptionsFileName;
    _ANEInMemoryModelDescriptor * _descriptor;
    NSString * _hexStringIdentifier;
    unsigned long long  _intermediateBufferHandle;
    bool  _isMILModel;
    _ANEModel * _model;
    NSDictionary * _modelAttributes;
    NSURL * _modelURL;
    unsigned int  _perfStatsMask;
    _ANEProgramForEvaluation * _program;
    unsigned long long  _programHandle;
    BOOL  _queueDepth;
    _ANEClient * _sharedConnection;
    unsigned long long  _state;
    unsigned long long  _string_id;
}

@property (nonatomic, copy) NSString *compilerOptionsFileName;
@property (nonatomic, retain) _ANEInMemoryModelDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSString *hexStringIdentifier;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic, readonly) bool isMILModel;
@property (nonatomic, retain) _ANEModel *model;
@property (nonatomic, retain) NSDictionary *modelAttributes;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic, retain) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) BOOL queueDepth;
@property (nonatomic, readonly) _ANEClient *sharedConnection;
@property (nonatomic) unsigned long long state;
@property (nonatomic, readonly) unsigned long long string_id;

+ (id)inMemoryModelWithDescriptor:(id)arg1;
+ (void)initialize;
+ (id)new;

- (void).cxx_destruct;
- (bool)compileWithQoS:(unsigned int)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)compiledModelExists;
- (id)compilerOptionsFileName;
- (id)compilerOptionsWithOptions:(id)arg1 isCompiledModelCached:(bool)arg2;
- (void)dealloc;
- (id)descriptor;
- (bool)evaluateWithQoS:(unsigned int)arg1 options:(id)arg2 request:(id)arg3 error:(id*)arg4;
- (id)hexStringIdentifier;
- (id)init;
- (id)initWithDesctiptor:(id)arg1;
- (unsigned long long)intermediateBufferHandle;
- (bool)isMILModel;
- (bool)loadWithQoS:(unsigned int)arg1 options:(id)arg2 error:(id*)arg3;
- (id)localModelPath;
- (bool)mapIOSurfacesWithRequest:(id)arg1 cacheInference:(bool)arg2 error:(id*)arg3;
- (id)model;
- (id)modelAttributes;
- (id)modelURL;
- (unsigned int)perfStatsMask;
- (id)program;
- (unsigned long long)programHandle;
- (void)purgeCompiledModel;
- (BOOL)queueDepth;
- (id)saveModelFiles;
- (void)setCompilerOptionsFileName:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)setIntermediateBufferHandle:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setModelAttributes:(id)arg1;
- (void)setModelURL:(id)arg1;
- (void)setPerfStatsMask:(unsigned int)arg1;
- (void)setProgram:(id)arg1;
- (void)setProgramHandle:(unsigned long long)arg1;
- (void)setQueueDepth:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)sharedConnection;
- (unsigned long long)state;
- (unsigned long long)string_id;
- (bool)unloadWithQoS:(unsigned int)arg1 error:(id*)arg2;
- (void)unmapIOSurfacesWithRequest:(id)arg1;

@end
