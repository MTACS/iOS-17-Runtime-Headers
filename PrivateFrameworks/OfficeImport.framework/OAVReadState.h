
@interface OAVReadState : OCXReadState {
    Class  mClient;
    NSMutableSet * mDualDrawables;
    OAXDrawingState * mOAXState;
    OCPPackagePart * mPackagePart;
    NSMutableDictionary * mShapeIdMap;
    NSMutableDictionary * mShapeTypes;
}

@property OAXDrawingState *oaxState;

- (void).cxx_destruct;
- (void)addDualDrawable:(id)arg1;
- (id)blipRefForURL:(id)arg1;
- (Class)client;
- (id)drawableForVmlShapeId:(id)arg1;
- (id)initWithClient:(Class)arg1 packagePart:(id)arg2;
- (bool)isDualDrawable:(id)arg1;
- (id)oaxState;
- (unsigned int)officeArtShapeIdWithVmlShapeId:(id)arg1;
- (id)packagePart;
- (void)resetForNewDrawing;
- (void)setDrawable:(id)arg1 forVmlShapeId:(id)arg2;
- (void)setOaxState:(id)arg1;
- (void)setPackagePart:(id)arg1;
- (void)setShapeType:(unsigned short)arg1 forId:(id)arg2;
- (unsigned short)shapeTypeForId:(id)arg1;

@end
