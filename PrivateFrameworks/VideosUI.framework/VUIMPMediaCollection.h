
@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {
    NSString * _coverArtImageIdentifier;
    MPMediaItemCollection * _mediaItemCollection;
}

@property (nonatomic, retain) MPMediaItemCollection *mediaItemCollection;

- (void).cxx_destruct;
- (id)HLSAudioCapability;
- (id)HLSColorCapability;
- (id)HLSResolution;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)assetController;
- (id)audioCapability;
- (id)colorCapability;
- (id)contentRating;
- (id)coverArtImageIdentifier;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5;
- (id)isLocal;
- (id)mediaItemCollection;
- (id)playedState;
- (id)resolution;
- (void)setMediaItemCollection:(id)arg1;
- (id)showIdentifier;

@end
