
@interface APPCDiagnosticMetricsHelper : NSObject <APPCDiagnosticMetricsHelping, APPCMetricRegister> {
    void contextIdentifier;
    void metricEventsTracking;
    void networkType;
    void notificationOwner;
    void primitiveCreator;
    void promotedContentIdentifier;
}

@property (nonatomic) unsigned long long networkType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContextIdentifier:(id)arg1 promotedContentIdentifier:(id)arg2 primitiveCreator:(id)arg3 notificationOwner:(id)arg4 metricEventsTracking:(id)arg5;
- (void)loadFailedWithReason:(id)arg1 code:(long long)arg2;
- (void)mediaPlaybackFailedWithReason:(id)arg1;
- (unsigned long long)networkType;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)arg1;
- (void)removeHandler;
- (void)setNetworkType:(unsigned long long)arg1;
- (void)templateMetricWithName:(id)arg1 argument:(id)arg2;

@end
