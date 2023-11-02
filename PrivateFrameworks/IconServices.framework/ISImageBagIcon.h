
@interface ISImageBagIcon : ISIcon {
    NSArray * _decorations;
    ISImageCache * _imageCache;
    NSArray * _images;
}

@property (retain) ISImageCache *imageCache;
@property (readonly) NSArray *images;

- (void).cxx_destruct;
- (id)_generateImageWithDescriptor:(id)arg1;
- (void)_prepareImagesForImageDescriptors:(id)arg1;
- (id)decorations;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)imageCache;
- (id)imageForImageDescriptor:(id)arg1;
- (id)images;
- (id)initWithImageBag:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)initWithImages:(id)arg1 decorations:(id)arg2;
- (void)setImageCache:(id)arg1;

@end
