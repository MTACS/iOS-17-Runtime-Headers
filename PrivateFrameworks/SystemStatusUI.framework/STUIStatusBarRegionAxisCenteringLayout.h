
@interface STUIStatusBarRegionAxisCenteringLayout : NSObject <STUIStatusBarRegionAxisLayout> {
    double  _interspace;
    double  _margin;
    long long  _maxNumberOfItems;
}

@property (nonatomic, readonly) bool canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interspace;
@property (nonatomic) double margin;
@property (nonatomic) long long maxNumberOfItems;
@property (readonly) Class superclass;

- (bool)canOverflowItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (id)init;
- (double)interspace;
- (double)margin;
- (long long)maxNumberOfItems;
- (bool)mayFitDisplayItems:(id)arg1 inContainerItem:(id)arg2 axis:(long long)arg3;
- (void)setInterspace:(double)arg1;
- (void)setMargin:(double)arg1;
- (void)setMaxNumberOfItems:(long long)arg1;

@end
