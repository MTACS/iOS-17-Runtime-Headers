
@interface MKFCKScene : MKFCKHomeObject

@property (nonatomic, retain) NSSet *accessories;
@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) NSDictionary *applicationData;
@property (nonatomic, retain) NSSet *automations;
@property (nonatomic, copy) NSUUID *flags;
@property (nonatomic, retain) MKFCKHome *home;
@property (nonatomic, copy) NSUUID *homeModelID;
@property (nonatomic, copy) NSUUID *modelID;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSDate *writerTimestamp;
@property (nonatomic, copy) NSString *writerVersion;

+ (id)fetchRequest;

- (id)decodeActionAppleMediaAccessoryPower:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)decodeActionCharacteristic:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)decodeActionMediaPlayback:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)decodeActionNaturalLight:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)decodeActionShortcut:(id)arg1 localModel:(id)arg2 context:(id)arg3;
- (id)encodeActionAppleMediaAccessoryPower:(id)arg1 accessories:(id)arg2 context:(id)arg3;
- (id)encodeActionCharacteristic:(id)arg1 accessories:(id)arg2 context:(id)arg3;
- (id)encodeActionMediaPlayback:(id)arg1 accessories:(id)arg2 context:(id)arg3;
- (id)encodeActionNaturalLight:(id)arg1 accessories:(id)arg2 shouldRemoveAction:(bool*)arg3 context:(id)arg4;
- (id)encodeActionShortcut:(id)arg1 context:(id)arg2;
- (bool)exportFromLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;
- (bool)importIntoLocalModel:(id)arg1 updatedProperties:(id)arg2 context:(id)arg3;

@end
