
@interface UIMenuSystem : NSObject {
    _UIMenuBuilder * _defaultBuilder;
}

+ (id)contextSystem;
+ (id)mainSystem;

- (void).cxx_destruct;
- (bool)_buildMenuWithBuilder:(id)arg1 fromResponderChain:(id)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 inCoordinateSpace:(id)arg4;
- (id)_newBuilderFromResponderChain:(id)arg1 atLocation:(struct CGPoint { double x1; double x2; })arg2 inCoordinateSpace:(id)arg3;
- (void)_setInitialBuildingResponder:(id)arg1;
- (id)initWithRootMenuChildren:(id)arg1;
- (void)setNeedsRebuild;
- (void)setNeedsRevalidate;

@end
