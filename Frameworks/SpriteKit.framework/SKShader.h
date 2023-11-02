
@interface SKShader : NSObject <NSCopying, NSSecureCoding> {
    struct map<std::string, std::shared_ptr<jet_buffer_pool>, std::less<std::string>, std::allocator<std::pair<const std::string, std::shared_ptr<jet_buffer_pool>>>> { 
        struct __tree<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>>, std::allocator<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>>> { 
            void *__begin_node_; 
            struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, void *>>> { 
                struct __tree_end_node<std::__tree_node_base<void *> *> { 
                    void *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, std::shared_ptr<jet_buffer_pool>>, std::less<std::string>>> { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  _attributeBuffers;
    NSArray * _attributes;
    struct shared_ptr<jet_program> { 
        struct jet_program {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backingProgram;
    struct shared_ptr<jet_program> { 
        struct jet_program {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _backingProgramWithTransform;
    NSString * _compileLog;
    NSString * _fileName;
    bool  _isPrecompiledMetal;
    bool  _performFullCapture;
    bool  _programDirty;
    bool  _programWithTransformDirty;
    NSString * _source;
    NSPointerArray * _targetNodes;
    NSMutableDictionary * _uniformData;
    NSMutableArray * _uniforms;
    bool  _usesPathLengthUniform;
    bool  _usesSpriteSizeUniform;
    bool  _usesTimeUniform;
}

@property (readonly) void*_attributeBuffers;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; } _backingProgram;
@property (readonly) struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; } _backingProgramWithTransform;
@property (readonly) struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; } _commands;
@property (readonly) NSArray *_textureUniforms;
@property (nonatomic, copy) NSArray *attributes;
@property bool performFullCapture;
@property (copy) NSString *source;
@property (copy) NSArray *uniforms;

+ (id)precompiledMetalShaderWithFile:(id)arg1 uniforms:(id)arg2;
+ (id)shader;
+ (id)shaderWithFileNamed:(id)arg1;
+ (id)shaderWithSource:(id)arg1;
+ (id)shaderWithSource:(id)arg1 uniforms:(id)arg2;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTargetNode:(id)arg1;
- (void*)_attributeBuffers;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_backingProgram;
- (bool)_backingProgramIsDirty;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_backingProgramWithTransform;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; })_commands;
- (struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x1; struct __shared_weak_count {} *x2; })_commandsForBatchOffset:(int)arg1 count:(int)arg2;
- (id)_fullMetalVertexSourceWithImplementation:(bool)arg1;
- (id)_fullVertexSourceWithImplementation:(long long)arg1;
- (id)_generateMetalSource;
- (id)_getLegacyUniformData;
- (id)_getMetalFragmentFunctionName;
- (id)_getMetalFragmentShaderSource;
- (id)_getMetalVertexOutDefinition;
- (id)_getMetalVertexShaderSource:(bool)arg1;
- (id)_getShaderCompilationLog;
- (struct shared_ptr<jet_program> { struct jet_program {} *x1; struct __shared_weak_count {} *x2; })_makeBackingProgramWithImplementation:(long long)arg1;
- (void)_removeTargetNode:(id)arg1;
- (void)_setUniformsDirty;
- (id)_textureUniforms;
- (bool)_usesPathLengthUniform;
- (bool)_usesTimeUniform;
- (void)addUniform:(id)arg1;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fragmentPrelude;
- (id)fragmentPreludeMetal;
- (id)fullFragmentSource;
- (id)fullMetalFragmentSource;
- (id)fullMetalVertexSource;
- (id)fullMetalVertexWithTransformSource;
- (id)fullVertexSource;
- (id)fullVertexWithTransformSource;
- (void)generateFragmentAttributeDeclares:(id*)arg1;
- (void)generateVertexAttributeDeclares:(id*)arg1 statements:(id*)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1;
- (id)initWithSource:(id)arg1 uniforms:(id)arg2;
- (bool)isEqualToShader:(id)arg1;
- (bool)isValid;
- (bool)performFullCapture;
- (void)removeUniformNamed:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setPerformFullCapture:(bool)arg1;
- (void)setSource:(id)arg1;
- (void)setUniforms:(id)arg1;
- (id)source;
- (id)uniformNamed:(id)arg1;
- (id)uniforms;

@end
