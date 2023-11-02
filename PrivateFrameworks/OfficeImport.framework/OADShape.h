
@interface OADShape : OADGraphic {
    OADShapeGeometry * mGeometry;
    OADTextBody * mTextBody;
    OADOrientedBounds * mTextOrientedBounds;
}

@property (nonatomic, retain) OADOrientedBounds *textOrientedBounds;

- (void).cxx_destruct;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)createPresetGeometryWithShapeType:(int)arg1;
- (id)description;
- (void)flattenProperties;
- (id)geometry;
- (id)init;
- (bool)isTextBox;
- (void)removeUnnecessaryOverrides;
- (void)setGeometry:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (void)setTextBody:(id)arg1;
- (void)setTextOrientedBounds:(id)arg1;
- (id)shapeProperties;
- (id)shapeStyle;
- (id)textBody;
- (id)textOrientedBounds;
- (int)type;

@end
