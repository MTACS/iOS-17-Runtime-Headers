
@interface BRReportManager : NSObject {
    unsigned short  _category;
    NSString * _configuration;
    BRRTCPairingReportManager * _pairingReportManager;
    bool  _pairingReportUnderway;
}

@property (nonatomic) unsigned short category;
@property (nonatomic, copy) NSString *configuration;
@property (nonatomic) BRRTCPairingReportManager *pairingReportManager;
@property (nonatomic) bool pairingReportUnderway;

+ (id)reporterWithCatergory:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)categortyToConfiguration:(unsigned short)arg1;
- (unsigned short)category;
- (id)configuration;
- (id)initWithCategory:(unsigned short)arg1;
- (id)pairingReportManager;
- (bool)pairingReportUnderway;
- (void)reportRTCMetric:(id)arg1;
- (void)setCategory:(unsigned short)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setPairingReportManager:(id)arg1;
- (void)setPairingReportUnderway:(bool)arg1;

@end
