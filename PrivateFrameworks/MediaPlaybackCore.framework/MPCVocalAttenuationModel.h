
@interface MPCVocalAttenuationModel : NSObject {
    NSString * _basePath;
    unsigned long long  _batchSize;
    unsigned long long  _blockSize;
    NSArray * _files;
    NSString * _identifier;
    unsigned long long  _lookaheadSize;
    NSString * _plistPath;
    double  _processingDelay;
    unsigned long long  _sampleRate;
    unsigned long long  _taskIteration;
}

@property (nonatomic, copy) NSString *basePath;
@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) unsigned long long blockSize;
@property (nonatomic, copy) NSArray *files;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long lookaheadSize;
@property (nonatomic, copy) NSString *plistPath;
@property (nonatomic) double processingDelay;
@property (nonatomic) unsigned long long sampleRate;
@property (nonatomic) unsigned long long taskIteration;

+ (id)_filePathsForModelAtURL:(id)arg1 error:(id*)arg2;
+ (id)_plistForModelAtURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)description;
- (void)setBasePath:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setBlockSize:(unsigned long long)arg1;
- (void)setFiles:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLookaheadSize:(unsigned long long)arg1;
- (void)setPlistPath:(id)arg1;
- (void)setProcessingDelay:(double)arg1;
- (void)setSampleRate:(unsigned long long)arg1;
- (void)setTaskIteration:(unsigned long long)arg1;

@end
