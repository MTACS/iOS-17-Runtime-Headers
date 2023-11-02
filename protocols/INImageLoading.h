
@protocol INImageLoading <INImageServing>

@required

- (bool)canLoadImageDataForImage:(INImage *)arg1;
- (void)loadDataImageFromImage:(void *)arg1 usingPortableImageLoader:(void *)arg2 scaledSize:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: INImage *, INPortableImageLoader *, struct { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INImage *, NSError *, void*

@end
