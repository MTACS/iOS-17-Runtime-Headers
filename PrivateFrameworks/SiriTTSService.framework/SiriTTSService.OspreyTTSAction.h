
@interface SiriTTSService.OspreyTTSAction : SiriTTSService.Buffer {
    void asyncContext;
    void cacheStorage;
    void internalSettings;
    void notificationCenter;
    void observers;
    void ospreyClient;
    void ospreyConfig;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  streamingStartedDate;
    void timeout;
}

@end
