
@interface CRTextDetectorModelV3Output : NSObject <MLFeatureProvider> {
    MLMultiArray * _link_score_horizontal;
    MLMultiArray * _link_score_vertical;
    MLMultiArray * _orientation_score;
    MLMultiArray * _region_score;
    MLMultiArray * _script_feature;
    MLMultiArray * _script_score;
    MLMultiArray * _table_score;
    MLMultiArray * _text_type_score;
}

@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) MLMultiArray *link_score_horizontal;
@property (nonatomic, retain) MLMultiArray *link_score_vertical;
@property (nonatomic, retain) MLMultiArray *orientation_score;
@property (nonatomic, retain) MLMultiArray *region_score;
@property (nonatomic, retain) MLMultiArray *script_feature;
@property (nonatomic, retain) MLMultiArray *script_score;
@property (nonatomic, retain) MLMultiArray *table_score;
@property (nonatomic, retain) MLMultiArray *text_type_score;

+ (id)shapeExcludingBatch:(id)arg1;
+ (id)stridesExcludingBatch:(id)arg1;

- (void).cxx_destruct;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithRegion_score:(id)arg1 script_feature:(id)arg2 link_score_horizontal:(id)arg3 link_score_vertical:(id)arg4 orientation_score:(id)arg5 text_type_score:(id)arg6 table_score:(id)arg7;
- (id)link_score_horizontal;
- (id)link_score_vertical;
- (id)orientation_score;
- (id)region_score;
- (id)script_feature;
- (id)script_score;
- (void)setLink_score_horizontal:(id)arg1;
- (void)setLink_score_vertical:(id)arg1;
- (void)setOrientation_score:(id)arg1;
- (void)setRegion_score:(id)arg1;
- (void)setScript_feature:(id)arg1;
- (void)setScript_score:(id)arg1;
- (void)setTable_score:(id)arg1;
- (void)setText_type_score:(id)arg1;
- (id)table_score;
- (id)text_type_score;

@end
