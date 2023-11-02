
@interface FigCoreWiFi : NSObject {
    struct OpaqueFigReentrantMutex { } * _wifiStatsLock;
    CWFInterface * cwfInterface;
    NSData * ssid;
    NSDictionary * wifiStats;
}

- (id)copyAllWiFiStats;
- (void)dealloc;
- (id)initWithError:(id*)arg1;

@end
