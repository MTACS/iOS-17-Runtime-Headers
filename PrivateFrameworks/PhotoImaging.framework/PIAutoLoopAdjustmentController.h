
@interface PIAutoLoopAdjustmentController : PIAdjustmentController

@property (nonatomic, copy) NSString *flavor;
@property (nonatomic, copy) NSDictionary *recipe;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } stabilizedCropRect;

+ (id)flavorKey;
+ (id)recipeKey;

- (id)flavor;
- (id)pasteKeysForMediaType:(long long)arg1;
- (id)recipe;
- (void)setFlavor:(id)arg1;
- (void)setRecipe:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })stabilizedCropRect;

@end
