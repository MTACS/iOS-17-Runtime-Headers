
@protocol VKCustomFeatureDataSourceObserver <NSObject>

@required

- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneID:(unsigned char)arg2;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 didChangeSceneState:(unsigned char)arg2;
- (void)dataSource:(id <VKCustomFeatureDataSource>)arg1 featuresDidChangeForRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)globalFeaturesDidChangeForDataSource:(id <VKCustomFeatureDataSource>)arg1;

@end
