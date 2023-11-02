
@interface _UIMainMenuSystem : UIMenuSystem {
    _UIMenuBuilder * _automaticallyRebuildingBuilder;
    UIResponder * _initialBuildingResponderOverride;
}

@property (nonatomic, readonly) NSArray *_keyCommands;
@property (nonatomic, readonly) UIMenu *_rootMenu;

+ (id)_sharedSystem;

- (void).cxx_destruct;
- (void)_automaticallyRebuildIfNeeded;
- (bool)_buildMenuWithBuilder:(id)arg1 fromResponderChain:(id)arg2 atLocation:(struct CGPoint { double x1; double x2; })arg3 inCoordinateSpace:(id)arg4;
- (id)_init;
- (id)_keyCommands;
- (id)_rootMenu;
- (void)_setInitialBuildingResponder:(id)arg1;
- (void)dealloc;
- (void)setNeedsRebuild;

@end
