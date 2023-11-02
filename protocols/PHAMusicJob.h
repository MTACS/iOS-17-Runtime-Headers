
@protocol PHAMusicJob <NSObject>

@required

- (double)periodicity;
- (void)runWithGraphManager:(void *)arg1 progressBlock:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 14: PGManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, bool*, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (bool)shouldRunForLibrary:(PHPhotoLibrary *)arg1;

@end
