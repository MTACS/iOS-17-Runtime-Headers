
@interface CRIntermediateDetectorResult : NSObject {
    NSMutableArray * _pyramidPostInterScaleNMSTextFeatures;
    NSMutableArray * _pyramidPostIntraScaleNMSTextFeatures;
    NSMutableArray * _pyramidPreIntraScaleNMSTextFeatures;
    NSMutableArray * _pyramidScaleName;
    NSMutableArray * _pyramidScaleSize;
}

@property (nonatomic, retain) NSMutableArray *pyramidPostInterScaleNMSTextFeatures;
@property (nonatomic, retain) NSMutableArray *pyramidPostIntraScaleNMSTextFeatures;
@property (nonatomic, retain) NSMutableArray *pyramidPreIntraScaleNMSTextFeatures;
@property (nonatomic, retain) NSMutableArray *pyramidScaleName;
@property (nonatomic, retain) NSMutableArray *pyramidScaleSize;

- (void).cxx_destruct;
- (id)initWithNumberOfScales:(long long)arg1;
- (id)pyramidPostInterScaleNMSTextFeatures;
- (id)pyramidPostIntraScaleNMSTextFeatures;
- (id)pyramidPreIntraScaleNMSTextFeatures;
- (id)pyramidScaleName;
- (id)pyramidScaleSize;
- (void)setPyramidPostInterScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidPostIntraScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidPreIntraScaleNMSTextFeatures:(id)arg1;
- (void)setPyramidScaleName:(id)arg1;
- (void)setPyramidScaleSize:(id)arg1;

@end
