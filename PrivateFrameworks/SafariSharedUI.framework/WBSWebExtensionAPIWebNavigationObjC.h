
@interface WBSWebExtensionAPIWebNavigationObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebNavigationEventObjC * _onBeforeNavigate;
    WBSWebExtensionAPIWebNavigationEventObjC * _onCommitted;
    WBSWebExtensionAPIWebNavigationEventObjC * _onCompleted;
    WBSWebExtensionAPIWebNavigationEventObjC * _onDOMContentLoaded;
    WBSWebExtensionAPIWebNavigationEventObjC * _onErrorOccurred;
}

- (void).cxx_destruct;

@end
