
@interface AXMTaxonomyNode : NSObject {
    double  _confidence;
    NSMutableSet * _detectorSceneClassIds;
    NSString * _label;
    NSString * _localizedName;
    unsigned int  _sceneClassId;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSMutableSet *detectorSceneClassIds;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic) unsigned int sceneClassId;

- (void).cxx_destruct;
- (double)confidence;
- (id)detectorSceneClassIds;
- (id)label;
- (id)localizedName;
- (unsigned int)sceneClassId;
- (void)setConfidence:(double)arg1;
- (void)setDetectorSceneClassIds:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setSceneClassId:(unsigned int)arg1;

@end
