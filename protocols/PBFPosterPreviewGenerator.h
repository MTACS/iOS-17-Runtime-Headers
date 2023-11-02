
@protocol PBFPosterPreviewGenerator <NSObject>

@required

- (void)fetchComplicationPreviewImagesForPreview:(void *)arg1 complicationSnapshotReceivedHandler:(void *)arg2 errorHandler:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 21: <PBFPosterPreview> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PBFComplicationSnapshotRequest *, UIImage *, void*, id /* block */, void*, void, id /* block */, PBFComplicationSnapshotRequest *, NSError *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (<BSInvalidatable> *)fetchSnapshotForPosterPreview:(void *)arg1 context:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <PBFPosterPreview> *, <PBFDisplayContext> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (<BSInvalidatable> *)fetchSnapshotForPosterPreview:(void *)arg1 context:(void *)arg2 definition:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <PBFPosterPreview> *, <PBFDisplayContext> *, PBFPosterSnapshotDefinition *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (NSMapTable *)preparedComplicationPreviewImagesForPreview:(id <PBFPosterPreview>)arg1;
- (UIImage *)preparedSnapshotForPosterPreview:(id <PBFPosterPreview>)arg1 context:(id <PBFDisplayContext>)arg2;
- (UIImage *)preparedSnapshotForPosterPreview:(id <PBFPosterPreview>)arg1 context:(id <PBFDisplayContext>)arg2 definition:(PBFPosterSnapshotDefinition *)arg3;

@end
