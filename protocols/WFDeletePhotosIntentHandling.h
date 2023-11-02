
@protocol WFDeletePhotosIntentHandling <NSObject>

@required

- (void)handleDeletePhotos:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFDeletePhotosIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDeletePhotosIntentResponse *, void*

@optional

- (void)confirmDeletePhotos:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WFDeletePhotosIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WFDeletePhotosIntentResponse *, void*

@end
