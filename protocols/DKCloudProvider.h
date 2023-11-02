
@protocol DKCloudProvider <NSObject>

@required

- (void)beginUploadAllowingExpensiveCellular:(void *)arg1 progressHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, float, double, void*, id /* block */, void*, void, id /* block */, DKCloudUploadResults *, void*
- (void)cancelUpload;
- (void)hasDataToUpload:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)isRestoring;
- (unsigned long long)isUploadSupportedForCurrentNetwork;

@end
