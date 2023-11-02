
@interface MPArtworkRepresentationCollection : NSObject {
    unsigned long long  _bestRepresentationKinds;
    MPArtworkRepresentation * _imageRepresentation;
    MPArtworkRepresentation * _videoRepresentation;
}

@property (nonatomic) unsigned long long bestRepresentationKinds;
@property (nonatomic, retain) MPArtworkRepresentation *imageRepresentation;
@property (nonatomic, retain) MPArtworkRepresentation *videoRepresentation;

+ (id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2;
+ (id)collectionWithImageRepresentation:(id)arg1 videoRepresentation:(id)arg2 bestRepresentationKinds:(unsigned long long)arg3;

- (void).cxx_destruct;
- (unsigned long long)bestRepresentationKinds;
- (id)imageRepresentation;
- (bool)isBestRepresentationForKind:(long long)arg1;
- (void)resetForRepresentationKinds:(unsigned long long)arg1;
- (void)setBestRepresentationKinds:(unsigned long long)arg1;
- (void)setImageRepresentation:(id)arg1;
- (void)setVideoRepresentation:(id)arg1;
- (id)videoRepresentation;

@end
