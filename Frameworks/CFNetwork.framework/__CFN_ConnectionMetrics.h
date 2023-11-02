
@interface __CFN_ConnectionMetrics : NSObject <NSSecureCoding> {
    bool  _TLSConfigured;
    NSUUID * _UUID;
    double  _beginTime;
    NSDictionary * _cachedSubflowCounts;
    NSDictionary * _cachedTCPInfoAtEnd;
    bool  _cellular;
    bool  _coalesced;
    NSObject<OS_nw_connection> * _connection;
    bool  _constrained;
    bool  _dataBudgetingEnabled;
    bool  _discretionary;
    double  _endTime;
    NSObject<OS_nw_endpoint> * _endpoint;
    double  _establishTime;
    NSObject<OS_nw_establishment_report> * _establishmentReport;
    bool  _expensive;
    double  _firstByteReceivedTime;
    long long  _http3DiscoveryStatus;
    unsigned long long  _identifier;
    NSUUID * _initiatingTransactionID;
    NSString * _interfaceName;
    bool  _isUnlistedTracker;
    NSObject<OS_nw_endpoint> * _localEndpoint;
    bool  _multipath;
    bool  _needsCachedSubflowCounts;
    bool  _needsCachedTCPInfoAtEnd;
    unsigned short  _negotiatedTLSCipherSuite;
    unsigned short  _negotiatedTLSProtocolVersion;
    NSString * _networkProtocolName;
    int  _privacyStance;
    NSObject<OS_nw_endpoint> * _remoteEndpoint;
    struct weak_ptr<TransportConnection> { 
        struct TransportConnection {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _transportConnection;
    bool  _usedByTransaction;
    bool  _usedTFO;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  connectionLock;
}

@property (getter=_daemon_isDataBudgetingEnabled, nonatomic, readonly) bool _daemon_dataBudgetingEnabled;
@property (getter=_daemon_isDiscretionary, nonatomic, readonly) bool _daemon_discretionary;
@property (nonatomic, readonly) double _daemon_establishTime;
@property (nonatomic, readonly, copy) NSString *_daemon_interfaceName;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_daemon_establishTime;
- (id)_daemon_interfaceName;
- (bool)_daemon_isDataBudgetingEnabled;
- (bool)_daemon_isDiscretionary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
