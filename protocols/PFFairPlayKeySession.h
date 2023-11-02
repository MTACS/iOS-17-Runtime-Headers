
@protocol PFFairPlayKeySession

@required

- (PFFairPlayAsset *)asset;
- (bool)bypassCache;
- (void)deregister;
- (NSString *)id;
- (NSString *)keyStoreFilePath;
- (void)processKeyWith:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)register;
- (void)setBypassCache:(bool)arg1;
- (void)stopAndInvalidateKeysWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
