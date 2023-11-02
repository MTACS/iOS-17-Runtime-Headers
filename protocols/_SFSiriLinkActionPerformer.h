
@protocol _SFSiriLinkActionPerformer <NSObject>

@required

- (bool)canReadActiveLanguage;
- (bool)canReadThis;
- (void)closeStartPage;
- (void)closeTabWithUUID:(NSUUID *)arg1;
- (void)createNewBookmarkWithTitle:(NSString *)arg1;
- (void)createNewPrivateTab;
- (void)createNewTab;
- (void)createNewTabGroupWithTitle:(NSString *)arg1;
- (void)createReadingListItem;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)arg1;
- (void)openBookmarkWithUUIDString:(NSString *)arg1;
- (void)openStartPage;
- (void)openTabGroupOfKind:(long long)arg1 uuidString:(NSString *)arg2;
- (void)openTabWithUUID:(NSUUID *)arg1;
- (void)performSearchUsingQuery:(NSString *)arg1;
- (void)setReaderModeEnabled:(bool)arg1;
- (void)setView:(unsigned long long)arg1 visible:(bool)arg2;
- (void)siriReadThisVocalInvocation;
- (void)toggleReaderMode;

@end
