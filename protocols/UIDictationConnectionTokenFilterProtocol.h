
@protocol UIDictationConnectionTokenFilterProtocol <NSObject>

@required

- (void)dictationConnection:(UIDictationConnection *)arg1 didFilterTokensWithFilterState:(id)arg2 forFinalize:(bool)arg3;
- (void)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 processFilteredToken:(UIDictationToken *)arg3 forFinalize:(bool)arg4;
- (bool)dictationConnection:(UIDictationConnection *)arg1 filterState:(id)arg2 shouldCheckpointAtToken:(UIDictationToken *)arg3;
- (id)dictationConnection:(UIDictationConnection *)arg1 willFilterTokensWithLanguageModel:(NSString *)arg2 forFinalize:(bool)arg3;
- (struct __CFString { }*)resultTransformForLanguageModel:(NSString *)arg1;

@end
