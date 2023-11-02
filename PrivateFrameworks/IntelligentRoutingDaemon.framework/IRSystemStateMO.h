
@interface IRSystemStateMO : NSManagedObject

@property (nonatomic, retain) NSString *appInFocusBundleID;
@property (nonatomic) bool appInFocusWindowScreenUnlockEvent;
@property (nonatomic) bool appInFocusWindowValid;
@property (nonatomic, retain) NSString *avInitialRouteSharingPolicy;
@property (nonatomic, retain) NSString *deviceWiFiSSID;
@property (nonatomic, retain) IRHistoryEventMO *historyEvent;
@property (nonatomic, retain) NSString *iCloudId;
@property (nonatomic, retain) NSString *locationSemanticLoiIdentifier;
@property (nonatomic) int locationSemanticUserSpecificPlaceType;
@property (nonatomic, retain) NSString *mediaRouteGroupLeaderOutputDeviceID;
@property (nonatomic, retain) NSString *outputDeviceName;
@property (nonatomic) unsigned long long outputDeviceSubType;
@property (nonatomic) unsigned long long outputDeviceType;
@property (nonatomic, retain) NSString *predictedOutputDeviceName;
@property (nonatomic) unsigned long long predictedOutputDeviceSubType;
@property (nonatomic) unsigned long long predictedOutputDeviceType;
@property (nonatomic, retain) IRReplayEventMO *replayEvent;
@property (nonatomic) long long timeZoneSeconds;

+ (id)fetchRequest;
+ (void)setPropertiesOfSystemStateMO:(id)arg1 withSystemState:(id)arg2;
+ (id)systemStateMOWithSystemStateDO:(id)arg1 historyEventMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)systemStateMOWithSystemStateDO:(id)arg1 replayEventMO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end
