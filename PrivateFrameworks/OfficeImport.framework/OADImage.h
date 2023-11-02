
@interface OADImage : OADGraphic {
    OADShapeGeometry * mGeometry;
    OADMovie * mMovie;
    OADOle * mOle;
}

- (void).cxx_destruct;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)createImageFill;
- (void)createPictureFramePresetGeometry;
- (id)description;
- (id)geometry;
- (id)imageProperties;
- (id)init;
- (id)initWithBlipRef:(id)arg1;
- (id)movie;
- (id)ole;
- (void)setGeometry:(id)arg1;
- (void)setMovie:(id)arg1;
- (void)setOle:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;

@end
