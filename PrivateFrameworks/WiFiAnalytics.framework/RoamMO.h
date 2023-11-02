
@interface RoamMO : NSManagedObject

@property (nonatomic) short cacheChannel;
@property (nonatomic) short cacheChannelFlags;
@property (nonatomic) short cacheRssiBin;
@property (nonatomic, retain) NSObject *channelsScanned;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) bool displayOn;
@property (nonatomic) int fwReason;
@property (nonatomic) int fwSubReason;
@property (nonatomic, retain) NSObject *histBcnPer;
@property (nonatomic, retain) NSObject *histBcnSched;
@property (nonatomic, retain) NSObject *histCca;
@property (nonatomic, retain) NSObject *histFwTxFrames;
@property (nonatomic, retain) NSObject *histFwTxPer;
@property (nonatomic, retain) NSObject *histFwTxRetrans;
@property (nonatomic, retain) NSObject *histRssi;
@property (nonatomic, retain) NSObject *histRxFrames;
@property (nonatomic, retain) NSObject *histSnr;
@property (nonatomic, retain) NSObject *histTxFrames;
@property (nonatomic, retain) NSObject *histTxPer;
@property (nonatomic, retain) NSObject *histTxRetrans;
@property (nonatomic) int hostReason;
@property (nonatomic) bool isLateRoam;
@property (nonatomic) bool isPingPong;
@property (nonatomic) short motionState;
@property (nonatomic, retain) NSObject *neighborCache;
@property (nonatomic) short roamDelta;
@property (nonatomic) double roamLatencyMs;
@property (nonatomic, retain) BSSMO *source;
@property (nonatomic) short sourceCca;
@property (nonatomic) short sourceRssi;
@property (nonatomic) int sourceScanLatencyMs;
@property (nonatomic) short sourceSnr;
@property (nonatomic) long long sourceTimeSpentSecs;
@property (nonatomic) int status;
@property (nonatomic, retain) BSSMO *target;
@property (nonatomic) short targetCca;
@property (nonatomic) bool targetDhcpFailed;
@property (nonatomic) int targetDhcpLatencyMs;
@property (nonatomic) int targetDhcpLeaseMins;
@property (nonatomic) short targetRssi;
@property (nonatomic) short targetSnr;
@property (nonatomic) bool userInteractive;
@property (nonatomic) bool voipActive;

+ (unsigned long long)dwellTimeInBand:(id)arg1 bandIs24:(bool)arg2 bssid:(id)arg3 maxAgeInDays:(unsigned long long)arg4 moc:(id)arg5;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)fetchRoamCache:(id)arg1 fetchLimit:(unsigned long long)arg2 moc:(id)arg3;
+ (id)fetchRoamObjects:(id)arg1 fetchLimit:(unsigned long long)arg2 moc:(id)arg3;
+ (id)fetchRoamProperties:(id)arg1 lookForRoamStatus:(bool)arg2 fetchLimit:(unsigned long long)arg3 properties:(id)arg4 moc:(id)arg5;
+ (id)generateInstance:(id)arg1;
+ (unsigned long long)roamsCount:(id)arg1 fetchLimit:(unsigned long long)arg2 moc:(id)arg3;
+ (unsigned long long)roamsCountBetweenBssids:(id)arg1 target:(id)arg2 moc:(id)arg3;

@end
