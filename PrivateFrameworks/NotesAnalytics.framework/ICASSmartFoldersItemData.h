
@interface ICASSmartFoldersItemData : NSObject <AADataEventType> {
    NSNumber * _totalCountOfSmartFoldersWithAttachmentsFilter;
    NSNumber * _totalCountOfSmartFoldersWithChecklistsFilter;
    NSNumber * _totalCountOfSmartFoldersWithDateCreatedFilter;
    NSNumber * _totalCountOfSmartFoldersWithDateModifiedFilter;
    NSNumber * _totalCountOfSmartFoldersWithFoldersFilter;
    NSNumber * _totalCountOfSmartFoldersWithLockedNotesFilter;
    NSNumber * _totalCountOfSmartFoldersWithMentionsFilter;
    NSNumber * _totalCountOfSmartFoldersWithPinnedNotesFilter;
    NSNumber * _totalCountOfSmartFoldersWithQuickNotesFilter;
    NSNumber * _totalCountOfSmartFoldersWithSharedFilter;
    NSNumber * _totalCountOfSmartFoldersWithTagsFilter;
    NSNumber * _totalCountOfSmartFoldersWithUnknownFilter;
}

@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithAttachmentsFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithChecklistsFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithDateCreatedFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithDateModifiedFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithFoldersFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithLockedNotesFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithMentionsFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithPinnedNotesFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithQuickNotesFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithSharedFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithTagsFilter;
@property (nonatomic, readonly) NSNumber *totalCountOfSmartFoldersWithUnknownFilter;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTotalCountOfSmartFoldersWithTagsFilter:(id)arg1 totalCountOfSmartFoldersWithDateCreatedFilter:(id)arg2 totalCountOfSmartFoldersWithDateModifiedFilter:(id)arg3 totalCountOfSmartFoldersWithSharedFilter:(id)arg4 totalCountOfSmartFoldersWithMentionsFilter:(id)arg5 totalCountOfSmartFoldersWithChecklistsFilter:(id)arg6 totalCountOfSmartFoldersWithAttachmentsFilter:(id)arg7 totalCountOfSmartFoldersWithFoldersFilter:(id)arg8 totalCountOfSmartFoldersWithQuickNotesFilter:(id)arg9 totalCountOfSmartFoldersWithPinnedNotesFilter:(id)arg10 totalCountOfSmartFoldersWithLockedNotesFilter:(id)arg11 totalCountOfSmartFoldersWithUnknownFilter:(id)arg12;
- (id)toDict;
- (id)totalCountOfSmartFoldersWithAttachmentsFilter;
- (id)totalCountOfSmartFoldersWithChecklistsFilter;
- (id)totalCountOfSmartFoldersWithDateCreatedFilter;
- (id)totalCountOfSmartFoldersWithDateModifiedFilter;
- (id)totalCountOfSmartFoldersWithFoldersFilter;
- (id)totalCountOfSmartFoldersWithLockedNotesFilter;
- (id)totalCountOfSmartFoldersWithMentionsFilter;
- (id)totalCountOfSmartFoldersWithPinnedNotesFilter;
- (id)totalCountOfSmartFoldersWithQuickNotesFilter;
- (id)totalCountOfSmartFoldersWithSharedFilter;
- (id)totalCountOfSmartFoldersWithTagsFilter;
- (id)totalCountOfSmartFoldersWithUnknownFilter;

@end
