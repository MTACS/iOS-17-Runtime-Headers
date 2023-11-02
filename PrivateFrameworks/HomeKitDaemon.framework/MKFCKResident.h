
@interface MKFCKResident : MKFCKHomeObject

@property (nonatomic, retain) MKFCKAppleMediaAccessory *appleMediaAccessory;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSUUID *idsIdentifier;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
