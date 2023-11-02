
@interface WBSOfflineSearchRemoteDisablementManager : NSObject {
    WBSRemotePlistController * _remotePlistController;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)areOfflineSearchSuggestionsDisabled:(id /* block */)arg1;
- (id)init;

@end
