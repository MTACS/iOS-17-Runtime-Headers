
@interface CONode : NSObject {
    NSUUID * _HomeKitIdentifier;
    NSString * _IDSIdentifier;
    unsigned long long  _backoffBucket;
    id /* block */  _backoffResponse;
    NSObject<OS_dispatch_source> * _backoffTimer;
    unsigned long long  _connectionType;
    <CONodeDelegate> * _delegate;
    unsigned long long  _discoveryType;
    COElectionInfo * _lastElectionInfoReceived;
    COElectionInfo * _lastElectionInfoSent;
    double  _lastHeard;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    COConstituent * _meConstituent;
    COClusterMemberRoleSnapshot * _memberSnapshot;
    bool  _outstandingProbe;
    bool  _pendingPing;
    COConstituent * _remote;
    long long  _state;
    unsigned long long  _totalBackedOffTime;
}

@property (nonatomic, copy) NSUUID *HomeKitIdentifier;
@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (nonatomic) unsigned long long backoffBucket;
@property (nonatomic, copy) id /* block */ backoffResponse;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *backoffTimer;
@property (nonatomic) unsigned long long connectionType;
@property (nonatomic, readonly) <CONodeDelegate> *delegate;
@property (nonatomic) unsigned long long discoveryType;
@property (nonatomic, copy) COElectionInfo *lastElectionInfoReceived;
@property (nonatomic, copy) COElectionInfo *lastElectionInfoSent;
@property (nonatomic) double lastHeard;
@property (nonatomic, readonly) COConstituent *meConstituent;
@property (nonatomic, retain) COClusterMemberRoleSnapshot *memberSnapshot;
@property (getter=hasOutstandingProbe, nonatomic) bool outstandingProbe;
@property (getter=hasOutstandingRequest, nonatomic, readonly) bool outstandingRequest;
@property (getter=hasPendingPing, nonatomic) bool pendingPing;
@property (nonatomic, retain) COConstituent *remote;
@property (nonatomic) long long state;
@property (nonatomic) unsigned long long totalBackedOffTime;

+ (id)descriptionForState:(long long)arg1;
+ (id)statusFromState:(long long)arg1;

- (void).cxx_destruct;
- (id)HomeKitIdentifier;
- (id)IDSIdentifier;
- (void)_resetElectionRelatedInformation;
- (void)_withLock:(id /* block */)arg1;
- (unsigned long long)backoffBucket;
- (id /* block */)backoffResponse;
- (id)backoffTimer;
- (unsigned long long)connectionType;
- (id)delegate;
- (void)discoveryRecordAdded:(id)arg1;
- (void)discoveryRecordRemoved:(id)arg1;
- (unsigned long long)discoveryType;
- (bool)hasOutstandingProbe;
- (bool)hasOutstandingRequest;
- (bool)hasPendingPing;
- (id)initWithRecord:(id)arg1 executionContext:(id)arg2 delegate:(id)arg3;
- (bool)isActive;
- (bool)isInElectionState;
- (id)lastElectionInfoReceived;
- (id)lastElectionInfoSent;
- (double)lastHeard;
- (id)meConstituent;
- (id)memberSnapshot;
- (id)remote;
- (void)resetBackoffInformation;
- (void)setBackoffBucket:(unsigned long long)arg1;
- (void)setBackoffResponse:(id /* block */)arg1;
- (void)setBackoffTimer:(id)arg1;
- (void)setConnectionType:(unsigned long long)arg1;
- (void)setDiscoveryType:(unsigned long long)arg1;
- (void)setHomeKitIdentifier:(id)arg1;
- (void)setLastElectionInfoReceived:(id)arg1;
- (void)setLastElectionInfoSent:(id)arg1;
- (void)setLastHeard:(double)arg1;
- (void)setMemberSnapshot:(id)arg1;
- (void)setOutstandingProbe:(bool)arg1;
- (void)setPendingPing:(bool)arg1;
- (void)setRemote:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setTotalBackedOffTime:(unsigned long long)arg1;
- (long long)state;
- (unsigned long long)totalBackedOffTime;

@end
