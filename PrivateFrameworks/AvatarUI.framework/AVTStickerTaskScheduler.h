
@interface AVTStickerTaskScheduler : NSObject <AVTStickerTaskScheduler> {
    NSArray * _allAvatarRecordIdentifiers;
    <AVTUILogger> * _logger;
    <AVTAvatarRecordDataSource> * _recordDataSource;
    NSString * _selectedAvatarRecordIdentifier;
    NSArray * _sortedVisibleIndexPaths;
    NSObject<OS_dispatch_queue> * _stateLock;
    NSMutableDictionary * _stickerPickerBacklogTasks;
    NSMutableDictionary * _stickerPickerTasks;
    NSMutableDictionary * _stickerSheetPlaceholderTasks;
    NSMutableDictionary * _stickerSheetsTasks;
}

@property (retain) NSArray *allAvatarRecordIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTAvatarRecordDataSource> *recordDataSource;
@property (retain) NSString *selectedAvatarRecordIdentifier;
@property (retain) NSArray *sortedVisibleIndexPaths;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateLock;
@property (nonatomic, readonly) NSMutableDictionary *stickerPickerBacklogTasks;
@property (nonatomic, readonly) NSMutableDictionary *stickerPickerTasks;
@property (nonatomic, readonly) NSMutableDictionary *stickerSheetPlaceholderTasks;
@property (nonatomic, readonly) NSMutableDictionary *stickerSheetsTasks;
@property (readonly) Class superclass;

+ (id)schedulerWithRecordDataSource:(id)arg1;

- (void).cxx_destruct;
- (id)allAvatarRecordIdentifiers;
- (void)cancelAllTasks;
- (void)cancelPickerTask:(id /* block */)arg1 avatarRecordIdentifier:(id)arg2;
- (void)cancelStickerSheetTasksForAvatarRecordIdentifier:(id)arg1;
- (void)cancelTask:(id /* block */)arg1;
- (void)didCompleteTask:(id)arg1;
- (id)initWithEnvironment:(id)arg1 recordDataSource:(id)arg2;
- (id)logger;
- (void)lowerStickerPickerTaskPriority:(id /* block */)arg1 avatarRecordIdentifier:(id)arg2;
- (void)lowerTaskPriority:(id /* block */)arg1;
- (id)nextPickerThumbnailFromTasksBacklogStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;
- (id)nextPickerThumbnailFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;
- (id)nextSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;
- (id)nextSheetPlaceHolderFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;
- (id)nextSheetStickerFromTasksStorage:(id)arg1 allAvatarRecordIdentifiers:(id)arg2;
- (id)nextTaskToRunFromStickerPickerTasks:(id)arg1 stickerPickerBacklogStorage:(id)arg2 stickerSheetPlaceholderTasks:(id)arg3 stickerSheetsTasks:(id)arg4;
- (id)nextVisibleSelectedSheetStickerFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2 visibleIndexPaths:(id)arg3;
- (void)performStateWork:(id /* block */)arg1;
- (id)recordDataSource;
- (void)reloadData;
- (void)scheduleStickerTask:(id)arg1;
- (void)scheduleTask:(id /* block */)arg1;
- (id)selectedAvatarRecordIdentifier;
- (id)selectedPickerThumbnailFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;
- (id)selectedSheetPlaceholderFromTasksStorage:(id)arg1 selectedAvatarRecordIdentifier:(id)arg2;
- (void)setAllAvatarRecordIdentifiers:(id)arg1;
- (void)setSelectedAvatarRecordIdentifier:(id)arg1;
- (void)setSortedVisibleIndexPaths:(id)arg1;
- (void)setVisibleIndexPaths:(id)arg1;
- (id)sortedVisibleIndexPaths;
- (void)startTask:(id)arg1;
- (id)stateLock;
- (id)stickerPickerBacklogTasks;
- (id)stickerPickerTasks;
- (id)stickerSheetPlaceholderTasks;
- (id)stickerSheetsTasks;

@end
