
@interface MTLFunctionReflectionInternal : MTLFunctionReflection {
    NSArray * _arguments;
    NSArray * _bindings;
    NSArray * _builtInArguments;
    NSData * _pluginReturnData;
    unsigned long long  _primitiveKind;
    NSArray * _tags;
}

- (id)arguments;
- (id)bindings;
- (id)builtInArguments;
- (void)dealloc;
- (id)initWithArguments:(id*)arg1 argumentCount:(unsigned int)arg2 builtInArgumentCount:(unsigned int)arg3 pluginReturnData:(id)arg4 primitiveKind:(unsigned long long)arg5 tags:(id*)arg6 tagCount:(unsigned int)arg7;
- (id)initWithDevice:(id)arg1 reflectionData:(id)arg2 functionType:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (id)pluginReturnData;
- (unsigned long long)primitiveKind;
- (id)tags;

@end
