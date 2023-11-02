
@protocol SHMediaItemPresentation <NSObject>

@required

- (void)presentMediaItem:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: SHMediaItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)presentMediaItem:(void *)arg1 presentationSettings:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: SHMediaItem *, SHMediaItemPresentationSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSURL *, NSError *, void*

@end
