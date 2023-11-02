
@interface PBUIMaterialTreatment : NSObject <BSDescriptionProviding, CABackdropLayerDelegate, CALayerDelegate, NSSecureCoding, PBUIImageTreatment> {
    id /* block */  _backdropScaleAdjustment;
    NSBundle * _recipeBundle;
    NSString * _recipeName;
    bool  _usesStaticBackdropScaleFactor;
    double  _weighting;
}

@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (nonatomic, readonly) bool canInterpolateToLowerScales;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSBundle *recipeBundle;
@property (nonatomic, copy) NSString *recipeName;
@property (nonatomic, readonly) double resolvedBackdropScale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usesStaticBackdropScaleFactor;
@property (nonatomic) double weighting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id /* block */)backdropScaleAdjustment;
- (bool)canInterpolateToLowerScales;
- (bool)commitToRenderingTree:(id)arg1 options:(id)arg2 error:(out id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecipeName:(id)arg1 fromBundle:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)recipeBundle;
- (id)recipeName;
- (double)resolvedBackdropScale;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setRecipeBundle:(id)arg1;
- (void)setRecipeName:(id)arg1;
- (void)setWeighting:(double)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)usesStaticBackdropScaleFactor;
- (double)weighting;

@end
