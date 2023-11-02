
@interface _ANEModel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _cacheURLIdentifier;
    long long  _identifierSource;
    unsigned long long  _intermediateBufferHandle;
    NSString * _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _l;
    _ANEProgramIOSurfacesMapper * _mapper;
    NSDictionary * _modelAttributes;
    NSURL * _modelURL;
    unsigned int  _perfStatsMask;
    _ANEProgramForEvaluation * _program;
    unsigned long long  _programHandle;
    BOOL  _queueDepth;
    NSURL * _sourceURL;
    unsigned long long  _state;
    unsigned long long  _string_id;
}

@property (nonatomic, copy) NSString *cacheURLIdentifier;
@property (nonatomic, readonly) long long identifierSource;
@property (nonatomic) unsigned long long intermediateBufferHandle;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } l;
@property (nonatomic, retain) _ANEProgramIOSurfacesMapper *mapper;
@property (nonatomic, retain) NSDictionary *modelAttributes;
@property (nonatomic, readonly) NSURL *modelURL;
@property (nonatomic) unsigned int perfStatsMask;
@property (nonatomic, retain) _ANEProgramForEvaluation *program;
@property (nonatomic) unsigned long long programHandle;
@property (nonatomic) BOOL queueDepth;
@property (nonatomic, readonly) NSURL *sourceURL;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long string_id;

+ (id)correctFileURLFormat:(id)arg1;
+ (id)modelAtURL:(id)arg1 key:(id)arg2;
+ (id)modelAtURL:(id)arg1 key:(id)arg2 modelAttributes:(id)arg3;
+ (id)modelAtURLWithCacheURLIdentifier:(id)arg1 key:(id)arg2 cacheURLIdentifier:(id)arg3;
+ (id)modelAtURLWithSourceURL:(id)arg1 sourceURL:(id)arg2 key:(id)arg3 cacheURLIdentifier:(id)arg4;
+ (id)modelAtURLWithSourceURL:(id)arg1 sourceURL:(id)arg2 key:(id)arg3 identifierSource:(long long)arg4 cacheURLIdentifier:(id)arg5;
+ (id)modelWithCacheURLIdentifier:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cacheURLIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getCacheURLIdentifier;
- (unsigned long long)hash;
- (long long)identifierSource;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithModelAtURL:(id)arg1 key:(id)arg2 identifierSource:(long long)arg3 cacheURLIdentifier:(id)arg4 modelAttributes:(id)arg5 standardizeURL:(bool)arg6;
- (id)initWithModelAtURL:(id)arg1 sourceURL:(id)arg2 key:(id)arg3 identifierSource:(long long)arg4 cacheURLIdentifier:(id)arg5 modelAttributes:(id)arg6 standardizeURL:(bool)arg7 string_id:(unsigned long long)arg8 generateNewStringId:(bool)arg9;
- (id)initWithModelIdentifier:(id)arg1;
- (id)inputSymbolIndicesForProcedureIndex:(unsigned int)arg1;
- (unsigned long long)intermediateBufferHandle;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToModel:(id)arg1;
- (id)key;
- (struct os_unfair_lock_s { unsigned int x1; })l;
- (id)mapper;
- (id)modelAttributes;
- (id)modelURL;
- (id)outputSymbolIndicesForProcedureIndex:(unsigned int)arg1;
- (unsigned int)perfStatsMask;
- (id)procedureInfoForProcedureIndex:(unsigned int)arg1;
- (id)program;
- (unsigned long long)programHandle;
- (BOOL)queueDepth;
- (void)resetOnUnload;
- (void)setCacheURLIdentifier:(id)arg1;
- (void)setIntermediateBufferHandle:(unsigned long long)arg1;
- (void)setL:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMapper:(id)arg1;
- (void)setModelAttributes:(id)arg1;
- (void)setPerfStatsMask:(unsigned int)arg1;
- (void)setProgram:(id)arg1;
- (void)setProgramHandle:(unsigned long long)arg1;
- (void)setQueueDepth:(BOOL)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setString_id:(unsigned long long)arg1;
- (id)shallowCopy;
- (id)sourceURL;
- (unsigned long long)state;
- (unsigned long long)string_id;
- (id)symbolIndicesForProcedureIndex:(unsigned int)arg1 indexArrayKey:(id)arg2;
- (void)updateModelAttributes:(id)arg1 state:(unsigned long long)arg2;
- (void)updateModelAttributes:(id)arg1 state:(unsigned long long)arg2 programHandle:(unsigned long long)arg3 intermediateBufferHandle:(unsigned long long)arg4 queueDepth:(BOOL)arg5;

@end
