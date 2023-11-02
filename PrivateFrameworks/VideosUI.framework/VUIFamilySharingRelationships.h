
@interface VUIFamilySharingRelationships : NSObject {
    VUIFamilySharingPlaybackPositionRelationship * _playbackPosition;
    VUIFamilySharingRelationship * _season;
    VUIFamilySharingRelationship * _show;
}

@property (nonatomic, retain) VUIFamilySharingPlaybackPositionRelationship *playbackPosition;
@property (nonatomic, retain) VUIFamilySharingRelationship *season;
@property (nonatomic, retain) VUIFamilySharingRelationship *show;

- (void).cxx_destruct;
- (id)playbackPosition;
- (id)season;
- (void)setPlaybackPosition:(id)arg1;
- (void)setSeason:(id)arg1;
- (void)setShow:(id)arg1;
- (id)show;

@end
