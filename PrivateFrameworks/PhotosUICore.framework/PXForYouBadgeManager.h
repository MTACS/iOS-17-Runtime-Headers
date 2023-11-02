
@interface PXForYouBadgeManager : PXObservable <PXMutableForYouBadgeManager, PXPhotoLibraryUIChangeObserver> {
    PHFetchResult * _memories;
    PHPhotoLibrary * _photoLibrary;
    unsigned long long  _unreadBadgeCount;
    unsigned long long  _unreadMemoriesCount;
    unsigned long long  _unreadSharedAlbumCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PHFetchResult *memories;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long unreadBadgeCount;
@property (nonatomic) unsigned long long unreadMemoriesCount;
@property (nonatomic) unsigned long long unreadSharedAlbumCount;

+ (id)lastSeenBadgeDate;
+ (id)lastSeenBadgeDateAccessor;
+ (void)setLastSeenBadgeDate:(id)arg1;

- (void).cxx_destruct;
- (void)_didFinishPostingNotifications:(id)arg1;
- (void)_stopListeningForChanges;
- (void)_updateUnreadBadgeCount;
- (void)_updateUnreadSharedAlbumsCount;
- (void)dealloc;
- (id)initWithPhotoLibrary:(id)arg1;
- (id)memories;
- (id)mutableChangeObject;
- (void)performChanges:(id /* block */)arg1;
- (id)photoLibrary;
- (void)setMemories:(id)arg1;
- (void)setUnreadBadgeCount:(unsigned long long)arg1;
- (void)setUnreadMemoriesCount:(unsigned long long)arg1;
- (void)setUnreadSharedAlbumCount:(unsigned long long)arg1;
- (void)startListeningForChanges;
- (unsigned long long)unreadBadgeCount;
- (unsigned long long)unreadMemoriesCount;
- (unsigned long long)unreadSharedAlbumCount;

@end
