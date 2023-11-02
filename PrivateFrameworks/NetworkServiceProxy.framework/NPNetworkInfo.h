
@interface NPNetworkInfo : NSObject <NSSecureCoding> {
    NSArray * _currentLatencyMap;
    NSArray * _edgeLatencies;
    NPEdgeSelection * _edgeSelection;
    bool  _hasIPv6;
    bool  _isProbeInProgress;
    long long  _lastFallbackReason;
    NSDate * _lastUsed;
    NSDate * _lastVisited;
    NSDate * _probeRateLimit;
}

@property (retain) NSArray *currentLatencyMap;
@property (retain) NSArray *edgeLatencies;
@property (retain) NPEdgeSelection *edgeSelection;
@property bool hasIPv6;
@property bool isProbeInProgress;
@property long long lastFallbackReason;
@property (nonatomic, retain) NSDate *lastUsed;
@property (nonatomic, readonly) NSString *lastUsedDesc;
@property (nonatomic, retain) NSDate *lastVisited;
@property (nonatomic, readonly) NSString *lastVisitedDesc;
@property (retain) NSDate *probeRateLimit;

+ (long long)failureReasonToFallbackReason:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compareLastVisited:(id)arg1;
- (id)currentLatencyMap;
- (id)edgeLatencies;
- (id)edgeSelection;
- (void)encodeWithCoder:(id)arg1;
- (void)handleTFOFailedForAddressFamily:(unsigned char)arg1;
- (bool)hasIPv6;
- (id)initWithCoder:(id)arg1;
- (bool)isLatency:(id)arg1 qualifiedForLatencyMap:(id)arg2 parameters:(struct networkParameters { bool x1; bool x2; }*)arg3 requireUniqueEdges:(bool)arg4;
- (bool)isProbeInProgress;
- (long long)lastFallbackReason;
- (id)lastUsed;
- (id)lastUsedDesc;
- (id)lastVisited;
- (id)lastVisitedDesc;
- (void)mergeNewLatencies:(id)arg1 usingComparator:(id /* block */)arg2;
- (id)probeRateLimit;
- (void)rebuildLatencyMapWithViewSize:(id)arg1 edgeCount:(unsigned long long)arg2 parameters:(struct networkParameters { bool x1; bool x2; }*)arg3;
- (void)resortEdgeLatenciesUsingComparator:(id /* block */)arg1;
- (void)setCurrentLatencyMap:(id)arg1;
- (void)setEdgeLatencies:(id)arg1;
- (void)setEdgeSelection:(id)arg1;
- (void)setHasIPv6:(bool)arg1;
- (void)setIsProbeInProgress:(bool)arg1;
- (void)setLastFallbackReason:(long long)arg1;
- (void)setLastUsed:(id)arg1;
- (void)setLastVisited:(id)arg1;
- (void)setProbeRateLimit:(id)arg1;

@end
