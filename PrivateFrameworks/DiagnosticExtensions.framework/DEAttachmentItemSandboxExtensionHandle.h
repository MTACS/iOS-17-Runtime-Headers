
@interface DEAttachmentItemSandboxExtensionHandle : NSObject {
    long long  __handle;
    bool  _didInit;
    NSURL * _itemURL;
}

@property (readonly) long long _handle;
@property (nonatomic) bool didInit;
@property (nonatomic, retain) NSURL *itemURL;

- (void).cxx_destruct;
- (long long)_handle;
- (void)dealloc;
- (bool)didInit;
- (id)initWithSandboxExtensionToken:(id)arg1 itemURL:(id)arg2 errorOut:(id*)arg3;
- (id)itemURL;
- (void)setDidInit:(bool)arg1;
- (void)setItemURL:(id)arg1;

@end
