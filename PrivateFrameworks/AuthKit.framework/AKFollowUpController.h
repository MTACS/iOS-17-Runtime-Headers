
@interface AKFollowUpController : NSObject <AKFollowUpProvider> {
    FLFollowUpController * _followupController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addFollowUpItems:(id)arg1 error:(id*)arg2;
- (bool)clearNotificationsForItem:(id)arg1 error:(id*)arg2;
- (id)initWithFLFollowupController:(id)arg1;
- (id)pendingFollowUpItems:(id*)arg1;
- (bool)removeAllFollowUpItems:(id*)arg1;
- (bool)removeFollowUpItems:(id)arg1 error:(id*)arg2;
- (bool)removeFollowUpItemsWithIdentifiers:(id)arg1 error:(id*)arg2;

@end
