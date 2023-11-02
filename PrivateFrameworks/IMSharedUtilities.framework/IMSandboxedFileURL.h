
@interface IMSandboxedFileURL : IMSandboxedResource

+ (Class)resourceClass;

- (char *)_sandboxExtensionForPID:(int)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 destinationProcessPID:(int)arg2;

@end
