
@interface SiriReaderConnection : NSObject {
    NSXPCConnection * _connection;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)endMediaSessionForIdentifier:(id)arg1;
- (long long)getPlaybackStatusForIdentifier:(id)arg1;
- (id)init;
- (void)pausePlaybackForIdentifier:(id)arg1;
- (void)readText:(id)arg1 textBody:(id)arg2 textIdentifier:(id)arg3 textLocale:(id)arg4 textLeadingImage:(id)arg5;
- (void)readText:(id)arg1 textBody:(id)arg2 textIdentifier:(id)arg3 textLocale:(id)arg4 textLeadingImage:(id)arg5 activationSource:(long long)arg6;
- (id)readerProtocol;
- (void)resumePlaybackForIdentifier:(id)arg1;

@end
