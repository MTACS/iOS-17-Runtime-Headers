
@interface _ICNAFolderReportToAccount : NSObject {
    unsigned long long  _countOfCustomSmartFolders;
    unsigned long long  _countOfFolders;
    unsigned long long  _countOfSmartFoldersWithAttachmentsFilter;
    unsigned long long  _countOfSmartFoldersWithChecklistsFilter;
    unsigned long long  _countOfSmartFoldersWithDateCreatedFilter;
    unsigned long long  _countOfSmartFoldersWithDateModifiedFilter;
    unsigned long long  _countOfSmartFoldersWithFoldersFilter;
    unsigned long long  _countOfSmartFoldersWithLockedNotesFilter;
    unsigned long long  _countOfSmartFoldersWithMentionsFilter;
    unsigned long long  _countOfSmartFoldersWithPinnedNotesFilter;
    unsigned long long  _countOfSmartFoldersWithQuickNotesFilter;
    unsigned long long  _countOfSmartFoldersWithSharedFilter;
    unsigned long long  _countOfSmartFoldersWithTagsFilter;
    unsigned long long  _countOfSmartFoldersWithUnknownFilter;
    int  _folderCollaborationMatrix;
}

@property (nonatomic) unsigned long long countOfCustomSmartFolders;
@property (nonatomic) unsigned long long countOfFolders;
@property (nonatomic) unsigned long long countOfSmartFoldersWithAttachmentsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithChecklistsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithDateCreatedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithDateModifiedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithFoldersFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithLockedNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithMentionsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithPinnedNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithQuickNotesFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithSharedFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithTagsFilter;
@property (nonatomic) unsigned long long countOfSmartFoldersWithUnknownFilter;

- (unsigned long long)countOfCustomSmartFolders;
- (unsigned long long)countOfFolders;
- (unsigned long long)countOfFoldersWithCollaborationStatus:(long long)arg1 collaborationType:(long long)arg2;
- (unsigned long long)countOfSmartFoldersWithAttachmentsFilter;
- (unsigned long long)countOfSmartFoldersWithChecklistsFilter;
- (unsigned long long)countOfSmartFoldersWithDateCreatedFilter;
- (unsigned long long)countOfSmartFoldersWithDateModifiedFilter;
- (unsigned long long)countOfSmartFoldersWithFoldersFilter;
- (unsigned long long)countOfSmartFoldersWithLockedNotesFilter;
- (unsigned long long)countOfSmartFoldersWithMentionsFilter;
- (unsigned long long)countOfSmartFoldersWithPinnedNotesFilter;
- (unsigned long long)countOfSmartFoldersWithQuickNotesFilter;
- (unsigned long long)countOfSmartFoldersWithSharedFilter;
- (unsigned long long)countOfSmartFoldersWithTagsFilter;
- (unsigned long long)countOfSmartFoldersWithUnknownFilter;
- (id)init;
- (void)setCountOfCustomSmartFolders:(unsigned long long)arg1;
- (void)setCountOfFolders:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithAttachmentsFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithChecklistsFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithDateCreatedFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithDateModifiedFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithFoldersFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithLockedNotesFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithMentionsFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithPinnedNotesFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithQuickNotesFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithSharedFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithTagsFilter:(unsigned long long)arg1;
- (void)setCountOfSmartFoldersWithUnknownFilter:(unsigned long long)arg1;
- (void)updateFolderCollaborationMatrixWithCollaborationStatus:(id)arg1 collaborationType:(id)arg2;

@end
