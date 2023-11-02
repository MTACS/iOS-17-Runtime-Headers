
@interface LeaveMO : NSManagedObject

@property (nonatomic) double assocDuration;
@property (nonatomic, retain) BSSMO *bss;
@property (nonatomic, copy) NSDate *date;
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
@property (nonatomic) bool isInVoluntary;
@property (nonatomic) short motionState;
@property (nonatomic) int reason;
@property (nonatomic) int subReason;

+ (id)entityName;
+ (id)fetchRequest;
+ (id)firstLeaveAfter:(id)arg1 ssid:(id)arg2 moc:(id)arg3;
+ (id)generateInstance:(id)arg1;

@end
