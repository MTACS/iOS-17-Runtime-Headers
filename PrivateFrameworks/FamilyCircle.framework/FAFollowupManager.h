
@interface FAFollowupManager : NSObject

+ (id)_followupManager;
+ (void)synchronizeFollowupWithPayload:(id)arg1 altDSID:(id)arg2;
+ (void)tearDownFollowupItemWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
+ (void)teardownFollowUpWithContext:(id)arg1 completion:(id /* block */)arg2;
+ (void)teardownPendingFollowup;

@end
