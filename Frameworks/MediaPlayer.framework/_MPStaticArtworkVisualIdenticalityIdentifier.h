
@interface _MPStaticArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality> {
    NSString * _imageArtworkIdentifier;
    NSString * _videoArtworkIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *imageArtworkIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *videoArtworkIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)imageArtworkIdentifier;
- (bool)isEqual:(id)arg1;
- (void)setImageArtworkIdentifier:(id)arg1;
- (void)setVideoArtworkIdentifier:(id)arg1;
- (id)stringRepresentation;
- (id)videoArtworkIdentifier;

@end
