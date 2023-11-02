
@interface SMSessionManagerStatus : NSObject {
    NSUUID * _identifier;
    NSUUID * _lastSessionIDDuringMagnetBreak;
    SMSessionManagerState * _state;
    NSDate * _stateQueryDate;
}

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSUUID *lastSessionIDDuringMagnetBreak;
@property (nonatomic, copy) SMSessionManagerState *state;
@property (nonatomic, copy) NSDate *stateQueryDate;

- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 stateQueryDate:(id)arg2 lastSessionIDDuringMagnetBreak:(id)arg3 state:(id)arg4;
- (id)lastSessionIDDuringMagnetBreak;
- (void)setIdentifier:(id)arg1;
- (void)setLastSessionIDDuringMagnetBreak:(id)arg1;
- (void)setState:(id)arg1;
- (void)setStateQueryDate:(id)arg1;
- (id)state;
- (id)stateQueryDate;

@end
