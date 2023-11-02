
@interface MusicKit_SoftLinking_MPModelLibraryPlaylistEditController : NSObject {
    MPModelLibraryPlaylistEditController * _underlyingEditController;
}

@property (nonatomic) bool addInsertedTracksToLibrary;
@property (nonatomic, retain) NSString *coverArtworkRecipe;
@property (getter=isCuratorPlaylist, nonatomic, retain) NSNumber *curatorPlaylist;
@property (nonatomic, readonly, copy) MusicKit_SoftLinking_MPSectionedCollection *currentTrackList;
@property (nonatomic, copy) NSString *descriptionText;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) MusicKit_SoftLinking_MPModelObject *parentPlaylist;
@property (getter=isPublicPlaylist, nonatomic, retain) NSNumber *publicPlaylist;
@property (nonatomic, readonly) id underlyingEditController;
@property (nonatomic) struct CGImage { }*userImage;
@property (getter=isVisiblePlaylist, nonatomic, retain) NSNumber *visiblePlaylist;

+ (id)playlistDidChangeNotificationName;

- (void).cxx_destruct;
- (void)_handlePlaylistDidChangeNotification:(id)arg1;
- (bool)addInsertedTracksToLibrary;
- (void)appendModelObject:(id)arg1 completion:(id /* block */)arg2;
- (void)beginEditingWithCompletion:(id /* block */)arg1;
- (void)commitWithCompletion:(id /* block */)arg1;
- (id)coverArtworkRecipe;
- (id)currentTrackList;
- (void)dealloc;
- (id)descriptionText;
- (id)initWithPlaylist:(id)arg1 initialTracklist:(id)arg2 library:(id)arg3;
- (id)initWithPlaylist:(id)arg1 underlyingSectionedCollection:(id)arg2 library:(id)arg3;
- (void)insertModelObject:(id)arg1 afterEntry:(id)arg2 completion:(id /* block */)arg3;
- (id)isCuratorPlaylist;
- (id)isPublicPlaylist;
- (id)isVisiblePlaylist;
- (void)moveEntry:(id)arg1 afterEntry:(id)arg2;
- (id)name;
- (id)parentPlaylist;
- (void)removeEntry:(id)arg1;
- (void)setAddInsertedTracksToLibrary:(bool)arg1;
- (void)setCoverArtworkRecipe:(id)arg1;
- (void)setCuratorPlaylist:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentPlaylist:(id)arg1;
- (void)setPublicPlaylist:(id)arg1;
- (void)setUserImage:(struct CGImage { }*)arg1;
- (void)setVisiblePlaylist:(id)arg1;
- (id)underlyingEditController;
- (struct CGImage { }*)userImage;

@end
