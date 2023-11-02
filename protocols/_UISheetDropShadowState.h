
@protocol _UISheetDropShadowState <NSObject>

@required

- (double)_depthLevel;
- (bool)_hasChildSheet;
- (bool)_hasParentSheet;
- (double)_invertedDepthLevel;
- (bool)_isEffectivePresented;
- (bool)_isHosting;

@end
