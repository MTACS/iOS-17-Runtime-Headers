
@interface WebCDMSessionAVContentKeySessionDelegate : NSObject <AVContentKeySessionDelegate> {
    void * m_parent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;
- (id)initWithParent:(void*)arg1;
- (void)invalidate;

@end
