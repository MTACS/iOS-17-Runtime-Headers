
@interface DTActivityTraceTapLocalShuttle : XRMobileAgent <DTOSLogLoaderVisitor> {
    id  _commonFetchTicket;
    DTOSLogLoaderConfiguration * _configuration;
    bool  _didPrepare;
    bool  _didStart;
    bool  _didStop;
    double  _fetchWindow;
    DTOSLogLoader * _loaderStop;
    XRMobileAgentDock * _ownersDock;
    id /* block */  _processDetectionCallback;
    bool  _shouldFetch;
    bool  _shouldStart;
    bool  _shouldStop;
    NSError * failureReason;
    bool  fetchComplete;
    unsigned long long  lastMachContinuousTime;
    unsigned int  lostEventsSinceLastVisit;
    NSData * nextOutputBytes;
}

@property (nonatomic, retain) DTOSLogLoaderConfiguration *configuration;
@property (nonatomic) bool didPrepare;
@property (nonatomic) bool didStart;
@property (nonatomic) bool didStop;
@property (nonatomic, retain) NSError *failureReason;
@property (getter=isFetchComplete, nonatomic) bool fetchComplete;
@property (nonatomic) double fetchWindow;
@property (nonatomic) unsigned long long lastMachContinuousTime;
@property (nonatomic, retain) DTOSLogLoader *loaderStop;
@property (nonatomic) unsigned int lostEventsSinceLastVisit;
@property (nonatomic, retain) NSData *nextOutputBytes;
@property (nonatomic, retain) XRMobileAgentDock *ownersDock;
@property (nonatomic, copy) id /* block */ processDetectionCallback;
@property (nonatomic) bool shouldFetch;
@property (nonatomic) bool shouldStart;
@property (nonatomic) bool shouldStop;

- (void).cxx_destruct;
- (void)addPidToExecEntriesFromMapping:(id)arg1;
- (id)configuration;
- (bool)didPrepare;
- (bool)didStart;
- (bool)didStop;
- (void)executeStopOnItinerary:(id)arg1;
- (id)failureReason;
- (double)fetchWindow;
- (bool)isFetchComplete;
- (unsigned long long)lastMachContinuousTime;
- (id)loaderStop;
- (unsigned int)lostEventsSinceLastVisit;
- (id)nextOutputBytes;
- (id)ownersDock;
- (id /* block */)processDetectionCallback;
- (void)setConfiguration:(id)arg1;
- (void)setDidPrepare:(bool)arg1;
- (void)setDidStart:(bool)arg1;
- (void)setDidStop:(bool)arg1;
- (void)setFailureReason:(id)arg1;
- (void)setFetchComplete:(bool)arg1;
- (void)setFetchWindow:(double)arg1;
- (void)setLastMachContinuousTime:(unsigned long long)arg1;
- (void)setLoaderStop:(id)arg1;
- (void)setLostEventsSinceLastVisit:(unsigned int)arg1;
- (void)setNextOutputBytes:(id)arg1;
- (void)setOwnersDock:(id)arg1;
- (void)setProcessDetectionCallback:(id /* block */)arg1;
- (void)setShouldFetch:(bool)arg1;
- (void)setShouldStart:(bool)arg1;
- (void)setShouldStop:(bool)arg1;
- (bool)shouldFetch;
- (bool)shouldStart;
- (bool)shouldStop;

@end
