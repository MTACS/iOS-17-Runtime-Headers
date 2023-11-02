
@interface VisionCoreE5RTFunction : NSObject <NSCopying> {
    NSDictionary * _cachedInputDescriptors;
    NSDictionary * _cachedOutputDescriptors;
    struct e5rt_program_function { } * _functionHandle;
    NSArray * _lazyInputNames;
    NSArray * _lazyOutputNames;
    NSString * _name;
    VisionCoreE5RTProgramLibrary * _programLibrary;
}

@property (nonatomic, readonly) struct e5rt_program_function { }*functionHandle;
@property (nonatomic, readonly, copy) NSArray *inputDescriptors;
@property (nonatomic, readonly, copy) NSArray *inputs;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *outputDescriptors;
@property (nonatomic, readonly, copy) NSArray *outputs;
@property (nonatomic, readonly) VisionCoreE5RTProgramLibrary *programLibrary;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptorForInput:(id)arg1 error:(id*)arg2;
- (id)descriptorForOutput:(id)arg1 error:(id*)arg2;
- (id)descriptorOfClass:(Class)arg1 forInput:(id)arg2 error:(id*)arg3;
- (id)descriptorOfClass:(Class)arg1 forOutput:(id)arg2 error:(id*)arg3;
- (id)descriptorsForInputs:(id)arg1 error:(id*)arg2;
- (id)descriptorsForOutputs:(id)arg1 error:(id*)arg2;
- (struct e5rt_program_function { }*)functionHandle;
- (id)initWithProgramLibrary:(id)arg1 name:(id)arg2 ownedFunctionHandle:(struct e5rt_program_function {}**)arg3;
- (id)inputDescriptors;
- (id)inputs;
- (id)metadata;
- (id)name;
- (id)newExecutionContextWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)outputDescriptors;
- (id)outputs;
- (id)programLibrary;

@end
