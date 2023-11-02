
@interface PXFaceTileImageCombiner : NSObject {
    unsigned long long  _currentGeneration;
}

+ (id)_generateCombinedImageFromImages:(id)arg1 context:(id)arg2;
+ (void)initialize;
+ (id)placeholderImageForNumberOfItems:(unsigned long long)arg1 context:(id)arg2;

- (void)_returnCombinedImage:(id)arg1 generation:(unsigned long long)arg2 resultHandler:(id /* block */)arg3;
- (void)requestCombinedImageForItems:(id)arg1 context:(id)arg2 resultHandler:(id /* block */)arg3;

@end
