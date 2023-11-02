
@interface SNKShotFeaturizationStreamResult : NSObject {
    void impl;
}

@property (nonatomic, retain) MLMultiArray *data;
@property (nonatomic) long long datasetType;
@property (nonatomic, retain) SNKShotLabel *label;

- (void).cxx_destruct;
- (id)data;
- (long long)datasetType;
- (id)init;
- (id)label;
- (void)setData:(id)arg1;
- (void)setDatasetType:(long long)arg1;
- (void)setLabel:(id)arg1;

@end
