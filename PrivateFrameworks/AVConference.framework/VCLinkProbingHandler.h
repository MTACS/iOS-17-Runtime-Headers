
@interface VCLinkProbingHandler : NSObject {
    NSMutableDictionary * _activeQRStatRequests;
    NSMutableSet * _activelyProbingLinkIDs;
    NSMutableDictionary * _aggregatedProbingResults;
    unsigned int  _consecutiveIdenticalQueryResultCount;
    unsigned int  _consecutiveIdenticalQueryResultMax;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    double  _expMovMeanFactor;
    double  _inkProbingQRStatRequestMaxRTT;
    bool  _isDuplicationEnabled;
    bool  _isProbingLockedOut;
    double  _lastLinkPreferenceUpdateNotificationTime;
    NSArray * _linkPreferenceOrder;
    unsigned char  _linkProbingCapabilityVersion;
    double  _linkProbingConnectionLockdownPeriod;
    unsigned int  _linkProbingDuplicationWaitTimeout;
    <VCLinkProbingHandlerDelegate> * _linkProbingHandlerDelegate;
    unsigned int  _linkProbingInterval;
    double  _linkProbingLockdownPeriod;
    unsigned int  _linkProbingQRStatFrequency;
    unsigned int  _linkProbingQRStatRequestMaxCount;
    unsigned int  _linkProbingQueryResultsInterval;
    struct { 
        unsigned char linkProbingCapabilityVersion; 
        unsigned int linkProbingQueryResultsInterval; 
        double expMovMeanFactor; 
        double envelopeAttackFactor; 
        double envelopeDecayFactor; 
        NSArray *plrBuckets; 
    }  _linkProbingResultConfig;
    unsigned char  _linkProbingState;
    unsigned int  _linkProbingTimeout;
    unsigned int  _minSentRequestCountThreshold;
    NSArray * _plrBuckets;
    double  _plrEnvelopeAttackFactor;
    double  _plrEnvelopeDecayFactor;
    VCDispatchTimer * _probingLockdownTimer;
    double  _probingLockoutStartTime;
    double  _probingStartTime;
    NSNumber * _qrLinkID;
    unsigned char  _qrLinkProbingState;
    VCDispatchTimer * _queryProbingResultsTimer;
    unsigned long long  _requestStatsIdentifier;
    VCDispatchTimer * _requestStatsTimer;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

@property (readonly) NSSet *activelyProbingLinkIDs;
@property bool isDuplicationEnabled;
@property (readonly) bool isLinkProbingActive;
@property unsigned char linkProbingCapabilityVersion;
@property <VCLinkProbingHandlerDelegate> *linkProbingHandlerDelegate;

- (id)activelyProbingLinkIDs;
- (void)dealloc;
- (void)dispatchedUpdateProbingResults:(id)arg1;
- (void)dispatchedUpdateQRProbingResult:(id)arg1;
- (void)flushProbingResults:(id)arg1;
- (id)getProbingResultsForLinkID:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (bool)isDuplicationEnabled;
- (bool)isLinkProbingActive;
- (bool)isValidProbingResult:(id)arg1;
- (unsigned char)linkProbingCapabilityVersion;
- (id)linkProbingHandlerDelegate;
- (void)loadStorebagValues;
- (void)probingLockdownEnded;
- (void)queryProbingResults;
- (void)removeProbingResultsForLinks:(id)arg1;
- (void)requestStats;
- (void)resetAggregatedProbingResults;
- (void)setIsDuplicationEnabled:(bool)arg1;
- (void)setLinkProbingCapabilityVersion:(unsigned char)arg1;
- (void)setLinkProbingHandlerDelegate:(id)arg1;
- (void)setLinkProbingResultConfig;
- (void)setQRLinkID:(id)arg1;
- (void)startActiveProbingOnLinks:(id)arg1;
- (void)startActiveProbingQRLink;
- (void)stopActiveProbingOnLinks:(id)arg1 resetStats:(bool)arg2;
- (void)stopActiveProbingQRLink;
- (void)updateLinkPreferenceOrder;
- (void)updateProbingResults:(id)arg1;
- (void)updateQRProbingResult:(id)arg1;

@end
