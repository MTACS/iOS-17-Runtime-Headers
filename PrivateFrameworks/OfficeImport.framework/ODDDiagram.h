
@interface ODDDiagram : OADDrawable {
    ODDColorTransform * mColorTransform;
    ODDNodePoint * mDocumentPoint;
    NSArray * mEquivalentDrawables;
    ODDStyleDefinition * mStyleDefinition;
}

@property (nonatomic, retain) NSArray *equivalentDrawables;

- (void).cxx_destruct;
- (id)colorTransform;
- (id)description;
- (id)documentPoint;
- (id)equivalentDrawables;
- (id)init;
- (void)setDocumentPoint:(id)arg1;
- (void)setEquivalentDrawables:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)styleDefinition;

@end
