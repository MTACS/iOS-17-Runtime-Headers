
@interface WiFiUsageLQMWindowAnalysisLinkDown : WiFiUsageLQMWindowAnalysis {
    bool  _isInvoluntary;
    NSString * _linkDownReason;
    long long  _linkDownSubreason;
    unsigned long long  _linkUpDuration;
}

@property (nonatomic) bool isInvoluntary;
@property (nonatomic, retain) NSString *linkDownReason;
@property (nonatomic) long long linkDownSubreason;
@property (nonatomic) unsigned long long linkUpDuration;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)arg1;
- (id)initWithRollingWindow:(id)arg1 WithIsInvoluntary:(bool)arg2 AndLinkChangeReason:(long long)arg3 AndLinkChangeSubreason:(long long)arg4 AndDuration:(unsigned long long)arg5 andContext:(struct context { bool x1; bool x2; bool x3; })arg6 AndTimestamp:(id)arg7 onQueue:(id)arg8;
- (bool)isInvoluntary;
- (id)linkDownReason;
- (long long)linkDownSubreason;
- (unsigned long long)linkUpDuration;
- (void)setIsInvoluntary:(bool)arg1;
- (void)setLinkDownReason:(id)arg1;
- (void)setLinkDownSubreason:(long long)arg1;
- (void)setLinkUpDuration:(unsigned long long)arg1;

@end
