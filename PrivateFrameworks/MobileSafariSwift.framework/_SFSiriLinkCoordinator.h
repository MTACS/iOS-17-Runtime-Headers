
@interface _SFSiriLinkCoordinator : NSObject {
    void actionPerformer;
}

@property (nonatomic) <_SFSiriLinkActionPerformer> *actionPerformer;

+ (void)setApplicationProxy:(id)arg1;

- (void).cxx_destruct;
- (id)actionPerformer;
- (id)changeReaderModeInteraction;
- (id)closeTabInteraction;
- (id)closeViewInteraction;
- (id)createNewBookmarkInteraction;
- (id)createNewPrivateTabInteraction;
- (id)createNewTabGroupInteraction;
- (id)createNewTabInteraction;
- (id)createReadingListItemInteraction;
- (id)init;
- (id)listenToPageSiriReaderInteraction;
- (id)navigateContinuousReadingListInteraction;
- (id)openBookmarkInteraction;
- (id)openReadingListItemInteraction;
- (id)openTabGroupInteraction;
- (id)openTabInteraction;
- (id)openViewInteraction;
- (void)setActionPerformer:(id)arg1;
- (id)tabEntityInteractionWithUUID:(id)arg1;
- (id)webSearchInteraction;

@end
