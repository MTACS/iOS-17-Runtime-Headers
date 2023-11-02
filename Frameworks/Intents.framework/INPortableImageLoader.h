
@interface INPortableImageLoader : NSObject <INImageLoading, NSSecureCoding> {
    <INPortableImageLoaderHelping> * _helper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) <INPortableImageLoaderHelping> *helper;
@property (nonatomic, readonly) NSString *serviceIdentifier;
@property (nonatomic, readonly) unsigned long long servicePriority;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_helperClassName;
- (bool)canLoadImageDataForImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)helper;
- (id)initWithCoder:(id)arg1;
- (void)loadDataImageFromImage:(id)arg1 usingPortableImageLoader:(id)arg2 scaledSize:(struct { double x1; double x2; })arg3 completion:(id /* block */)arg4;
- (void)loadImageDataFromImage:(id)arg1 accessSpecifier:(id)arg2 completion:(id /* block */)arg3;
- (id)serviceIdentifier;
- (unsigned long long)servicePriority;

@end
