
@interface SRFollowUp : NSObject <SRFollowUpPosting> {
    FLFollowUpController * _followUpController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)pendingFollowUpItemsWithCompletion:(id /* block */)arg1;
- (void)postFollowUpItem:(id)arg1 completion:(id /* block */)arg2;

@end
