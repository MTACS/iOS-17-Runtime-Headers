
@protocol NTKArgonExtractorProviding <NSObject>

@required

- (void)extractUsingKeyDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NTKArgonKeyDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)extractionPath;
- (void)removeExtractedKeyDescriptor:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NTKArgonKeyDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)sourcePath;

@end
