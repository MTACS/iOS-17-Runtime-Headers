
@interface MRNowPlayingArtwork : NSObject

@property (nonatomic, readonly) bool hasArtworkData;
@property (nonatomic, readonly) unsigned int type;

- (id)copyImageData;
- (bool)hasArtworkData;
- (unsigned int)type;

@end
