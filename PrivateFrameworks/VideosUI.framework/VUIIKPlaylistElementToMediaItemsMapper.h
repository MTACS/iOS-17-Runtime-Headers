
@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject {
    unsigned long long  _resumeMenuBehavior;
}

@property (nonatomic) unsigned long long resumeMenuBehavior;

- (id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2;
- (id)_createClipMediaItemsIfTimeExists:(id)arg1 fromMediaElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2;
- (void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2;
- (bool)_shouldDisableResumeMenuForAsset:(id)arg1;
- (id)_storeAuxMediaItemForIKMediaElement:(id)arg1 isExtrasContent:(bool)arg2;
- (id)_storeMediaItemsForAdamID:(long long)arg1 IKMediaElement:(id)arg2;
- (id)init;
- (id)playlistForIKMediaElements:(id)arg1 isExtrasContent:(bool)arg2;
- (id)playlistForIKMediaElements:(id)arg1 withMediaItem:(id)arg2 isExtrasContent:(bool)arg3;
- (unsigned long long)resumeMenuBehavior;
- (void)setResumeMenuBehavior:(unsigned long long)arg1;

@end
