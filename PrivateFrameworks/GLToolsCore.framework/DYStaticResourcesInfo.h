
@interface DYStaticResourcesInfo : NSObject <NSSecureCoding> {
    NSArray * buffers;
    NSArray * framebuffers;
    NSArray * programPipelines;
    NSArray * programs;
    NSArray * queries;
    NSArray * renderbuffers;
    NSArray * shaders;
    NSArray * textures;
    NSArray * vertexArrays;
}

@property (nonatomic, retain) NSArray *buffers;
@property (nonatomic, retain) NSArray *framebuffers;
@property (nonatomic, retain) NSArray *programPipelines;
@property (nonatomic, retain) NSArray *programs;
@property (nonatomic, retain) NSArray *queries;
@property (nonatomic, retain) NSArray *renderbuffers;
@property (nonatomic, retain) NSArray *shaders;
@property (nonatomic, retain) NSArray *textures;
@property (nonatomic, retain) NSArray *vertexArrays;

+ (bool)supportsSecureCoding;

- (id)buffers;
- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)framebuffers;
- (id)initWithCoder:(id)arg1;
- (id)programPipelines;
- (id)programs;
- (id)queries;
- (id)renderbuffers;
- (void)setBuffers:(id)arg1;
- (void)setFramebuffers:(id)arg1;
- (void)setProgramPipelines:(id)arg1;
- (void)setPrograms:(id)arg1;
- (void)setQueries:(id)arg1;
- (void)setRenderbuffers:(id)arg1;
- (void)setShaders:(id)arg1;
- (void)setTextures:(id)arg1;
- (void)setVertexArrays:(id)arg1;
- (id)shaders;
- (id)textures;
- (id)vertexArrays;

@end
