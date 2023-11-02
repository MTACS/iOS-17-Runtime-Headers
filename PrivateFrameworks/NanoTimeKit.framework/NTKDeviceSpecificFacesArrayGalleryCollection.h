
@interface NTKDeviceSpecificFacesArrayGalleryCollection : NTKFacesArrayGalleryCollection {
    CLKDevice * _device;
}

@property (nonatomic, readonly) CLKDevice *device;

- (void).cxx_destruct;
- (id)descriptionText;
- (id)device;
- (id)facesForDevice:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (void)loadFacesWithCompletion:(id /* block */)arg1;
- (id)title;

@end
