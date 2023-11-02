
@interface MIOImageConstraint : NSObject <MIOFeatureValueConstraint> {
    struct ImageFeatureType { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        long long width_; 
        long long height_; 
        int colorspace_; 
        union SizeFlexibilityUnion { 
            struct ImageFeatureType_EnumeratedImageSizes {} *enumeratedsizes_; 
            struct ImageFeatureType_ImageSizeRange {} *imagesizerange_; 
        } SizeFlexibility_; 
        int _cached_size_; 
        unsigned int _oneof_case_[1]; 
    }  _imageFeatureTypeParams;
    MIOImageSize * _imageSize;
    MIOImageSizeConstraint * _sizeConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MIOImageSize *imageSize;
@property (nonatomic, readonly) unsigned int pixelFormatType;
@property (nonatomic, readonly) MIOImageSizeConstraint *sizeConstraint;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (const void*)imageFeatureTypeSpecification;
- (id)imageSize;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned int)pixelFormatType;
- (id)sizeConstraint;

@end
