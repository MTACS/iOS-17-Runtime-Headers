
@interface PREResponsesServerRequestHandler : NSObject <PREResponsesProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PREResponsesProtocol> * _clientProxy;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (id)preResponseItemArrayFromQuickResponses:(id)arg1;
- (void)preResponseItemsForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 conversationTurns:(id)arg3 context:(id)arg4 time:(id)arg5 language:(id)arg6 recipientHandles:(id)arg7 modelFilePath:(id)arg8 modelConfigPath:(id)arg9 espressoBinFilePath:(id)arg10 vocabFilePath:(id)arg11 registerDisplayed:(bool)arg12 includeCustomResponses:(bool)arg13 includeResponsesToRobots:(bool)arg14 completion:(id /* block */)arg15;
- (void)predictForMessage:(id)arg1 conversationTurns:(id)arg2 language:(id)arg3 plistPath:(id)arg4 espressoBinPath:(id)arg5 vocabPath:(id)arg6 heads:(id)arg7 completion:(id /* block */)arg8;
- (void)registerResponse:(id)arg1 position:(id)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(id)arg5 modelConfigPath:(id)arg6 vocabPath:(id)arg7;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;

@end
