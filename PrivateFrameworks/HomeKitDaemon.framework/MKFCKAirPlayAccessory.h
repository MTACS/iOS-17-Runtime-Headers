
@interface MKFCKAirPlayAccessory : MKFCKAccessory

@property (nonatomic) short minimumUserPrivilege;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, copy) NSString *password;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)arg1 context:(id)arg2;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (id)fetchLocalModelWithContext:(id)arg1;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)validateMinimumUserPrivilege:(id*)arg1 error:(id*)arg2;

@end
