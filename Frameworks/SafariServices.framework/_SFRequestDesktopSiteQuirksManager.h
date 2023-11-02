
@interface _SFRequestDesktopSiteQuirksManager : NSObject {
    WBSRemotePlistController * _remotePlistController;
    bool  _supportsDesktopClassBrowsing;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)getAllQuirkValuesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (void)quirksValueForDomain:(id)arg1 completionHandler:(id /* block */)arg2;

@end
