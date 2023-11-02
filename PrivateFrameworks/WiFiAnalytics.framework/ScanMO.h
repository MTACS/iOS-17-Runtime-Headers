
@interface ScanMO : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) BSSMO *origin;
@property (nonatomic) short originRssi;
@property (nonatomic, retain) BSSMO *result;
@property (nonatomic) short resultRssi;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)generateInstance:(id)arg1;
+ (bool)getSsidAndBssidWithinRangeForColocatedScopeTransition:(id)arg1 bssid:(id)arg2 minRssi:(int)arg3 maxRssi:(int)arg4 band:(unsigned int)arg5 transitionSsid:(id*)arg6 transitionBssid:(id*)arg7 transitionRssi:(int*)arg8 authFlags:(id*)arg9 moc:(id)arg10;

@end
