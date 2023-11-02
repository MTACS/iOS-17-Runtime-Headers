
@interface NetworkMO : NSManagedObject

@property (nonatomic) int authFlags;
@property (nonatomic, retain) BlacklistMO *blacklist;
@property (nonatomic, retain) NSSet *bss;
@property (nonatomic, retain) NSObject *channels;
@property (nonatomic, copy) NSUUID *colocatedScopeId;
@property (nonatomic) long long colocatedState;
@property (nonatomic) bool didDeploymentChange;
@property (nonatomic) bool isHome;
@property (nonatomic) bool isLongTermNetwork;
@property (nonatomic) bool isMoving;
@property (nonatomic) bool isOmnipresent;
@property (nonatomic) bool isTCPGood;
@property (nonatomic) bool isWork;
@property (nonatomic) long long networkScore;
@property (nonatomic, readonly) long long numBSS;
@property (nonatomic, copy) NSString *ssid;
@property (nonatomic) long long switchedAwayFromCount;
@property (nonatomic) long long switchedToCount;
@property (nonatomic) int usageRank;
@property (nonatomic) long long usageTime;

+ (id)allStoredSsids:(id)arg1;
+ (void)classifyTraitsForNetwork:(id)arg1 distanceFilter:(double)arg2 moc:(id)arg3;
+ (bool)coalesceSsidsIntoColocatedScope:(id)arg1 moc:(id)arg2;
+ (id)copyAllSsids:(id)arg1;
+ (id)copyAllSsidsWithColocatedScopeId:(id)arg1 moc:(id)arg2;
+ (id)copyAllSsidsWithColocatedScopeIdStr:(id)arg1 moc:(id)arg2;
+ (id)copyAllSsidsWithTrait:(id)arg1 trait:(unsigned long long)arg2;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1 created:(bool*)arg2 moc:(id)arg3;
+ (id)getFirstColocatedScopeUuidForSsids:(id)arg1 moc:(id)arg2;
+ (id)getInstance:(id)arg1 moc:(id)arg2;
+ (long long)getTotalScore:(id)arg1 moc:(id)arg2;
+ (bool)invalidateColocatedScopeForSsidArray:(id)arg1 moc:(id)arg2;
+ (id)networkManagedObjectPropertyValue:(id)arg1 forKey:(id)arg2;
+ (bool)removeNetwork:(id)arg1 moc:(id)arg2;
+ (bool)setNetworkManagedObjectPropertyValueForKey:(id)arg1 forKey:(id)arg2 withValue:(id)arg3;

@end
