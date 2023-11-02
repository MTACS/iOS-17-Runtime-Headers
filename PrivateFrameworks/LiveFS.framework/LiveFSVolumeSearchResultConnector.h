
@interface LiveFSVolumeSearchResultConnector : NSObject <LiveFSSearchResults> {
    bool  _active;
    NSXPCConnection * _conn;
    unsigned int  _currentCredits;
    unsigned int  _maxData;
    double  _maxDelay;
    NSString * _ourToken;
    bool  _throttlingActive;
    NSCondition * condVar;
    NSDate * nextReplyDeadline;
    NSMutableData * pendingAttributes;
    unsigned int  pendingAttributesSize;
    unsigned int  pendingAttributesValidSize;
    unsigned int  pendingData;
    NSMutableArray * pendingPaths;
    NSMutableArray * pendingXAttrs;
    bool  waiter;
}

@property bool active;
@property (retain) NSXPCConnection *conn;
@property unsigned int currentCredits;
@property unsigned int maxData;
@property double maxDelay;
@property (retain) NSString *ourToken;
@property bool throttlingActive;

+ (id)newSearchConnector:(id)arg1 connection:(id)arg2 maxData:(unsigned int)arg3 maxDelay:(double)arg4 initialCredits:(unsigned int)arg5;

- (void).cxx_destruct;
- (bool)active;
- (void)addSearchResult:(id)arg1 attributes:(struct _LIFileAttributes { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; struct timespec { long long x_14_1_1; long long x_14_1_2; } x14; struct timespec { long long x_15_1_1; long long x_15_1_2; } x15; struct timespec { long long x_16_1_1; long long x_16_1_2; } x16; struct timespec { long long x_17_1_1; long long x_17_1_2; } x17; struct timespec { long long x_18_1_1; long long x_18_1_2; } x18; struct timespec { long long x_19_1_1; long long x_19_1_2; } x19; unsigned int x20; unsigned int x21; }*)arg2 attributeSize:(unsigned int)arg3 xAttrs:(id)arg4;
- (id)conn;
- (unsigned int)currentCredits;
- (int)flushBufferedResults:(id)arg1;
- (int)grabACredit;
- (id)initForToken:(id)arg1 connection:(id)arg2 maxData:(unsigned int)arg3 maxDelay:(double)arg4 initialCredits:(unsigned int)arg5;
- (unsigned int)maxData;
- (double)maxDelay;
- (id)ourToken;
- (void)replenishCredits:(unsigned int)arg1 reply:(id /* block */)arg2;
- (void)setActive:(bool)arg1;
- (void)setConn:(id)arg1;
- (void)setCurrentCredits:(unsigned int)arg1;
- (void)setMaxData:(unsigned int)arg1;
- (void)setMaxDelay:(double)arg1;
- (void)setOurToken:(id)arg1;
- (void)setThrottlingActive:(bool)arg1;
- (bool)throttlingActive;
- (void)tokenDone:(int)arg1;

@end
