
@interface BWSemanticStyleSetFencedAnimationInfo : BWFencedAnimationInfo {
    FigCaptureSemanticStyleSet * _semanticStyleSet;
}

@property (readonly) FigCaptureSemanticStyleSet *semanticStyleSet;

+ (id)fencedAnimationInfoWithSemanticStyleSet:(id)arg1 fencePortSendRight:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)semanticStyleSet;

@end
