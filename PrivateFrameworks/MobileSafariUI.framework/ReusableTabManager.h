
@interface ReusableTabManager : WBReusableTabManager

- (void)enumerateReusableTabDocuments:(id /* block */)arg1;
- (id)faviconForUUID:(id)arg1;
- (id)reusableTabDocumentWithUUID:(id)arg1;
- (id)tabGroupManager;
- (id)windowStates;

@end
