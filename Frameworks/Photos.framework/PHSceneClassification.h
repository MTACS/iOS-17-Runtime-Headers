
@interface PHSceneClassification : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    long long  _classificationType;
    double  _confidence;
    double  _duration;
    long long  _packedBoundingBoxRect;
    unsigned int  _sceneIdentifier;
    double  _startTime;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) long long classificationType;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double duration;
@property (nonatomic) long long packedBoundingBoxRect;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) double startTime;

+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
+ (id)fetchSceneClassificationsGroupedByAssetLocalIdentifierForAssets:(id)arg1 includeTemporalClassifications:(bool)arg2;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (long long)classificationType;
- (double)confidence;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startTime:(double)arg4 duration:(double)arg5;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startTime:(double)arg4 duration:(double)arg5 classificationSource:(long long)arg6;
- (id)initWithSceneIdentifier:(unsigned int)arg1 confidence:(double)arg2 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 startTime:(double)arg4 duration:(double)arg5 classificationType:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSceneClassification:(id)arg1;
- (long long)packedBoundingBoxRect;
- (unsigned int)sceneIdentifier;
- (void)setPackedBoundingBoxRect:(long long)arg1;
- (double)startTime;

@end
