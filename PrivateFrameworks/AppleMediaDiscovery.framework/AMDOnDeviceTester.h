
@interface AMDOnDeviceTester : NSObject {
    AMDCoreDataPersistentContainer * _container;
}

@property (nonatomic, retain) AMDCoreDataPersistentContainer *container;

+ (id)deleteEvents:(id*)arg1;
+ (id)fetchEvents:(id*)arg1;
+ (id)fetchModelUrls:(id*)arg1;
+ (id)fetchTasteProfile:(id*)arg1;
+ (id)getAppSegments:(id*)arg1;
+ (id)getEnvironments;
+ (bool)initEnv:(id)arg1 withDomain:(id)arg2 userId:(id)arg3 andStoreFrontId:(id)arg4;
+ (void)initPersistentContainer;
+ (void)refreshOnDeviceTasteProfile:(id)arg1 withUserId:(id)arg2 andStoreFrontId:(unsigned int)arg3 error:(id*)arg4;
+ (void)saveDescriptors:(id)arg1 forDomain:(long long)arg2 error:(id*)arg3;
+ (void)saveEvent:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)container;
- (id)init;
- (void)setContainer:(id)arg1;
- (void)testAddEvent:(id*)arg1;
- (void)testAggregation:(id*)arg1;
- (void)testClient:(id*)arg1;
- (void)testFeatureDescriptor:(id*)arg1;
- (void)testOnDeviceTasteProfile:(id)arg1 error:(id*)arg2;
- (void)testRunInference:(id*)arg1;
- (void)testSaveConfigAndDownloadModel:(id*)arg1;

@end
