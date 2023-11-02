
@interface AMDStorageBasedProvider : AMDFeatureProvider {
    NSString * _domain;
}

@property (nonatomic, retain) NSString *domain;

- (void).cxx_destruct;
- (id)domain;
- (id)getFeatureWithName:(id)arg1 withColumn:(id)arg2 error:(id*)arg3;
- (id)initWithDomain:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)storeFeatureData:(id)arg1 error:(id*)arg2;

@end
