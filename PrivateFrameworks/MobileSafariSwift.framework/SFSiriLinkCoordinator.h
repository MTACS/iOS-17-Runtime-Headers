
@interface SFSiriLinkCoordinator : NSObject <_SFSiriLinkActionPerformer> {
    <SFSiriLinkActionPerformer> * _actionPerformer;
    _SFSiriLinkCoordinator * _internal;
}

@property (nonatomic) <SFSiriLinkActionPerformer> *actionPerformer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)setApplicationProxy:(id)arg1;

- (void).cxx_destruct;
- (id)actionPerformer;
- (bool)canReadActiveLanguage;
- (bool)canReadThis;
- (id)changeReaderModeInteraction;
- (void)closeStartPage;
- (id)closeTabInteraction;
- (void)closeTabWithUUID:(id)arg1;
- (id)closeViewInteraction;
- (id)createNewBookmarkInteraction;
- (void)createNewBookmarkWithTitle:(id)arg1;
- (void)createNewPrivateTab;
- (id)createNewPrivateTabInteraction;
- (void)createNewTab;
- (id)createNewTabGroupInteraction;
- (void)createNewTabGroupWithTitle:(id)arg1;
- (id)createNewTabInteraction;
- (void)createReadingListItem;
- (id)createReadingListItemInteraction;
- (id)init;
- (id)listenToPageSiriReaderInteraction;
- (id)navigateContinuousReadingListInteraction;
- (void)navigateContinuousReadingListToDirection:(unsigned long long)arg1;
- (id)openBookmarkInteraction;
- (void)openBookmarkWithUUIDString:(id)arg1;
- (id)openReadingListItemInteraction;
- (void)openStartPage;
- (id)openTabGroupInteraction;
- (void)openTabGroupOfKind:(long long)arg1 uuidString:(id)arg2;
- (id)openTabInteraction;
- (void)openTabWithUUID:(id)arg1;
- (id)openViewInteraction;
- (void)performSearchUsingQuery:(id)arg1;
- (void)setActionPerformer:(id)arg1;
- (void)setReaderModeEnabled:(bool)arg1;
- (void)setView:(unsigned long long)arg1 visible:(bool)arg2;
- (void)siriReadThisVocalInvocation;
- (id)tabEntityInteractionWithUUID:(id)arg1;
- (void)toggleReaderMode;
- (id)webSearchInteraction;

@end
