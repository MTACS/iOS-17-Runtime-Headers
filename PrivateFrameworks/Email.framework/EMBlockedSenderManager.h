
@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader, EMBlockedSenderWriter> {
    EFLocked * _blockedSenderCache;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _didRemoveObservers;
    <EFScheduler> * _notificationScheduler;
    <EFScheduler> * _resetScheduler;
}

@property (nonatomic, retain) EFLocked *blockedSenderCache;
@property (nonatomic, readonly, copy) NSSet *blockedSenderEmailAddresses;
@property (getter=isBlockedSenderEnabled, nonatomic) bool blockedSenderEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isMoveToTrashEnabled, nonatomic) bool moveToTrashEnabled;
@property (nonatomic, retain) <EFScheduler> *notificationScheduler;
@property (nonatomic, retain) <EFScheduler> *resetScheduler;
@property (readonly) Class superclass;

+ (void)setPromptForBlockedSender:(bool)arg1;
+ (bool)shouldMoveToTrashForMailboxType:(long long)arg1;
+ (bool)shouldPromptForBlockedSender;

- (void).cxx_destruct;
- (void)_blockContact:(id)arg1 block:(bool)arg2;
- (void)_blockPhoneNumber:(id)arg1;
- (void)_blockedSenderListDidChange:(id)arg1;
- (bool)_isEmailAddressBlocked:(id)arg1;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (void)_removeObserversIfNeeded;
- (void)_resetBlockedSenderCache;
- (void)_unblockPhoneNumber:(id)arg1;
- (bool)areAnyEmailAddressesBlocked:(id)arg1;
- (void)blockContact:(id)arg1;
- (void)blockEmailAddress:(id)arg1;
- (void)blockEmailAddresses:(id)arg1;
- (void)blockTokenAddress:(id)arg1;
- (id)blockedSenderCache;
- (id)blockedSenderEmailAddresses;
- (void)dealloc;
- (id)init;
- (bool)isBlockedSenderEnabled;
- (bool)isContactBlocked:(id)arg1;
- (bool)isEmailAddressBlocked:(id)arg1;
- (bool)isMoveToTrashEnabled;
- (bool)isTokenAddressIsBlocked:(id)arg1;
- (id)notificationScheduler;
- (id)resetScheduler;
- (void)setBlockedSenderCache:(id)arg1;
- (void)setBlockedSenderEnabled:(bool)arg1;
- (void)setMoveToTrashEnabled:(bool)arg1;
- (void)setNotificationScheduler:(id)arg1;
- (void)setResetScheduler:(id)arg1;
- (void)test_tearDown;
- (void)unblockContact:(id)arg1;
- (void)unblockEmailAddress:(id)arg1;
- (void)unblockEmailAddresses:(id)arg1;
- (void)unblockTokenAddress:(id)arg1;

@end
