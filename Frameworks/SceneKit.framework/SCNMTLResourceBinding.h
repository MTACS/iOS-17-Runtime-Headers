
@interface SCNMTLResourceBinding : NSObject {
    MTLArgument * _argument;
    <MTLArgumentEncoder> * _argumentEncoder;
    id  _bindBlock;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _indices;
    bool  _needsRenderResource;
    struct { 
        BOOL vertexIndex; 
        BOOL fragmentIndex; 
    }  _samplerIndices;
    NSMutableArray * _usedResources;
}

@property (nonatomic, retain) MTLArgument *argument;
@property (nonatomic, retain) <MTLArgumentEncoder> *argumentEncoder;
@property (nonatomic, copy) id bindBlock;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) bool needsRenderResource;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) NSMutableArray *usedResources;

- (id)argument;
- (id)argumentEncoder;
- (id)bindBlock;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)name;
- (bool)needsRenderResource;
- (void)setArgument:(id)arg1;
- (void)setArgumentEncoder:(id)arg1;
- (void)setBindBlock:(id)arg1;
- (void)setNeedsRenderResource:(bool)arg1;
- (unsigned long long)type;
- (id)usedResources;

@end
