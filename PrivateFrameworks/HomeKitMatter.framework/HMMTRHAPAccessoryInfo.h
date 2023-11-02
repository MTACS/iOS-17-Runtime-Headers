
@interface HMMTRHAPAccessoryInfo : HMFObject {
    NSMutableDictionary * _accessoryInfoDictionary;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryInfoDictionary;

- (void).cxx_destruct;
- (id)accessoryInfoDictionary;
- (id)accessoryInfoForEndpoint:(id)arg1;
- (id)attributeDescriptions;
- (id)categoriesForEndpoint:(id)arg1;
- (id)fixedLabelsForEndpoint:(id)arg1;
- (id)init;
- (id)initWithType:(id)arg1;
- (id)nameForEndpoint:(id)arg1;
- (id)partsListForEndpoint:(id)arg1;
- (id)serviceDescriptionsForEndpoint:(id)arg1;
- (void)setAccessoryInfo:(id)arg1 forEndpoint:(id)arg2;
- (void)setAccessoryInfoDictionary:(id)arg1;

@end
