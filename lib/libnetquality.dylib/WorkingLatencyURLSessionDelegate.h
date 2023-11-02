
@interface WorkingLatencyURLSessionDelegate : LatencyURLSessionDelegate {
    NSMutableArray * _h2TmpArray;
    TrimmedMean * _h2Trim;
    bool  _probeLoadConnections;
    LatencySaturationDetection * _saturation;
    bool  _saturation_reached;
    NSMutableArray * _selfTmpArray;
    TrimmedMean * _selfTrim;
    NSDate * _start;
    NSMutableArray * _tcpTmpArray;
    TrimmedMean * _tcpTrim;
    NSMutableArray * _tlsTmpArray;
    TrimmedMean * _tlsTrim;
    NSMutableArray * _workingSessions;
    bool  isDownlink;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (long long)currentResponsivenessConfidenceValue;
- (void)executeTaskWithRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)getProbeTimeout;
- (id)initWithConfiguration:(id)arg1 testName:(id)arg2 queue:(id)arg3 testEndpoint:(id)arg4 resultsObject:(id)arg5 resultsDelegate:(id)arg6 urlSessions:(id)arg7 tcpKey:(id)arg8 tlsKey:(id)arg9 reqrespKey:(id)arg10 selfKey:(id)arg11;
- (void)isDownlinkTest;
- (void)scheduleNewTaskForeign;
- (void)scheduleNewTaskSelf;
- (void)waitForSaturation:(id /* block */)arg1;

@end
