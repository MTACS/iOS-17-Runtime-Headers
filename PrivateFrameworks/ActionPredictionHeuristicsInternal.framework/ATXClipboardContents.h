
@interface ATXClipboardContents : NSObject {
    ATXHeuristicDevice * _device;
    PBServerConnection * _pasteboardServerConnection;
}

+ (void)_observeLocalPasteboard;

- (void).cxx_destruct;
- (void)contentsWithCallback:(id /* block */)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 pasteboardConnection:(id)arg2;

@end
