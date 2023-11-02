
@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe> {
    bool  _addSide;
    unsigned long long  _mode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_perform;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (id)title;

@end
