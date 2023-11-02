
@protocol PUEditPluginSessionDataSource <NSObject>

@required

- (void)editPluginSession:(void *)arg1 commitContentEditingOutput:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: PUEditPluginSession *, PHContentEditingOutput *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)editPluginSession:(void *)arg1 loadAdjustmentDataWithHandler:(void *)arg2; // needs 2 arg types, found 7: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHAdjustmentData *, void*
- (void)editPluginSession:(void *)arg1 loadPlaceholderImageWithHandler:(void *)arg2; // needs 2 arg types, found 7: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*

@optional

- (void)editPluginSession:(void *)arg1 loadThumbnailImageWithSize:(void *)arg2 loadHandler:(void *)arg3; // needs 3 arg types, found 9: PUEditPluginSession *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, NSError *, void*
- (void)editPluginSession:(void *)arg1 revertToOriginalWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: PUEditPluginSession *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)editPluginSessionCanRevertToOriginal:(PUEditPluginSession *)arg1;
- (NSArray *)pluginActivitiesForEditPluginSession:(PUEditPluginSession *)arg1;

@end
