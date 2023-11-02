
@protocol TUConversationLinkDescriptorDataSource <NSObject>

@required

- (void)addConversationLinkDescriptors:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)addConversationLinkDescriptors:(NSArray *)arg1 error:(id*)arg2;
- (void)addOrUpdateConversationLinkDescriptors:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)addOrUpdateConversationLinkDescriptors:(NSArray *)arg1 error:(id*)arg2;
- (void)conversationLinkDescriptorCountWithPredicate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)conversationLinkDescriptorCountWithPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (<TUConversationLinkDescriptorDataSourceDelegate> *)conversationLinkDescriptorDataSourceDelegate;
- (void)conversationLinkDescriptorsWithPredicate:(void *)arg1 limit:(void *)arg2 offset:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, unsigned long long, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)conversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 limit:(unsigned long long)arg2 offset:(unsigned long long)arg3 error:(id*)arg4;
- (void)removeConversationLinkDescriptorsWithPredicate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)removeConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (void)setActivated:(void *)arg1 withRevision:(void *)arg2 forConversationLinkDescriptorsWithPredicate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: bool, long long, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)setActivated:(bool)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id*)arg4;
- (void)setConversationLinkDescriptorDataSourceDelegate:(id <TUConversationLinkDescriptorDataSourceDelegate>)arg1;
- (void)setExpirationDate:(void *)arg1 withRevision:(void *)arg2 forConversationLinkDescriptorsWithPredicate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSDate *, long long, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)setExpirationDate:(NSDate *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id*)arg4;
- (void)setInvitedHandles:(void *)arg1 withRevision:(void *)arg2 forConversationLinkDescriptorsWithPredicate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSSet *, long long, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)setInvitedHandles:(NSSet *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id*)arg4;
- (void)setName:(void *)arg1 withRevision:(void *)arg2 forConversationLinkDescriptorsWithPredicate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)setName:(NSString *)arg1 withRevision:(long long)arg2 forConversationLinkDescriptorsWithPredicate:(NSPredicate *)arg3 error:(id*)arg4;

@end
