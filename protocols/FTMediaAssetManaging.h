
@protocol FTMediaAssetManaging

@required

- (void)saveLivePhotoWithPhotoURL:(void *)arg1 videoURL:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSURL *, NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)saveVideoWithURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end
