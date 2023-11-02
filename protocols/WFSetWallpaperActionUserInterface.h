
@protocol WFSetWallpaperActionUserInterface <WFActionRemoteUserInterface>

@required

- (void)showPreviewForConfiguration:(void *)arg1 selectedPoster:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: WFWallpaperConfiguration *, WFPosterRepresentation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showPreviewWithInput:(void *)arg1 key:(void *)arg2 wallpaperLocation:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: NSData *, NSString *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
