
@interface PasswordManagerUI.PMPasswordManager : _TtCs12_SwiftObject {
    void accountStore;
    void appState;
    void autoFillQuirksManager;
    void cachedRecentlyDeletedSavedAccounts;
    void cachedSavedAccounts;
    void cachedWarnings;
    void isIgnoringAccountStoreChangeNotifications;
    void lastAddedAccountID;
    void lastModifiedAccountIDs;
    void passwordWarningManager;
    void queueForLoadingAccounts;
}

- (void)accountStoreDidChange;

@end
