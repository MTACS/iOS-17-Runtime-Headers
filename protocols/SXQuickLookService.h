
@protocol SXQuickLookService <NSObject>

@required

- (void)fetchThumbnailForFile:(void *)arg1 size:(void *)arg2 onCompletion:(void *)arg3 onError:(void *)arg4; // needs 4 arg types, found 14: SXQuickLookFile *, struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIImage *, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
