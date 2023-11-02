
@protocol NTKArgonManagerObserver <NSObject>

@required

- (void)argonManager:(NTKArgonManager *)arg1 didExtractKeyDescriptor:(NTKArgonKeyDescriptor *)arg2 toPath:(NSString *)arg3;
- (void)argonManager:(NTKArgonManager *)arg1 didRemoveExtractedArgonFolderAtPath:(NSString *)arg2;
- (void)argonManager:(NTKArgonManager *)arg1 failedToExtractKeyDescriptor:(NTKArgonKeyDescriptor *)arg2 error:(NSError *)arg3;
- (void)argonManagerDidRefresh:(NTKArgonManager *)arg1;

@end
