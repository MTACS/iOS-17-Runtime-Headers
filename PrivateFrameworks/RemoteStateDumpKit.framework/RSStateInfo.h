
@interface RSStateInfo : NSObject {
    long long  _actionRevision;
    unsigned long long  _stateType;
}

@property (nonatomic) long long actionRevision;
@property (nonatomic) unsigned long long stateType;

- (long long)actionRevision;
- (id)initWithType:(unsigned long long)arg1 revision:(long long)arg2;
- (void)setActionRevision:(long long)arg1;
- (void)setStateType:(unsigned long long)arg1;
- (unsigned long long)stateType;

@end
