
@protocol SFImageResourceLoader <NSObject>

@required

- (bool)canLoadImage:(SFImage *)arg1 context:(SFImageContext *)arg2;
- (void)loadImage:(void *)arg1 context:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: SFImage *, SFImageContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SFImage *, NSError *, void*

@end
