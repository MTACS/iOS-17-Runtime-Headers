
@interface VUIMPMediaEntityImageLoadParams : NSObject <VUIImageLoadParams> {
    MPArtworkCatalog * _artworkCatalog;
    bool  _calculatedIdentifier;
    NSString * _imageIdentifier;
    unsigned long long  _imageType;
    MPMediaItem * _mediaItem;
}

@property (nonatomic, retain) MPArtworkCatalog *artworkCatalog;
@property (nonatomic) bool calculatedIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageIdentifier;
@property (nonatomic, readonly) unsigned long long imageType;
@property (nonatomic, retain) MPMediaItem *mediaItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)artworkCatalog;
- (bool)calculatedIdentifier;
- (id)description;
- (unsigned long long)hash;
- (id)imageIdentifier;
- (unsigned long long)imageType;
- (id)init;
- (id)initWithMediaItem:(id)arg1 andImageType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaItem;
- (void)setArtworkCatalog:(id)arg1;
- (void)setCalculatedIdentifier:(bool)arg1;
- (void)setMediaItem:(id)arg1;

@end
