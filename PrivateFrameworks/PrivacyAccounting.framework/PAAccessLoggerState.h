
@interface PAAccessLoggerState : NSObject {
    bool  _loggingEnabled;
    NSCache * _negativeAccessCache;
    NSMutableDictionary * _ongoingAccessIntervals;
    NSMutableDictionary * _slotByAccessForOngoingAccessInterval;
    long long  _topAccessIntervalSlot;
}

@property (nonatomic) bool loggingEnabled;
@property (nonatomic, readonly) NSCache *negativeAccessCache;
@property (nonatomic, readonly) NSDictionary *ongoingAccessIntervals;
@property (nonatomic, readonly) NSDictionary *slotByAccessForOngoingAccessInterval;
@property (nonatomic) long long topAccessIntervalSlot;

- (void).cxx_destruct;
- (id)init;
- (bool)loggingEnabled;
- (id)lookupCurrentAccessForSlot:(id)arg1;
- (id)negativeAccessCache;
- (id)ongoingAccessIntervals;
- (void)setLoggingEnabled:(bool)arg1;
- (void)setOngoingAccessIntervalState:(id)arg1 forSlot:(id)arg2;
- (void)setTopAccessIntervalSlot:(long long)arg1;
- (id)slotByAccessForOngoingAccessInterval;
- (id)takeOngoingAccessIntervalStateForAccess:(id)arg1;
- (id)takeOngoingAccessIntervalStateForSlot:(id)arg1;
- (long long)topAccessIntervalSlot;

@end
