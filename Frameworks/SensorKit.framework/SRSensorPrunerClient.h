
@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning> {
    SRSensorPruner * _pruner;
}

@property SRSensorPruner *pruner;

+ (id)prunerClientWithPruner:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPruner:(id)arg1;
- (id)pruner;
- (void)resetDatastoreFiles:(id)arg1;
- (void)setPruner:(id)arg1;

@end
