
@protocol DKAssetResponder <NSObject>

@required

- (void)getAsset:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*

@optional

- (void)uploadAssets:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: DKAssetUploadItems *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end
