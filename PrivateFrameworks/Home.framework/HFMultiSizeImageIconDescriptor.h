
@interface HFMultiSizeImageIconDescriptor : HFImageIconDescriptor {
    NSDictionary * _imageIdentifiersKeyedBySize;
}

@property (nonatomic, retain) NSDictionary *imageIdentifiersKeyedBySize;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)imageIdentifierForSize:(id)arg1;
- (id)imageIdentifiersKeyedBySize;
- (id)initWithImageIdentifiersKeyedBySize:(id)arg1;
- (id)initWithImageIdentifiersKeyedBySize:(id)arg1 defaultImageIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setImageIdentifiersKeyedBySize:(id)arg1;

@end
