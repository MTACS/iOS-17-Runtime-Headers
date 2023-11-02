
@interface EDDaemonInterfaceFactory : NSObject {
    EDCategorySubsystem * _categorySubsystem;
    EDPersistence * _persistence;
}

@property (nonatomic, retain) EDCategorySubsystem *categorySubsystem;
@property (nonatomic, readonly) EDPersistence *persistence;

- (void).cxx_destruct;
- (id)categorySubsystem;
- (id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2;
- (id)newAccountRepository;
- (id)newActivityRegistry;
- (id)newClientResumerWithClientState:(id)arg1;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:(id)arg1;
- (id)newFetchController;
- (id)newMailboxRepository;
- (id)newMessageRepositoryWithResumable:(id)arg1;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)newSenderRepository;
- (id)newVIPManagerInterface;
- (id)persistence;
- (void)setCategorySubsystem:(id)arg1;
- (id)sharedDonationController;
- (id)sharedInteractionLogger;
- (void)test_tearDown;

@end
