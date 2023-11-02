
@interface LBFDeploymentEventsHolder : NSObject {
    NSString * _deploymentId;
    NSMutableArray * _dprivacydEvents;
    NSString * _experimentOrTaskId;
    NSMutableArray * _lighthousePluginEvents;
    NSMutableArray * _mlruntimedEvents;
    NSMutableArray * _trialdEvents;
}

@property (nonatomic, readonly) NSString *deploymentId;
@property (nonatomic, readonly) NSMutableArray *dprivacydEvents;
@property (nonatomic, readonly) NSString *experimentOrTaskId;
@property (nonatomic, readonly) NSMutableArray *lighthousePluginEvents;
@property (nonatomic, readonly) NSMutableArray *mlruntimedEvents;
@property (nonatomic, readonly) NSMutableArray *trialdEvents;

- (void).cxx_destruct;
- (bool)appendDprivacydEvent:(id)arg1;
- (bool)appendLighthousePluginEvent:(id)arg1;
- (bool)appendMlruntimedEvent:(id)arg1;
- (bool)appendTrialEvent:(id)arg1;
- (id)deploymentId;
- (id)dprivacydEvents;
- (bool)dumpFetchedEvents;
- (id)eventToJSONDictionary:(id)arg1;
- (id)eventToJSONString:(id)arg1;
- (id)experimentOrTaskId;
- (id)fetchedEventsInDictionaries;
- (id)getSortedEvents;
- (id)initWithExperimentOrTaskId:(id)arg1 deploymentId:(id)arg2;
- (id)lighthousePluginEvents;
- (id)mlruntimedEvents;
- (id)trialdEvents;

@end
