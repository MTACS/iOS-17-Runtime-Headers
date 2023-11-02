
@interface NPKExpressGymKitAvailabilityManager : NSObject <NPKExpressGymKitConflictResolver> {
    <NPKExpressGymKitAvailabilityManagerDelegate> * _delegate;
    int  _notificationToken;
}

@property (nonatomic, readonly) PKPaymentPass *conflictingPass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NPKExpressGymKitAvailabilityManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isExpressGymKitAllowed;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_conflictingPassUniqueID;
- (void)allowEnableExpressGymKitWithVisibleViewController:(id)arg1 completion:(id /* block */)arg2;
- (id)conflictingPass;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isExpressGymKitAllowed;
- (void)setDelegate:(id)arg1;

@end
