
@interface TSDgPTPFDEtEPort : TSDgPTPNetworkPort {
    TSDgPTPPortStatistics * _statistics;
}

@property (nonatomic, retain) TSDgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (id)_statistics;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateProperties;

@end
