
@interface _UIStatusBarRegionAxisFillingLayout : NSObject <_UIStatusBarRegionAxisLayout>

@property (nonatomic, readonly) bool canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)fillingLayout;

- (bool)canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;

@end
