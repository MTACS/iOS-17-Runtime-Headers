
@interface TSgPTPFDEtEPort : TSgPTPNetworkPort {
    TSDgPTPFDEtEPort * _implDC;
    TSXgPTPFDEtEPort * _implXPC;
    TSgPTPPortStatistics * _statistics;
}

@property (nonatomic, retain) TSgPTPPortStatistics *statistics;

+ (id)diagnosticDescriptionForInfo:(id)arg1 withIndent:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithImplDC:(id)arg1;
- (id)initWithImplXPC:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateWithXPCStatistics:(id)arg1;

@end
