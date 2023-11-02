
@interface NTKFacesGalleryCollection : NTKDeviceSpecificFacesArrayGalleryCollection {
    NSArray * _faceDescriptors;
    NSString * _title;
}

- (void).cxx_destruct;
- (id)facesForDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 title:(id)arg2 faceDescriptors:(id)arg3;
- (id)title;

@end
