
@interface __HMHomeManagerRefreshRequest : HMFOperation {
    unsigned long long  _generationCounter;
}

@property (readonly) unsigned long long generationCounter;

- (unsigned long long)generationCounter;
- (id)initWithGenerationCounter:(unsigned long long)arg1 timeout:(double)arg2;
- (void)main;

@end
