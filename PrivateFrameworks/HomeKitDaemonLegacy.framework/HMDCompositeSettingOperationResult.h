
@interface HMDCompositeSettingOperationResult : HMFObject {
    NSError * _error;
    NSString * _keyPath;
    HMDCompositeSettingMetadata * _metadata;
    HMDCompositeSetting * _setting;
}

@property (readonly, copy) NSError *error;
@property (readonly, copy) NSString *keyPath;
@property (readonly) HMDCompositeSettingMetadata *metadata;
@property (readonly) HMDCompositeSetting *setting;

+ (id)frameWorkFetchResultsWithOperationResults:(id)arg1;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)error;
- (id)initWithKeyPath:(id)arg1 setting:(id)arg2 metadata:(id)arg3 error:(id)arg4;
- (id)keyPath;
- (id)metadata;
- (id)setting;

@end
