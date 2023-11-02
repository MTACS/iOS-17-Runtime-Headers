
@interface STUIStatusBarRegionAxesLayout : NSObject <STUIStatusBarRegionLayout> {
    NSArray * _displayItems;
    NSArray * _horizontalConstraints;
    <STUIStatusBarRegionAxisLayout> * _horizontalLayout;
    NSArray * _layoutGuides;
    STUIStatusBarRegion * _region;
    NSArray * _verticalConstraints;
    <STUIStatusBarRegionAxisLayout> * _verticalLayout;
}

@property (nonatomic, readonly) bool canOverflowItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayItems;
@property (nonatomic, readonly) bool fitsAllItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *horizontalConstraints;
@property (nonatomic, retain) <STUIStatusBarRegionAxisLayout> *horizontalLayout;
@property (nonatomic, copy) NSArray *layoutGuides;
@property (nonatomic) STUIStatusBarRegion *region;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *verticalConstraints;
@property (nonatomic, retain) <STUIStatusBarRegionAxisLayout> *verticalLayout;

- (void).cxx_destruct;
- (void)_updateConstraints;
- (bool)canOverflowItems;
- (id)displayItems;
- (bool)fitsAllItems;
- (id)horizontalConstraints;
- (id)horizontalLayout;
- (void)invalidate;
- (id)layoutGuides;
- (bool)mayFitDisplayItems:(id)arg1 inContainerItem:(id)arg2;
- (id)region;
- (void)setDisplayItems:(id)arg1;
- (void)setHorizontalConstraints:(id)arg1;
- (void)setHorizontalLayout:(id)arg1;
- (void)setLayoutGuides:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setVerticalConstraints:(id)arg1;
- (void)setVerticalLayout:(id)arg1;
- (id)verticalConstraints;
- (id)verticalLayout;

@end
