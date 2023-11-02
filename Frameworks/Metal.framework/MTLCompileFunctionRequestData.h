
@interface MTLCompileFunctionRequestData : NSObject {
    NSObject<OS_dispatch_data> * _airScript;
    struct { 
        unsigned char key[32]; 
    }  _archiveHashKey;
    NSObject<OS_dispatch_data> * _archiverId;
    NSArray * _binaryArchives;
    <MTLBinaryArchive> * _destinationBinaryArchive;
    NSObject<OS_dispatch_data> * _driverKeyData;
    NSObject<OS_dispatch_data> * _frameworkData;
    MTLFunction * _function;
    unsigned long long  _functionOptions;
    NSDictionary * _gpuCompilerSPIOptions;
    unsigned int  _maxAccelerationStructureTraversalDepth;
    <MTLPipelineCache> * _pipelineCache;
    unsigned long long  _pipelineOptions;
    NSArray * _privateVisibleFunctions;
    bool  _sync;
    struct { 
        unsigned char key[32]; 
    }  _vendorPluginFunctionId;
    NSDictionary * _visibleFunctionGroups;
    NSArray * _visibleFunctions;
}

@property (nonatomic) NSObject<OS_dispatch_data> *airScript;
@property (nonatomic) struct { unsigned char x1[32]; } archiveHashKey;
@property (nonatomic) NSObject<OS_dispatch_data> *archiverId;
@property (nonatomic, copy) NSArray *binaryArchives;
@property (nonatomic, retain) <MTLBinaryArchive> *destinationBinaryArchive;
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (nonatomic, retain) MTLFunction *function;
@property (nonatomic) unsigned long long functionOptions;
@property (nonatomic, copy) NSDictionary *gpuCompilerSPIOptions;
@property (nonatomic) unsigned int maxAccelerationStructureTraversalDepth;
@property (nonatomic, retain) <MTLPipelineCache> *pipelineCache;
@property (nonatomic) unsigned long long pipelineOptions;
@property (nonatomic, copy) NSArray *privateVisibleFunctions;
@property (nonatomic) bool sync;
@property (nonatomic) struct { unsigned char x1[32]; } vendorPluginFunctionId;
@property (nonatomic, copy) NSDictionary *visibleFunctionGroups;
@property (nonatomic, copy) NSArray *visibleFunctions;

+ (id)newVisibleRequestWithFunction:(id)arg1 descriptor:(id)arg2;

- (id)airScript;
- (struct { unsigned char x1[32]; })archiveHashKey;
- (id)archiverId;
- (id)binaryArchives;
- (void)dealloc;
- (id)destinationBinaryArchive;
- (id)driverKeyData;
- (id)frameworkData;
- (id)function;
- (unsigned long long)functionOptions;
- (id)gpuCompilerSPIOptions;
- (unsigned int)maxAccelerationStructureTraversalDepth;
- (id)pipelineCache;
- (unsigned long long)pipelineOptions;
- (id)privateVisibleFunctions;
- (void)setAirScript:(id)arg1;
- (void)setArchiveHashKey:(struct { unsigned char x1[32]; })arg1;
- (void)setArchiverId:(id)arg1;
- (void)setBinaryArchives:(id)arg1;
- (void)setDestinationBinaryArchive:(id)arg1;
- (void)setDriverKeyData:(id)arg1;
- (void)setFrameworkData:(id)arg1;
- (void)setFunction:(id)arg1;
- (void)setFunctionOptions:(unsigned long long)arg1;
- (void)setGpuCompilerSPIOptions:(id)arg1;
- (void)setMaxAccelerationStructureTraversalDepth:(unsigned int)arg1;
- (void)setPipelineCache:(id)arg1;
- (void)setPipelineOptions:(unsigned long long)arg1;
- (void)setPrivateVisibleFunctions:(id)arg1;
- (void)setSync:(bool)arg1;
- (void)setVendorPluginFunctionId:(struct { unsigned char x1[32]; })arg1;
- (void)setVisibleFunctionGroups:(id)arg1;
- (void)setVisibleFunctions:(id)arg1;
- (bool)sync;
- (struct { unsigned char x1[32]; })vendorPluginFunctionId;
- (id)visibleFunctionGroups;
- (id)visibleFunctions;

@end
