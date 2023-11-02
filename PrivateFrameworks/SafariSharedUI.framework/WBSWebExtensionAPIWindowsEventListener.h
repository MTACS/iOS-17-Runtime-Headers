
@interface WBSWebExtensionAPIWindowsEventListener : NSObject {
    WBSJSCallbackHandler * _callback;
    bool  _wantsEventsForNormalWindows;
    bool  _wantsEventsForPopupWindows;
}

- (void).cxx_destruct;

@end
