
@interface MIOImageSize : NSObject <NSCopying> {
    struct ImageFeatureType_ImageSize { 
        int (**_vptr$MessageLite)(); 
        struct InternalMetadataWithArenaLite { 
            void *ptr_; 
        } _internal_metadata_; 
        unsigned long long width_; 
        unsigned long long height_; 
        int _cached_size_; 
    }  _imageSizeParams;
}

@property (nonatomic, readonly) long long pixelsHigh;
@property (nonatomic, readonly) long long pixelsWide;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSpecification:(const void*)arg1;
- (bool)isEqual:(id)arg1;
- (long long)pixelsHigh;
- (long long)pixelsWide;

@end
