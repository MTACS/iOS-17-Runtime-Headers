
@interface WebCoreNSURLSessionTaskTransactionMetrics : NSObject {
    struct NetworkLoadMetrics { 
        struct MonotonicTime { 
            double m_value; 
        } redirectStart; 
        struct MonotonicTime { 
            double m_value; 
        } fetchStart; 
        struct MonotonicTime { 
            double m_value; 
        } domainLookupStart; 
        struct MonotonicTime { 
            double m_value; 
        } domainLookupEnd; 
        struct MonotonicTime { 
            double m_value; 
        } connectStart; 
        struct MonotonicTime { 
            double m_value; 
        } secureConnectionStart; 
        struct MonotonicTime { 
            double m_value; 
        } connectEnd; 
        struct MonotonicTime { 
            double m_value; 
        } requestStart; 
        struct MonotonicTime { 
            double m_value; 
        } responseStart; 
        struct MonotonicTime { 
            double m_value; 
        } responseEnd; 
        struct MonotonicTime { 
            double m_value; 
        } workerStart; 
        struct String { 
            struct RefPtr<WTF::StringImpl, WTF::RawPtrTraits<WTF::StringImpl>, WTF::DefaultRefDerefTraits<WTF::StringImpl>> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } protocol; 
        unsigned short redirectCount; 
        unsigned int complete : 1; 
        unsigned int cellular : 1; 
        unsigned int expensive : 1; 
        unsigned int constrained : 1; 
        unsigned int multipath : 1; 
        unsigned int isReusedConnection : 1; 
        unsigned int failsTAOCheck : 1; 
        unsigned int hasCrossOriginRedirect : 1; 
        unsigned char privacyStance; 
        unsigned long long responseBodyBytesReceived; 
        unsigned long long responseBodyDecodedSize; 
        struct RefPtr<WebCore::AdditionalNetworkLoadMetricsForWebInspector, WTF::RawPtrTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>, WTF::DefaultRefDerefTraits<WebCore::AdditionalNetworkLoadMetricsForWebInspector>> { 
            struct AdditionalNetworkLoadMetricsForWebInspector {} *m_ptr; 
        } additionalNetworkLoadMetricsForWebInspector; 
    }  _metrics;
}

@property (readonly) int _privacyStance;
@property (getter=isCellular, readonly) bool cellular;
@property (readonly, copy) NSDate *connectEndDate;
@property (readonly, copy) NSDate *connectStartDate;
@property (getter=isConstrained, readonly) bool constrained;
@property (readonly, copy) NSDate *domainLookupEndDate;
@property (readonly, copy) NSDate *domainLookupStartDate;
@property (getter=isExpensive, readonly) bool expensive;
@property (readonly, copy) NSDate *fetchStartDate;
@property (getter=isMultipath, readonly) bool multipath;
@property (readonly, copy) NSString *networkProtocolName;
@property (readonly, copy) NSDate *requestStartDate;
@property (readonly, copy) NSDate *responseEndDate;
@property (readonly, copy) NSDate *responseStartDate;
@property (getter=isReusedConnection, readonly) bool reusedConnection;
@property (readonly, copy) NSDate *secureConnectionStartDate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithMetrics:(void*)arg1;
- (int)_privacyStance;
- (bool)cellular;
- (id)connectEndDate;
- (id)connectStartDate;
- (bool)constrained;
- (void)dealloc;
- (id)domainLookupEndDate;
- (id)domainLookupStartDate;
- (bool)expensive;
- (id)fetchStartDate;
- (bool)isReusedConnection;
- (bool)multipath;
- (id)networkProtocolName;
- (id)requestStartDate;
- (id)responseEndDate;
- (id)responseStartDate;
- (id)secureConnectionStartDate;

@end
