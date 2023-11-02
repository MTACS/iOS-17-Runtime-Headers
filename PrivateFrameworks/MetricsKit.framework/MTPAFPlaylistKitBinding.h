
@interface MTPAFPlaylistKitBinding : NSObject {
    MTPAFKit * _pafKit;
    MTPAFPlaylist * _playlist;
}

@property (nonatomic, retain) MTPAFKit *pafKit;
@property (nonatomic, retain) MTPAFPlaylist *playlist;

- (void).cxx_destruct;
- (id)pafKit;
- (id)playlist;
- (void)setPafKit:(id)arg1;
- (void)setPlaylist:(id)arg1;

@end
