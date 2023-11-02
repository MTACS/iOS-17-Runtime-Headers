
@interface CNUICoreRecentsManager : NSObject {
    CRRecentContactsLibrary * _recentsLibrary;
    <CNScheduler> * _workQueue;
}

@property (nonatomic, readonly) CRRecentContactsLibrary *recentsLibrary;
@property (nonatomic, readonly) <CNScheduler> *workQueue;

+ (id)allHandlesToSearchForFromContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (id)handlesForContactProperties:(id)arg1;
+ (id)predicateForSearchingHandlesForAllSupportedKinds:(id)arg1;
+ (id)queryForHandles:(id)arg1;
+ (id)queryForHandles:(id)arg1 sorted:(bool)arg2;
+ (id)supportedPropertyDescriptions;
+ (id)supportedRecentsDomains;
+ (id)supportedRecentsKinds;
+ (id /* block */)transformForPropertyDescription:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithRecentsLibrary:(id)arg1 schedulerProvider:(id)arg2;
- (id)recentContactsMatchingAllPropertiesOfContact:(id)arg1;
- (id)recentContactsMatchingContactProperties:(id)arg1;
- (id)recentsContactsMatchingHandles:(id)arg1;
- (id)recentsContactsMatchingHandles:(id)arg1 sorted:(bool)arg2;
- (id)recentsLibrary;
- (id)removeRecents:(id)arg1;
- (void)removeRecents:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)removeRecentsWithIdentifiers:(id)arg1 domain:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)restoreRecents:(id)arg1;
- (id)sortedRecentHandlesMatchingAllPropertiesOfContact:(id)arg1;
- (id)workQueue;

@end
