
@interface CMITiledInferenceProcessorConfig : NSObject {
    bool  _allocateIOBuffersAtLoad;
    unsigned long long  _bufferCount;
    bool  _isAllocated;
    NSArray * _pipeline;
    bool  _shouldAutoCommit;
    bool  _useTextureArrays;
}

@property (nonatomic) bool allocateIOBuffersAtLoad;
@property (nonatomic) unsigned long long bufferCount;
@property (nonatomic) bool isAllocated;
@property (nonatomic, retain) NSArray *pipeline;
@property (nonatomic) bool shouldAutoCommit;
@property (nonatomic) bool useTextureArrays;

- (void).cxx_destruct;
- (bool)allocateIOBuffersAtLoad;
- (unsigned long long)bufferCount;
- (id)init;
- (bool)isAllocated;
- (id)pipeline;
- (void)setAllocateIOBuffersAtLoad:(bool)arg1;
- (void)setBufferCount:(unsigned long long)arg1;
- (void)setIsAllocated:(bool)arg1;
- (void)setPipeline:(id)arg1;
- (void)setShouldAutoCommit:(bool)arg1;
- (void)setUseTextureArrays:(bool)arg1;
- (bool)shouldAutoCommit;
- (bool)useTextureArrays;

@end
