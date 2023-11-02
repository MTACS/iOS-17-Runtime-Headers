
@interface _UIStatusBarRegionAxisSquishyLayout : NSObject <_UIStatusBarRegionAxisLayout> {
    long long  _alignment;
    bool  _compressItems;
    <_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> * _dynamicHidingDelegate;
    double  _interspace;
    double  _itemDynamicScale;
    long long  _maxNumberOfItems;
    long long  _maxNumberOfVisibleItems;
    double  _minInterspaceDynamicScale;
    double  _minItemDynamicScale;
}

@property (nonatomic) long long alignment;
@property (nonatomic, readonly) bool canOverflowItems;
@property (nonatomic) bool compressItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <_UIStatusBarRegionAxisSquishyLayoutDynamicHidingDelegate> *dynamicHidingDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interspace;
@property (nonatomic) double itemDynamicScale;
@property (nonatomic) long long maxNumberOfItems;
@property (nonatomic) long long maxNumberOfVisibleItems;
@property (nonatomic) double minInterspaceDynamicScale;
@property (nonatomic) double minItemDynamicScale;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)alignment;
- (bool)canOverflowItems;
- (bool)compressItems;
- (id)constraintsForDisplayItems:(id)arg1 layoutGuides:(id)arg2 inContainerItem:(id)arg3 axis:(long long)arg4;
- (id)dynamicHidingDelegate;
- (id)init;
- (double)interspace;
- (double)itemDynamicScale;
- (long long)maxNumberOfItems;
- (long long)maxNumberOfVisibleItems;
- (bool)mayFitDisplayItems:(id)arg1 inContainerItem:(id)arg2 axis:(long long)arg3;
- (double)minInterspaceDynamicScale;
- (double)minItemDynamicScale;
- (void)setAlignment:(long long)arg1;
- (void)setCompressItems:(bool)arg1;
- (void)setDynamicHidingDelegate:(id)arg1;
- (void)setInterspace:(double)arg1;
- (void)setItemDynamicScale:(double)arg1;
- (void)setMaxNumberOfItems:(long long)arg1;
- (void)setMaxNumberOfVisibleItems:(long long)arg1;
- (void)setMinInterspaceDynamicScale:(double)arg1;
- (void)setMinItemDynamicScale:(double)arg1;

@end
