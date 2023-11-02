
@interface SUCoreDiag : NSObject {
    NSString * _appendingDumpFilename;
    bool  _isSharedDiag;
    NSString * _lastReportedUUID;
    SUCoreDiagStats * _trackStats;
    NSMutableArray * _trackingHistory;
    NSObject<OS_dispatch_queue> * _trackingQueue;
    NSString * _uniqueInstanceName;
}

@property (nonatomic, retain) NSString *appendingDumpFilename;
@property (nonatomic) bool isSharedDiag;
@property (nonatomic, retain) NSString *lastReportedUUID;
@property (nonatomic, retain) SUCoreDiagStats *trackStats;
@property (nonatomic, retain) NSMutableArray *trackingHistory;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *trackingQueue;
@property (nonatomic, retain) NSString *uniqueInstanceName;

+ (id)sharedDiag;

- (void).cxx_destruct;
- (void)_appendToHistory:(id)arg1;
- (id)_copyTrackedStatsClearingAfter:(bool)arg1 droppingMatchedIndications:(long long)arg2;
- (void)_dumpEvent:(id)arg1;
- (id)_dumpMaskToString:(long long)arg1;
- (void)_dumpToFile:(id)arg1 dumpingDict:(id)arg2 forReason:(id)arg3;
- (void)_dumpTracked:(id)arg1 dumpingTo:(long long)arg2 usingFilename:(id)arg3 clearingStatistics:(bool)arg4 clearingHistory:(bool)arg5;
- (void)_logTrackedError:(id)arg1 fromLocation:(id)arg2 forReason:(id)arg3 withResult:(long long)arg4 withError:(id)arg5;
- (long long)allIndications;
- (id)appendingDumpFilename;
- (void)collectTrackedStatsClearingAfter:(bool)arg1 completion:(id /* block */)arg2;
- (void)collectTrackedStatsClearingAfter:(bool)arg1 droppingMatchedIndications:(long long)arg2 completion:(id /* block */)arg3;
- (id)copyTrackedStatsClearingAfter:(bool)arg1;
- (id)copyTrackedStatsClearingAfter:(bool)arg1 droppingMatchedIndications:(long long)arg2;
- (void)dumpTracked:(id)arg1 dumpingTo:(long long)arg2 usingFilename:(id)arg3 clearingStatistics:(bool)arg4 clearingHistory:(bool)arg5;
- (id)initWithAppendedDomain:(id)arg1 appendingDumpFilename:(id)arg2;
- (id)instanceName;
- (bool)isSharedDiag;
- (id)lastReportedUUID;
- (id)loadDump:(id)arg1;
- (void)setAppendingDumpFilename:(id)arg1;
- (void)setIsSharedDiag:(bool)arg1;
- (void)setLastReportedUUID:(id)arg1;
- (void)setTrackStats:(id)arg1;
- (void)setTrackingHistory:(id)arg1;
- (void)setUniqueInstanceName:(id)arg1;
- (void)trackAnomaly:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)trackBegin:(id)arg1;
- (void)trackBegin:(id)arg1 atLevel:(int)arg2;
- (void)trackBegin:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3;
- (void)trackBegin:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withIdentifier:(id)arg4;
- (void)trackEnd:(id)arg1;
- (void)trackEnd:(id)arg1 atLevel:(int)arg2;
- (void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3;
- (void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withIdentifier:(id)arg4 withResult:(long long)arg5 withError:(id)arg6;
- (void)trackEnd:(id)arg1 atLevel:(int)arg2 forModule:(id)arg3 withResult:(long long)arg4 withError:(id)arg5;
- (void)trackEnd:(id)arg1 atLevel:(int)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)trackEnd:(id)arg1 withResult:(long long)arg2 withError:(id)arg3;
- (void)trackError:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)trackFailure:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)trackFault:(id)arg1 forReason:(id)arg2 withResult:(long long)arg3 withError:(id)arg4;
- (void)trackLastReportedUUID:(id)arg1;
- (void)trackStateEvent:(id)arg1 previousState:(id)arg2 handlingEvent:(id)arg3 nextState:(id)arg4 performingAction:(id)arg5 withInfo:(id)arg6;
- (id)trackStats;
- (id)trackingHistory;
- (id)trackingQueue;
- (id)uniqueInstanceName;

@end
