
@interface LBFExperimentEventsHolder : NSObject {
    NSMutableDictionary * _deploymentEventsHolders;
    NSString * _experimentOrTaskId;
}

@property (nonatomic, readonly, retain) NSMutableDictionary *deploymentEventsHolders;
@property (nonatomic, readonly) NSString *experimentOrTaskId;

- (void).cxx_destruct;
- (id)deploymentEventsHolders;
- (bool)dumpFetchedEvents;
- (id)ensureDeploymentEventsHolder:(id)arg1;
- (id)experimentOrTaskId;
- (id)fetchedEventsInDictionaries;
- (id)initWithExperimentOrTaskId:(id)arg1;

@end
