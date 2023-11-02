
@interface NDODefaultFolllowUpProvider : NSObject <NDOFollowUpProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 error:(id*)arg2;
- (id)pendingFollowUpItems:(id*)arg1;
- (bool)postFollowUpItem:(id)arg1 error:(id*)arg2;

@end
