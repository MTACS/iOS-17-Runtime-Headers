
@interface _ContextSyncWakeState : NSObject {
    NSDate * _lastChangedDate;
    NSNumber * _wakeState;
}

@property (nonatomic, retain) NSDate *lastChangedDate;
@property (nonatomic, retain) NSNumber *wakeState;

+ (id)wakeState:(bool)arg1;

- (void).cxx_destruct;
- (id)lastChangedDate;
- (void)setLastChangedDate:(id)arg1;
- (void)setWakeState:(id)arg1;
- (id)wakeState;

@end
