
@interface ICNoteListSortUtilities : NSObject

+ (void)clearCache;
+ (long long)currentNoteListSortType;
+ (id)dateForCurrentSortTypeAccessibilityStringForNote:(id)arg1 folderNoteSortType:(id)arg2;
+ (id)dateForCurrentSortTypeForNote:(id)arg1 folderNoteSortType:(id)arg2;
+ (id)descriptionForNoteListSortType:(long long)arg1;
+ (long long)folderSortOrderForNoteListSortType:(long long)arg1;
+ (bool)isMenuItemCurrentSortTypeForTag:(long long)arg1;
+ (id)legacySortDescriptorsForType:(long long)arg1;
+ (id)legacySortDescriptorsForType:(long long)arg1 ascending:(bool)arg2;
+ (void)setCurrentNoteListSortType:(long long)arg1;
+ (void)setCurrentNoteListSortTypeByTag:(long long)arg1;
+ (id)sortDescriptorsForCurrentType;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(bool)arg1;
+ (id)sortDescriptorsForCurrentTypeIncludingPinnedNotes:(bool)arg1 folderNoteSortType:(id)arg2;
+ (id)sortDescriptorsForPinnedNotes;
+ (id)sortDescriptorsForType:(long long)arg1;
+ (id)sortDescriptorsForType:(long long)arg1 ascending:(bool)arg2;
+ (long long)sortTypeForFolderNoteOrder:(long long)arg1;
+ (long long)sortTypeForTag:(long long)arg1;
+ (long long)tagForSortType:(long long)arg1;

@end
