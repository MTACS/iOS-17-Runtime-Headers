
@interface WBSWebExtensionAPIWebRequestObjC : WBSWebExtensionAPIObject {
    WBSWebExtensionAPIWebRequestEventObjC * _onAuthRequired;
    WBSWebExtensionAPIWebRequestEventObjC * _onBeforeRedirect;
    WBSWebExtensionAPIWebRequestEventObjC * _onBeforeRequest;
    WBSWebExtensionAPIWebRequestEventObjC * _onBeforeSendHeaders;
    WBSWebExtensionAPIWebRequestEventObjC * _onCompleted;
    WBSWebExtensionAPIWebRequestEventObjC * _onErrorOccurred;
    WBSWebExtensionAPIWebRequestEventObjC * _onHeadersReceived;
    WBSWebExtensionAPIWebRequestEventObjC * _onResponseStarted;
    WBSWebExtensionAPIWebRequestEventObjC * _onSendHeaders;
}

- (void).cxx_destruct;

@end
