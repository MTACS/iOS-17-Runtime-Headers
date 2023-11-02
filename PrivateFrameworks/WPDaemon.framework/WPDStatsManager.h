
@interface WPDStatsManager : NSObject {
    bool  _PLLogAvailable;
    NSMutableArray * _advertisingArray;
    NSMutableArray * _aggressiveScanArray;
    NSString * _name;
    double  _nextPushTime;
    NSMutableArray * _regularScanArray;
    NSObject<OS_dispatch_queue> * _reportQueue;
    unsigned long long * _resetAdvertisingArray;
    unsigned long long * _resetScanArray;
    NSDictionary * _scanArray;
    WPDaemonServer * _server;
}

@property (nonatomic, readonly) bool PLLogAvailable;
@property (nonatomic, retain) NSMutableArray *advertisingArray;
@property (nonatomic, retain) NSMutableArray *aggressiveScanArray;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) double nextPushTime;
@property (nonatomic, retain) NSMutableArray *regularScanArray;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reportQueue;
@property unsigned long long*resetAdvertisingArray;
@property unsigned long long*resetScanArray;
@property (nonatomic, retain) NSDictionary *scanArray;
@property (readonly) WPDaemonServer *server;

+ (id)getStringFromActivity:(unsigned long long)arg1;

- (void).cxx_destruct;
- (bool)PLLogAvailable;
- (id)advertisingArray;
- (id)aggressiveScanArray;
- (void)dealloc;
- (id)description;
- (void)generateStateDump;
- (id)generateStateDumpStrings;
- (id)getStatsDictionary;
- (id)initWithServer:(id)arg1;
- (id)name;
- (double)nextPushTime;
- (id)regularScanArray;
- (void)reportPLStats;
- (id)reportQueue;
- (void)resetActivity:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)resetActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (unsigned long long*)resetAdvertisingArray;
- (unsigned long long*)resetScanArray;
- (id)scanArray;
- (id)server;
- (void)setAdvertisingArray:(id)arg1;
- (void)setAggressiveScanArray:(id)arg1;
- (void)setNextPushTime:(double)arg1;
- (void)setRegularScanArray:(id)arg1;
- (void)setReportQueue:(id)arg1;
- (void)setResetAdvertisingArray:(unsigned long long*)arg1;
- (void)setResetScanArray:(unsigned long long*)arg1;
- (void)setScanArray:(id)arg1;
- (void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)startActivity:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3;
- (void)startActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)startActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2 scanRate:(long long)arg3;
- (void)stopActivity:(unsigned long long)arg1;
- (void)stopActivity:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)stopActivityAsync:(unsigned long long)arg1;
- (void)stopActivityAsync:(unsigned long long)arg1 forType:(unsigned char)arg2;

@end
