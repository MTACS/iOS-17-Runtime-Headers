
@interface DKReportManager : NSObject {
    NSArray * _availableReportGenerators;
    NSString * _bundleIdentifier;
    bool  _cancelled;
    DKExtensionDiscovery * _discovery;
    DKReportPlanner * _planner;
    DKReporterRegistry * _registry;
    NSObject<OS_dispatch_queue> * _reportManagerQueue;
}

@property (nonatomic, copy) NSArray *availableReportGenerators;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, retain) DKExtensionDiscovery *discovery;
@property (nonatomic, retain) DKReportPlanner *planner;
@property (nonatomic, retain) DKReporterRegistry *registry;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *reportManagerQueue;

- (void).cxx_destruct;
- (id)availableReportGenerators;
- (id)bundleIdentifier;
- (void)cancelAllReports;
- (id)discovery;
- (id)init;
- (id)initWithBundleIdentifier:(id)arg1;
- (bool)isCancelled;
- (id)planner;
- (id)registry;
- (id)reportManagerQueue;
- (void)reportWithComponentPredicateManifest:(id)arg1 completion:(id /* block */)arg2;
- (void)reportersWithCompletion:(id /* block */)arg1;
- (id)sendRequestsForGroup:(id)arg1 concurrent:(bool)arg2 failOnError:(bool)arg3 error:(id*)arg4;
- (void)setAvailableReportGenerators:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setPlanner:(id)arg1;
- (void)setRegistry:(id)arg1;
- (void)setReportManagerQueue:(id)arg1;

@end
