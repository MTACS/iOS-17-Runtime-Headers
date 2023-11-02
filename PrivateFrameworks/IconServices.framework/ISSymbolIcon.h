
@interface ISSymbolIcon : ISCodableIcon <NSSecureCoding> {
    ISGraphicIconConfiguration * _config;
    ISGraphicSymbolDescriptor * _graphicSymbolDescriptor;
    ISImageCache * _imageCache;
    NSString * _symbolName;
}

@property (nonatomic, readonly, copy) ISGraphicIconConfiguration *config;
@property (readonly) ISGraphicSymbolDescriptor *graphicSymbolDescriptor;
@property (readonly) ISImageCache *imageCache;
@property (readonly) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_generateImageWithDescriptor:(id)arg1;
- (void)_prepareImagesForImageDescriptors:(id)arg1;
- (id)_specUpdatedDescriptorForDescriptor:(id)arg1;
- (id)config;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getImageForImageDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (id)graphicSymbolDescriptor;
- (id)imageCache;
- (id)imageForImageDescriptor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1;
- (id)initWithSymbolName:(id)arg1 configuration:(id)arg2;
- (id)symbol;
- (id)symbolName;

@end
