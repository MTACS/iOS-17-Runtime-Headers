
@interface MKFCKRoom : MKFCKHomeObject

@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) NSDictionary *applicationData;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, retain) MKFCKHome *homeDefault;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, retain) MKFCKZone *homeZone;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;
@property (nonatomic, retain) NSSet *zones;

+ (id)fetchRequest;

- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
