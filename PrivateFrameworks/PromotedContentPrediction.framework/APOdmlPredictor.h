
@interface APOdmlPredictor : NSObject {
    NSArray * _adamIDs;
    APOdmlAssetManager * _assetManager;
    APOdmlFeatureHandler * _featureHandler;
    MLModel * _predictionModel;
}

@property (nonatomic, readonly) NSArray *adamIDs;
@property (nonatomic, readonly) APOdmlAssetManager *assetManager;
@property (nonatomic, readonly) APOdmlFeatureHandler *featureHandler;
@property (nonatomic, readonly) MLModel *predictionModel;

- (void).cxx_destruct;
- (id)adamIDs;
- (id)assetManager;
- (id)featureHandler;
- (id)initWithResponses:(id)arg1 assetManager:(id)arg2 model:(id)arg3;
- (void)localOutputLog:(id)arg1 adamID:(id)arg2;
- (id)predictTapThroughRate;
- (id)predictionModel;
- (void)validateOutput:(id)arg1 adamID:(id)arg2;

@end
