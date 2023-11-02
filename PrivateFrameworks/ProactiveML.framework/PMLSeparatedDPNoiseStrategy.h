
@interface PMLSeparatedDPNoiseStrategy : NSObject <PMLNoiseStrategy> {
    const char * _pflIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)getPFLIdentifier:(id)arg1;

- (void)addNoiseToSparseMatrix:(id)arg1;
- (void)addNoiseToSparseVector:(id)arg1;
- (id)init;
- (id)initWithPFLIdentifier:(const char *)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (bool)scaleAndAddNoiseToDenseVector:(id)arg1 usingNorm:(bool)arg2 scaleFactor:(float*)arg3;
- (id)toPlistWithChunks:(id)arg1;

@end
