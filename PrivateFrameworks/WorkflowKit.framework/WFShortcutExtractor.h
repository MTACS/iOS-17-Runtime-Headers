
@interface WFShortcutExtractor : NSObject {
    bool  _allowsOldFormatFile;
    WFFileRepresentation * _extractingFile;
    NSURL * _extractingURL;
    long long  _fileAdoptionOptions;
    bool  _skipsMaliciousScanning;
    NSString * _sourceApplication;
    NSString * _suggestedName;
}

@property (nonatomic, readonly) bool allowsOldFormatFile;
@property (nonatomic, readonly) WFFileRepresentation *extractingFile;
@property (nonatomic, readonly) NSURL *extractingURL;
@property (nonatomic, readonly) long long fileAdoptionOptions;
@property (nonatomic, readonly) bool skipsMaliciousScanning;
@property (nonatomic, readonly, copy) NSString *sourceApplication;
@property (nonatomic, readonly, copy) NSString *suggestedName;

+ (bool)isShortcutFileType:(id)arg1;

- (void).cxx_destruct;
- (bool)allowsOldFormatFile;
- (void)extractRemoteShortcutFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)extractShortcutFile:(id)arg1 completion:(id /* block */)arg2;
- (void)extractShortcutWithCompletion:(id /* block */)arg1;
- (void)extractSignedShortcutFile:(id)arg1 allowsRetryIfExpired:(bool)arg2 completion:(id /* block */)arg3;
- (void)extractSignedShortcutFile:(id)arg1 completion:(id /* block */)arg2;
- (void)extractWorkflowFile:(id)arg1 completion:(id /* block */)arg2;
- (void)extractWorkflowFile:(id)arg1 shortcutName:(id)arg2 shortcutFileContentType:(long long)arg3 iCloudIdentifier:(id)arg4 completion:(id /* block */)arg5;
- (id)extractingFile;
- (id)extractingURL;
- (long long)fileAdoptionOptions;
- (id)initWithFile:(id)arg1 allowsOldFormatFile:(bool)arg2 skipsMaliciousScanning:(bool)arg3 suggestedName:(id)arg4 sourceApplication:(id)arg5;
- (id)initWithFile:(id)arg1 allowsOldFormatFile:(bool)arg2 suggestedName:(id)arg3 sourceApplication:(id)arg4;
- (id)initWithFile:(id)arg1 suggestedName:(id)arg2 sourceApplication:(id)arg3;
- (id)initWithURL:(id)arg1 allowsOldFormatFile:(bool)arg2 fileAdoptionOptions:(long long)arg3 suggestedName:(id)arg4 sourceApplication:(id)arg5;
- (id)initWithURL:(id)arg1 allowsOldFormatFile:(bool)arg2 skipsMaliciousScanning:(bool)arg3 fileAdoptionOptions:(long long)arg4 suggestedName:(id)arg5 sourceApplication:(id)arg6;
- (id)initWithURL:(id)arg1 allowsOldFormatFile:(bool)arg2 skipsMaliciousScanning:(bool)arg3 suggestedName:(id)arg4 sourceApplication:(id)arg5;
- (id)initWithURL:(id)arg1 allowsOldFormatFile:(bool)arg2 suggestedName:(id)arg3 sourceApplication:(id)arg4;
- (id)initWithURL:(id)arg1 fileAdoptionOptions:(long long)arg2 suggestedName:(id)arg3 sourceApplication:(id)arg4;
- (id)initWithURL:(id)arg1 suggestedName:(id)arg2 sourceApplication:(id)arg3;
- (bool)skipsMaliciousScanning;
- (id)sourceApplication;
- (id)suggestedName;

@end
