
@interface SHDefaultConfigurationValues : NSObject {
    NSDictionary * _defaultValues;
}

@property (nonatomic, readonly, copy) NSString *campaignGroup;
@property (nonatomic, readonly) NSDictionary *defaultValues;
@property (nonatomic, readonly) long long lookupBatchSize;
@property (nonatomic, readonly, copy) NSString *providerToken;
@property (nonatomic, readonly) double recordingIntermission;

- (void).cxx_destruct;
- (id)campaignGroup;
- (id)defaultValues;
- (id)initWithConfiguration:(id)arg1;
- (long long)lookupBatchSize;
- (id)providerToken;
- (double)recordingIntermission;

@end
