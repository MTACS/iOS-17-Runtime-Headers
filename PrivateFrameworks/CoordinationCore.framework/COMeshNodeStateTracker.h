
@interface COMeshNodeStateTracker : NSObject {
    unsigned long long  _backoffBucket;
    id /* block */  _backoffResponse;
    NSObject<OS_dispatch_source> * _backoffTimer;
    <COMeshNodeStateTrackerDelegate> * _delegate;
    long long  _electionStage;
    COBallot * _lastBallotReceived;
    COBallot * _lastBallotSent;
    unsigned long long  _lastGenerationReceived;
    unsigned long long  _lastGenerationSent;
    double  _lastHeard;
    COMeshNode * _node;
    bool  _outstandingProbe;
    bool  _outstandingRequest;
    unsigned long long  _state;
    long long  _status;
    unsigned long long  _totalBackedOffTime;
}

@property (nonatomic) unsigned long long backoffBucket;
@property (nonatomic, copy) id /* block */ backoffResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (nonatomic) <COMeshNodeStateTrackerDelegate> *delegate;
@property (nonatomic) long long electionStage;
@property (nonatomic, copy) COBallot *lastBallotReceived;
@property (nonatomic, copy) COBallot *lastBallotSent;
@property (nonatomic) unsigned long long lastGenerationReceived;
@property (nonatomic) unsigned long long lastGenerationSent;
@property (nonatomic) double lastHeard;
@property (nonatomic, readonly) COMeshNode *node;
@property (getter=hasOutstandingProbe, nonatomic) bool outstandingProbe;
@property (getter=hasOutstandingRequest, nonatomic) bool outstandingRequest;
@property (nonatomic) unsigned long long state;
@property (nonatomic) long long status;
@property (nonatomic, readonly) unsigned long long totalBackedOffTime;

- (void).cxx_destruct;
- (unsigned long long)backoffBucket;
- (id /* block */)backoffResponse;
- (id)backoffTimer;
- (id)delegate;
- (id)description;
- (void)didFireBackoffTimer;
- (long long)electionStage;
- (bool)hasOutstandingProbe;
- (bool)hasOutstandingRequest;
- (id)initWithNode:(id)arg1;
- (id)lastBallotReceived;
- (id)lastBallotSent;
- (unsigned long long)lastGenerationReceived;
- (unsigned long long)lastGenerationSent;
- (double)lastHeard;
- (id)node;
- (void)resetBackoffInformation;
- (void)setBackoffBucket:(unsigned long long)arg1;
- (void)setBackoffResponse:(id /* block */)arg1;
- (void)setBackoffTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElectionStage:(long long)arg1;
- (void)setLastBallotReceived:(id)arg1;
- (void)setLastBallotSent:(id)arg1;
- (void)setLastGenerationReceived:(unsigned long long)arg1;
- (void)setLastGenerationSent:(unsigned long long)arg1;
- (void)setLastHeard:(double)arg1;
- (void)setOutstandingProbe:(bool)arg1;
- (void)setOutstandingRequest:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setStatus:(long long)arg1;
- (unsigned long long)state;
- (long long)status;
- (unsigned long long)totalBackedOffTime;

@end
