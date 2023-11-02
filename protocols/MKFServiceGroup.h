
@protocol MKFServiceGroup <MKFModel, MKFServiceGroupPublicExtensions>

@required

- (void)addServicesObject:(id <MKFService>)arg1;
- (<MKFApplicationData> *)applicationData;
- (MKFServiceGroupDatabaseID *)databaseID;
- (<MKFHome> *)home;
- (<MKFApplicationData> *)materializeOrCreateApplicationDataRelation:(bool*)arg1;
- (NSString *)name;
- (void)removeServicesObject:(id <MKFService>)arg1;
- (NSArray *)services;
- (void)setApplicationData:(id <MKFApplicationData>)arg1;
- (void)setName:(NSString *)arg1;
- (void)setWriterTimestamp:(NSDate *)arg1;
- (NSDate *)writerTimestamp;

@end
