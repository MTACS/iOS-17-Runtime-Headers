
@interface HMDAccessoryPairingProgressStateMap : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessoryPairingProgressStateMapLock;
    NSString * _lastProgressState;
    NSDate * _lastProgressStateEventTime;
    NSString * _longestProgressState;
    NSMutableDictionary * _progressStateMap;
}

@property (nonatomic, retain) NSString *lastProgressState;
@property (nonatomic, retain) NSDate *lastProgressStateEventTime;
@property (nonatomic, retain) NSString *longestProgressState;
@property (nonatomic, retain) NSMutableDictionary *progressStateMap;

- (void).cxx_destruct;
- (double)getTimeDurationForLongestProgressState;
- (id)initWithDate:(id)arg1;
- (id)lastProgressState;
- (id)lastProgressStateEventTime;
- (id)longestProgressState;
- (id)progressStateMap;
- (void)setLastProgressState:(id)arg1;
- (void)setLastProgressStateEventTime:(id)arg1;
- (void)setLongestProgressState:(id)arg1;
- (void)setProgressStateMap:(id)arg1;
- (void)updateWithProgressState:(id)arg1 date:(id)arg2;

@end
