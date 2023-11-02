
@interface MCMXPCMessageStageSharedContent : MCMXPCMessageWithIdentifierBase <MCMParametersStageSharedContent> {
    NSString * _destinationRelativePath;
    NSString * _sourceRelativePath;
}

@property (nonatomic, readonly) NSString *destinationRelativePath;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *sourceRelativePath;

- (void).cxx_destruct;
- (id)destinationRelativePath;
- (unsigned int)disposition;
- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (id)sourceRelativePath;

@end
