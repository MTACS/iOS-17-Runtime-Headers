
@protocol INPortableImageLoaderHelping <NSObject, NSSecureCoding>

@optional

- (void)loadImageDataFromBundle:(void *)arg1 withImageName:(void *)arg2 accessSpecifier:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 12: INImageBundle *, NSString *, INHelperServiceAccessSpecifier *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, struct { double x1; double x2; }, long long, NSError *, void*
- (void)loadImageDataFromURL:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)loadImageSizeFromData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct { double x1; double x2; }, NSError *, void*

@end
