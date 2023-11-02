
@interface WBSWebExtensionAPITabsObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIEventObjC * _onActivated;
    WBSWebExtensionAPIEventObjC * _onAttached;
    WBSWebExtensionAPIEventObjC * _onCreated;
    WBSWebExtensionAPIEventObjC * _onDetached;
    WBSWebExtensionAPIEventObjC * _onHighlighted;
    WBSWebExtensionAPIEventObjC * _onMoved;
    WBSWebExtensionAPIEventObjC * _onRemoved;
    WBSWebExtensionAPIEventObjC * _onReplaced;
    WBSWebExtensionAPIEventObjC * _onUpdated;
}

- (void).cxx_destruct;

@end
