
@interface CloudTelemetry : NSObject {
    void completelyDisabled;
    void configured;
    void connectionManager;
    void earlyCachedEvents;
    void extraFields;
    void generatedSessionID;
    void lock;
    void sentEventCount;
    void terminated;
}

+ (bool)reportWithTeamID:(id)arg1 schemaID:(long long)arg2 event:(id)arg3 error:(id*)arg4;
+ (bool)setupXpcServiceActivitiesAndReturnError:(id*)arg1;

- (void).cxx_destruct;
- (id)init;

@end
