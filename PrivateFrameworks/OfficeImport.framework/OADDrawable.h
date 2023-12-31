
@interface OADDrawable : NSObject {
    unsigned int  mAltId;
    <OADClient> * mClientData;
    OADDrawableProperties * mDrawableProperties;
    bool  mHidden;
    unsigned int  mId;
    OADDrawable<OADDrawableContainer> * mParent;
}

@property OADDrawable<OADDrawableContainer> *parent;

+ (unsigned int)generateOADDrawableId:(id)arg1;

- (void).cxx_destruct;
- (unsigned int)altId;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (id)clientData;
- (id)createOrientedBoundsWithBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)createWordClientDataWithTextType:(int)arg1;
- (id)description;
- (id)drawableProperties;
- (id)ensureClientDataOfClass:(Class)arg1;
- (bool)hidden;
- (unsigned int)id;
- (id)initWithPropertiesClass:(Class)arg1;
- (id)parent;
- (void)removeUnnecessaryOverrides;
- (void)setAltId:(unsigned int)arg1;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setId:(unsigned int)arg1;
- (void)setParent:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;

@end
