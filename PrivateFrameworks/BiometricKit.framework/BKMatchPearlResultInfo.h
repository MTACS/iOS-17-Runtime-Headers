
@interface BKMatchPearlResultInfo : BKMatchResultInfo {
    long long  _feedback;
    unsigned long long  _periocularMatchState;
}

@property (nonatomic, readonly) long long feedback;
@property (nonatomic, readonly) unsigned long long periocularMatchState;

- (long long)feedback;
- (id)initWithServerIdentity:(id)arg1 details:(id)arg2 device:(id)arg3;
- (unsigned long long)periocularMatchState;

@end
