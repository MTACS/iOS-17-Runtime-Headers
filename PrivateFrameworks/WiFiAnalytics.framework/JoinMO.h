
@interface JoinMO : NSManagedObject

@property (nonatomic) short autojoinPhase;
@property (nonatomic, retain) BSSMO *bss;
@property (nonatomic) short cca;
@property (nonatomic, retain) NSObject *channelsScanned;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic) int dhcpLatencyMs;
@property (nonatomic) int dhcpLeaseMins;
@property (nonatomic) bool dhcpSuccess;
@property (nonatomic) int ipv4Addr;
@property (nonatomic) int ipv4routerAddr;
@property (nonatomic) bool isAutojoin;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic, copy) NSString *routerMAC;
@property (nonatomic) short rssi;
@property (nonatomic) short snr;
@property (nonatomic) int status;
@property (nonatomic) int subreason;
@property (nonatomic) bool success;

+ (id)earliestJoinDate:(id)arg1 moc:(id)arg2;
+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1;
+ (unsigned long long)joinCount:(id)arg1 bssid:(id)arg2 maxAgeInDays:(unsigned long long)arg3 success:(bool)arg4 moc:(id)arg5;
+ (id)mostRecentJoin:(id)arg1 ssid:(id)arg2 moc:(id)arg3;
+ (id)mostRecentJoinsWithBatchSize:(unsigned long long)arg1 bssid:(id)arg2 ssid:(id)arg3 moc:(id)arg4;
+ (id)ssidsWithRouterMAC:(id)arg1 moc:(id)arg2;

@end
