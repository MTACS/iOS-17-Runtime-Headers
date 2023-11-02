
@interface MKFCKAppleMediaAccessory : MKFCKAccessory

@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, retain) HMFPairingIdentity *pairingIdentity;
@property (nonatomic, retain) MKFCKResident *resident;
@property (nonatomic, retain) NSDictionary *settings;
@property (nonatomic, copy) NSNumber *supportedStereoPairVersions;
@property (nonatomic, copy) NSNumber *variant;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
