
@protocol NTKArgonLocalKeyDatabaseProviding <NSObject>

@required

- (bool)addKeyDescriptor:(NTKArgonKeyDescriptor *)arg1 error:(id*)arg2;
- (void)enumerateKeyDescriptors:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NTKArgonKeyDescriptor *, void*
- (void)flush;
- (NTKArgonKeyDescriptor *)keyDescriptorForFileName:(NSString *)arg1;
- (NSData *)latestChangeTokenForServerIdentifier:(NSString *)arg1;
- (void)recordChangeToken:(NSData *)arg1 forServerIdentifier:(NSString *)arg2;

@end
