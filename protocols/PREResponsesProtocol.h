
@protocol PREResponsesProtocol

@required

- (void)preResponseItemsForMessage:(void *)arg1 maximumResponses:(void *)arg2 conversationTurns:(void *)arg3 context:(void *)arg4 time:(void *)arg5 language:(void *)arg6 recipientHandles:(void *)arg7 modelFilePath:(void *)arg8 modelConfigPath:(void *)arg9 espressoBinFilePath:(void *)arg10 vocabFilePath:(void *)arg11 registerDisplayed:(void *)arg12 includeCustomResponses:(void *)arg13 includeResponsesToRobots:(void *)arg14 completion:(void *)arg15; // needs 15 arg types, found 21: NSString *, unsigned long long, NSArray *, NSString *, NSDate *, NSString *, NSArray *, NSString *, NSString *, NSString *, NSString *, bool, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)predictForMessage:(void *)arg1 conversationTurns:(void *)arg2 language:(void *)arg3 plistPath:(void *)arg4 espressoBinPath:(void *)arg5 vocabPath:(void *)arg6 heads:(void *)arg7 completion:(void *)arg8; // needs 8 arg types, found 14: NSString *, NSArray *, NSString *, NSString *, NSString *, NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)registerResponse:(NSString *)arg1 position:(NSNumber *)arg2 isCanned:(bool)arg3 isUsingQuickResponses:(bool)arg4 locale:(NSString *)arg5 modelConfigPath:(NSString *)arg6 vocabPath:(NSString *)arg7;

@end
