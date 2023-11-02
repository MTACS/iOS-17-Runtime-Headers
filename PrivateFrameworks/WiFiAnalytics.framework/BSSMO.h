
@interface BSSMO : NSManagedObject

@property (nonatomic, copy) NSUUID *apPhysicalScopeId;
@property (nonatomic, copy) NSString *apProfileID;
@property (nonatomic, copy) NSUUID *apid;
@property (nonatomic) short autoLeaveRssi;
@property (nonatomic) bool beaconMetricSubmitted;
@property (nonatomic, retain) BlacklistMO *blacklist;
@property (nonatomic, copy) NSString *bssid;
@property (nonatomic) short channel;
@property (nonatomic) int channelFlags;
@property (nonatomic) short disBcnLossCount;
@property (nonatomic) short disTrgDisCount;
@property (nonatomic) short disUsrForcedInWeakRssiCount;
@property (nonatomic, retain) NSSet *geoTag;
@property (nonatomic, copy) NSUUID *idUsedInMetric;
@property (nonatomic) bool isEdgeForJoin;
@property (nonatomic) bool isEdgeForLeave;
@property (nonatomic) bool isTCPGood;
@property (nonatomic, retain) NSSet *joins;
@property (nonatomic, copy) NSDate *lastSeen;
@property (nonatomic, retain) NSSet *leaves;
@property (nonatomic) bool manualJoinAfterAutoLeave;
@property (nonatomic, retain) NSObject *neighborBSSIDs;
@property (nonatomic, retain) NSObject *neighborChannels;
@property (nonatomic, retain) NetworkMO *network;
@property (nonatomic, retain) NSObject *parsedBeacon;
@property (nonatomic) int phyMode;
@property (nonatomic) short roamTriggerRssi;
@property (nonatomic, retain) NSSet *roamsFrom;
@property (nonatomic, retain) NSSet *roamsTo;
@property (nonatomic, retain) NSSet *scanResult;
@property (nonatomic, retain) NSSet *scansFrom;
@property (nonatomic, retain) NSObject *unparsedBeacon;

+ (id)allBssidsForSsid:(id)arg1 moc:(id)arg2;
+ (id)allSsidsForBssid:(id)arg1 moc:(id)arg2;
+ (id)bssManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2;
+ (bool)coalesceBssidsIntoDeployment:(id)arg1 moc:(id)arg2;
+ (id)copyBssidsForDeployment:(id)arg1 deploymentUuid:(id)arg2 moc:(id)arg3;
+ (id)copyDeploymentUuidsForSsid:(id)arg1 moc:(id)arg2;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1 ssid:(id)arg2 created:(bool*)arg3 moc:(id)arg4;
+ (id)getDeploymentUuidForBssids:(id)arg1 moc:(id)arg2;
+ (id)getInstance:(id)arg1 ssid:(id)arg2 moc:(id)arg3;
+ (unsigned long long)numBssInBand:(id)arg1 bandIs24:(bool)arg2 moc:(id)arg3;
+ (bool)setBssManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;

@end
