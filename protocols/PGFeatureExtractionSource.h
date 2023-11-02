
@protocol PGFeatureExtractionSource <NSObject>

@required

- (NSArray *)extractSharingRecordsFromGraph:(void *)arg1 photoLibrary:(void *)arg2 loggingConnection:(void *)arg3 progressBlock:(void *)arg4; // needs 4 arg types, found 10: PGGraph *, PHPhotoLibrary *, NSObject<OS_os_log> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*

@end
