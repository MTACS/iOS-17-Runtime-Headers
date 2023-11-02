
@interface PLCloudDownloadBatchDetails : NSObject {
    NSArray * _cmmUUIDsToNotify;
    NSSet * _confirmedResourceIDs;
    bool  _hasResourceChanges;
    bool  _needsWidgetTimelineReload;
    long long  _numberOfPhotos;
    long long  _numberOfVideos;
}

@property (nonatomic, copy) NSArray *cmmUUIDsToNotify;
@property (nonatomic, copy) NSSet *confirmedResourceIDs;
@property (nonatomic) bool hasResourceChanges;
@property (nonatomic) bool needsWidgetTimelineReload;
@property (nonatomic) long long numberOfPhotos;
@property (nonatomic) long long numberOfVideos;

- (void).cxx_destruct;
- (id)cmmUUIDsToNotify;
- (id)confirmedResourceIDs;
- (bool)hasResourceChanges;
- (bool)needsWidgetTimelineReload;
- (long long)numberOfPhotos;
- (long long)numberOfVideos;
- (void)setCmmUUIDsToNotify:(id)arg1;
- (void)setConfirmedResourceIDs:(id)arg1;
- (void)setHasResourceChanges:(bool)arg1;
- (void)setNeedsWidgetTimelineReload:(bool)arg1;
- (void)setNumberOfPhotos:(long long)arg1;
- (void)setNumberOfVideos:(long long)arg1;
- (void)unionBatchDetails:(id)arg1;

@end
