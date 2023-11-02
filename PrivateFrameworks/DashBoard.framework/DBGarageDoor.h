
@interface DBGarageDoor : DBHomeKitService

@property (nonatomic, readonly) bool current;
@property (nonatomic, readonly) long long doorState;
@property (nonatomic, readonly) DBHomeKitDoorStateCharacteristic *doorStateCharacteristic;
@property (nonatomic, readonly) bool obstructionDetected;
@property (nonatomic, readonly) DBHomeKitBoolCharacteristic *obstructionDetectedCharacteristic;
@property (nonatomic) long long targetDoorState;
@property (nonatomic, readonly) DBHomeKitDoorStateCharacteristic *targetDoorStateCharacteristic;

+ (void)load;
+ (id)observerProtocol;
+ (id)serviceType;

- (void)_characteristicDidUpdate:(id)arg1;
- (long long)_doorStateForCharacteristic:(id)arg1;
- (bool)_shouldUpdateLastUsedForCharacteristic:(id)arg1;
- (bool)_tracksLastUsed;
- (void)addObserver:(id)arg1;
- (bool)current;
- (id)description;
- (long long)doorState;
- (id)doorStateCharacteristic;
- (bool)hasError;
- (id)managedCharacteristics;
- (bool)obstructionDetected;
- (id)obstructionDetectedCharacteristic;
- (bool)pendingRead;
- (bool)pendingWrite;
- (void)removeObserver:(id)arg1;
- (void)setTargetDoorState:(long long)arg1;
- (long long)targetDoorState;
- (id)targetDoorStateCharacteristic;

@end
