
@interface RemindersUICore.TTRSharedWithYouProvider : NSObject <SWHighlightCenterDelegate> {
    void backgroundQueue;
    void containerForAccountID;
    void customFetchShareForSharedList;
    void highlightCenter;
    void invocationQueue;
    void shareOperationManager;
    void store;
}

- (void).cxx_destruct;
- (void)highlightCenterHighlightsDidChange:(id)arg1;
- (id)init;

@end
