
@protocol NTKArgonKeyDatabaseProviding <NSObject>

@required

- (void)clearCaches;
- (NSEnumerator *)keyDescriptorEnumerator;
- (NTKArgonKeyDescriptor *)keyDescriptorForFileName:(NSString *)arg1;

@end
