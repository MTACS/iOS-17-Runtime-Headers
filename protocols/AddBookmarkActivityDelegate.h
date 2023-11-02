
@protocol AddBookmarkActivityDelegate <_SFActivityDelegate>

@required

- (bool)addBookmarkActivityCanSaveBookmarkChanges:(_SFActivity *)arg1;
- (void)addBookmarkActivityFailedToAcquireBookmarkLock:(_SFActivity *)arg1;
- (<TabGroupProvider> *)addBookmarkActivityTabGroupProvider;

@end
