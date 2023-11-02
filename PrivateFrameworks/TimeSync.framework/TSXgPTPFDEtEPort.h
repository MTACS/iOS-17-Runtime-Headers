
@interface TSXgPTPFDEtEPort : TSXgPTPNetworkPort {
    TSXgPTPPortStatistics * _statistics;
}

@property (nonatomic, retain) TSXgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (void)_updateFromProperties:(id)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;

@end
