
@interface NSURLSessionTaskTransactionMetrics : NSObject <NSSecureCoding> {
    struct { 
        double domainLookupBeginTime; 
        double connectBeginTime; 
        unsigned int domainLookupDuration; 
        unsigned int connectDuration; 
        unsigned int secureConnectionDuration; 
        bool secure; 
    }  __connectionTiming;
    bool  __connectionTimingCached;
    bool  __forCache;
    __CFN_TransactionMetrics * __metrics;
}

@property (readonly) bool _apsRelayAttempted;
@property (readonly) bool _apsRelaySucceeded;
@property (readonly, copy) NSUUID *_connectionIdentifier;
@property (readonly) bool _connectionRace;
@property (nonatomic) struct { double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; } _connectionTiming;
@property (nonatomic) bool _connectionTimingCached;
@property (readonly, retain) NSObject<OS_nw_data_transfer_report> *_dataTransferReport;
@property (readonly, retain) NSObject<OS_nw_establishment_report> *_establishmentReport;
@property (readonly, copy) NSDate *_firstByteReceivedDate;
@property (readonly, copy) NSString *_interfaceName;
@property (readonly) bool _isUnlistedTracker;
@property (readonly, copy) NSString *_localAddressAndPort;
@property (readonly) bool _localCache;
@property (readonly) unsigned short _negotiatedTLSCipher;
@property (readonly) int _negotiatedTLSProtocol;
@property (readonly) int _privacyStance;
@property (readonly, copy) NSString *_proxyAddress;
@property (readonly, copy) NSNumber *_proxyPort;
@property (readonly) unsigned int _redirected;
@property (readonly, copy) NSString *_remoteAddressAndPort;
@property (readonly) long long _requestHeaderBytesSent;
@property (readonly) long long _responseBodyBytesDecoded;
@property (readonly) long long _responseBodyBytesReceived;
@property (readonly) long long _responseHeaderBytesReceived;
@property (readonly) bool _secureConnection;
@property (readonly) bool _serverPush;
@property (readonly) long long _totalBytesReceived;
@property (readonly) long long _totalBytesSent;
@property (readonly) bool _usesMultipath;
@property (getter=isCellular, readonly) bool cellular;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (getter=isConstrained, readonly) bool constrained;
@property (readonly) long long countOfRequestBodyBytesBeforeEncoding;
@property (readonly) long long countOfRequestBodyBytesSent;
@property (readonly) long long countOfRequestHeaderBytesSent;
@property (readonly) long long countOfResponseBodyBytesAfterDecoding;
@property (readonly) long long countOfResponseBodyBytesReceived;
@property (readonly) long long countOfResponseHeaderBytesReceived;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (readonly) long long domainResolutionProtocol;
@property (getter=isExpensive, readonly) bool expensive;
@property (readonly, copy) NSDate *fetchStartDate;
@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly) NSString *interfaceServiceName;
@property (readonly, copy) NSString *localAddress;
@property (readonly, copy) NSNumber *localPort;
@property (getter=isMultipath, readonly) bool multipath;
@property (readonly, copy) NSNumber *negotiatedTLSCipherSuite;
@property (readonly, copy) NSNumber *negotiatedTLSProtocolVersion;
@property (readonly, copy) NSString *networkProtocolName;
@property (getter=isProxyConnection, readonly) bool proxyConnection;
@property (readonly, copy) NSString *remoteAddress;
@property (readonly, copy) NSNumber *remotePort;
@property (readonly, copy) NSURLRequest *request;
@property (readonly, copy) NSDate *requestEndDate;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly) long long resourceFetchType;
@property (readonly, copy) NSURLResponse *response;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (getter=isReusedConnection, readonly) bool reusedConnection;
@property (readonly, copy) NSDate *secureConnectionEndDate;
@property (readonly, copy) NSDate *secureConnectionStartDate;

// Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_apsRelayAttempted;
- (bool)_apsRelaySucceeded;
- (id)_connectionIdentifier;
- (bool)_connectionRace;
- (struct { double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; })_connectionTiming;
- (bool)_connectionTimingCached;
- (id)_dataTransferReport;
- (id)_establishmentReport;
- (id)_firstByteReceivedDate;
- (id)_interfaceName;
- (bool)_isUnlistedTracker;
- (id)_localAddressAndPort;
- (bool)_localCache;
- (unsigned short)_negotiatedTLSCipher;
- (int)_negotiatedTLSProtocol;
- (int)_privacyStance;
- (id)_proxyAddress;
- (id)_proxyPort;
- (unsigned int)_redirected;
- (id)_remoteAddressAndPort;
- (long long)_requestHeaderBytesSent;
- (long long)_responseBodyBytesDecoded;
- (long long)_responseBodyBytesReceived;
- (long long)_responseHeaderBytesReceived;
- (bool)_secureConnection;
- (bool)_serverPush;
- (long long)_totalBytesReceived;
- (long long)_totalBytesSent;
- (bool)_usesMultipath;
- (id)connectEndDate;
- (id)connectStartDate;
- (long long)countOfRequestBodyBytesBeforeEncoding;
- (long long)countOfRequestBodyBytesSent;
- (long long)countOfRequestHeaderBytesSent;
- (long long)countOfResponseBodyBytesAfterDecoding;
- (long long)countOfResponseBodyBytesReceived;
- (long long)countOfResponseHeaderBytesReceived;
- (id)description;
- (id)domainLookupEndDate;
- (id)domainLookupStartDate;
- (long long)domainResolutionProtocol;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCellular;
- (bool)isConstrained;
- (bool)isExpensive;
- (bool)isMultipath;
- (bool)isProxyConnection;
- (bool)isReusedConnection;
- (id)localAddress;
- (id)localPort;
- (id)negotiatedTLSCipherSuite;
- (id)negotiatedTLSProtocolVersion;
- (id)networkProtocolName;
- (id)remoteAddress;
- (id)remotePort;
- (id)request;
- (id)requestEndDate;
- (id)requestStartDate;
- (long long)resourceFetchType;
- (id)response;
- (id)responseEndDate;
- (id)responseStartDate;
- (id)secureConnectionEndDate;
- (id)secureConnectionStartDate;
- (void)set_connectionTiming:(struct { double x1; double x2; unsigned int x3; unsigned int x4; unsigned int x5; bool x6; })arg1;
- (void)set_connectionTimingCached:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/C2.framework/C2

+ (id)_c2_stringForTLSProtocolVersion:(unsigned short)arg1;

- (id)c2_NegotiatedTLSProtocolVersionString;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)interfaceName;
- (id)interfaceServiceName;

@end
