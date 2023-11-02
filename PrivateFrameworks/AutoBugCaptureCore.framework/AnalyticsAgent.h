
@interface AnalyticsAgent : NSObject {
    NSSet * _awdSymptomsConfiguredMetricIds;
    NSObject<OS_dispatch_queue> * _queue;
    AWDServerConnection * _symptomsAWDConnection;
}

@property (nonatomic, retain) NSSet *awdSymptomsConfiguredMetricIds;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) AWDServerConnection *symptomsAWDConnection;

+ (id)_awdSignificantOperationalEventMetricForSignificantEvent:(int)arg1 orEventName:(id)arg2 errorContext:(int)arg3 error:(id)arg4 status:(int)arg5;
+ (id)_awdSymptomsDiagnosticIncidentReportMetricForDiagnosticCase:(id)arg1;
+ (id)_awdSymptomsDiagnosticNotificationTokenMetricForTokenString:(id)arg1;
+ (int)awdDampeningType:(short)arg1;
+ (int)awdHandledResult:(short)arg1;
+ (id)sharedInstance;
+ (void)updateAWDReport:(id)arg1 withEvents:(id)arg2;

- (void).cxx_destruct;
- (void)_handleQuery:(unsigned int)arg1;
- (void)_postMetric:(id)arg1 metricIdentifier:(unsigned int)arg2;
- (void)_registerAWDQueriableMetric:(unsigned int)arg1;
- (void)apnsPostAPNSNotEnabled;
- (void)apnsPostNotificationToken:(id)arg1;
- (void)apnsPostTokenConversionError;
- (void)apnsPostTokenEmpty;
- (void)apnsPostTokenNotSet;
- (id)awdSymptomsConfiguredMetricIds;
- (id)initWithSymptomsAWDConnection:(id)arg1 queue:(id)arg2;
- (void)postDiagnosticIncidentReportForCase:(id)arg1;
- (void)postMetric:(id)arg1 metricIdentifier:(unsigned int)arg2;
- (void)postMetricForSignificantEvent:(int)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (void)postMetricForSignificantEventWithName:(id)arg1 errorContext:(int)arg2 error:(id)arg3 status:(int)arg4;
- (id)queue;
- (void)setAwdSymptomsConfiguredMetricIds:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSymptomsAWDConnection:(id)arg1;
- (id)symptomsAWDConnection;

@end
