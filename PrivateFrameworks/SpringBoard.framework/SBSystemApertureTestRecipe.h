
@interface SBSystemApertureTestRecipe : NSObject <SBTestRecipe> {
    NSMutableArray * _elementAssertions;
    long long  _elementClassToInsertIndex;
    NSArray * _prototypeElementClasses;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;
- (id)title;

@end
