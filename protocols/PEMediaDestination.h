
@protocol PEMediaDestination <NSObject>

@required

- (void)cancelRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: <PEAsset> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PEAsset> *, NSError *, void*
- (int)saveEditsForAsset:(void *)arg1 usingContentEditingOutput:(void *)arg2 livePhotoState:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: <PEAsset> *, PHContentEditingOutput *, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PEAsset> *, NSError *, void*
- (int)saveInternalEditsForAsset:(void *)arg1 usingCompositionController:(void *)arg2 contentEditingOutput:(void *)arg3 version:(void *)arg4 livePhotoState:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: <PEAsset> *, PICompositionController *, PHContentEditingOutput *, long long, unsigned short, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PEAsset> *, NSError *, void*
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
