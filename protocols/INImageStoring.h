
@protocol INImageStoring <INImageServing>

@required

- (bool)canStoreImage:(INImage *)arg1;
- (void)purgeImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)retrieveImageWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INImage *, NSError *, void*
- (NSString *)storeImage:(INImage *)arg1 scaled:(bool)arg2 qualityOfService:(unsigned int)arg3 storeType:(unsigned long long)arg4 error:(id*)arg5;

@optional

- (INImage *)retrieveImageSynchronouslyForIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSString *)storeImageSynchronously:(INImage *)arg1 error:(id*)arg2;

@end
