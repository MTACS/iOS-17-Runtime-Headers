
@protocol PHImageRequestDelegate <PHMediaRequestDelegate>

@required

- (void)imageRequest:(void *)arg1 isQueryingCacheAndDidWait:(void *)arg2 didFindImage:(void *)arg3 resultHandler:(void *)arg4; // needs 4 arg types, found 11: PHImageRequest *, bool*, bool*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct CGImage { }*, bool, NSError *, void*
- (void)imageRequest:(void *)arg1 isRequestingScheduledWorkBlock:(void *)arg2; // needs 2 arg types, found 7: PHImageRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, PHImageRequest *, void*

@end
