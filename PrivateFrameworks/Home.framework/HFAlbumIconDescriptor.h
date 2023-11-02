
@interface HFAlbumIconDescriptor : NSObject <HFIconDescriptor> {
    NSData * _imageData;
    bool  _shouldForceLTR;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSData *imageData;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)shouldForceLTR;

@end
