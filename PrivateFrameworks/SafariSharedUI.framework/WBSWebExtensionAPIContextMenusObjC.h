
@interface WBSWebExtensionAPIContextMenusObjC : WBSWebExtensionAPIObject {
    NSMutableDictionary * _callbacks;
    WBSWebExtensionAPIEventObjC * _onClicked;
}

- (void).cxx_destruct;
- (void)initWithExtensionIdentifier:(id)arg1 runtime:(id)arg2 isForMainWorld:(bool)arg3;

@end
