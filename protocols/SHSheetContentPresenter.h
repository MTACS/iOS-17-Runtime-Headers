
@protocol SHSheetContentPresenter <NSObject>

@required

- (NSString *)customTitleForActivityType:(NSString *)arg1;
- (void)didSelectCollaborativeAction;
- (void)didSelectSendCopyAction;
- (void)handleActionsEdit;
- (void)handleClose;
- (void)handleCollaborationOptions;
- (void)handleCustomHeaderButton;
- (void)handleInfoSuggestionPress:(NSString *)arg1;
- (void)handleNext;
- (void)handleOptions;
- (void)performActionActivityProxy:(id <SHSheetActivityProxy>)arg1;
- (void)performPeopleSuggestionProxy:(id <SHSheetPeopleSuggestionProxy>)arg1;
- (void)performShareActivityProxy:(id <SHSheetActivityProxy>)arg1;
- (void)removePeopleSuggestionProxy:(id <SHSheetPeopleSuggestionProxy>)arg1;

@end
