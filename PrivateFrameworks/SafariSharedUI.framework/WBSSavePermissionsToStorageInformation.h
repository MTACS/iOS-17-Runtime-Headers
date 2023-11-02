
@interface WBSSavePermissionsToStorageInformation : NSObject {
    bool  _permissionsWereUpdatedDueToAnExternalChange;
    WBSWebExtensionData * _webExtension;
}

@property (nonatomic, readonly) bool permissionsWereUpdatedDueToAnExternalChange;
@property (nonatomic, readonly) WBSWebExtensionData *webExtension;

- (void).cxx_destruct;
- (id)initWithWebExtension:(id)arg1 permissionsWereUpdatedDueToAnExternalChange:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)permissionsWereUpdatedDueToAnExternalChange;
- (id)webExtension;

@end
