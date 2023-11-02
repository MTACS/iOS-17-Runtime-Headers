
@interface HUCAPackageIconContentView : HUIconContentView <CAStateControllerDelegate, HUIconContentIntrinsicContentSizeProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    }  _assetNoMarginSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _assetSize;
    CAPackage * _package;
    NSArray * _packageLayers;
    <HFIconDescriptor> * _renouncedPackageDescriptor;
    CALayer * _rootLayer;
    CAStateController * _stateController;
    NSString * _stateName;
    bool  _useAssetMarginSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } assetNoMarginSize;
@property (nonatomic) struct CGSize { double x1; double x2; } assetSize;
@property (nonatomic, retain) CAPackage *package;
@property (nonatomic, retain) NSArray *packageLayers;
@property (nonatomic, retain) <HFIconDescriptor> *renouncedPackageDescriptor;
@property (nonatomic, retain) CALayer *rootLayer;
@property (nonatomic, retain) CAStateController *stateController;
@property (nonatomic, retain) NSString *stateName;
@property bool useAssetMarginSize;

+ (bool)_isAnimationEnabled;

- (void).cxx_destruct;
- (void)_applyModifiers;
- (void)_tryRenouncePackageForIconDescriptor:(id)arg1;
- (void)_updateStateAnimated:(bool)arg1;
- (void)_updateWithPackage:(id)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })assetNoMarginSize;
- (struct CGSize { double x1; double x2; })assetSize;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })iconContentIntrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutRootLayer;
- (void)layoutSubviews;
- (id)package;
- (id)packageLayers;
- (void)reclaimIconIfPossible;
- (void)renounceIconIfPossible;
- (id)renouncedPackageDescriptor;
- (id)rootLayer;
- (void)setAssetNoMarginSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setAssetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPackage:(id)arg1;
- (void)setPackageLayers:(id)arg1;
- (void)setRenouncedPackageDescriptor:(id)arg1;
- (void)setRootLayer:(id)arg1;
- (void)setState:(id)arg1;
- (void)setState:(id)arg1 animated:(bool)arg2;
- (void)setStateController:(id)arg1;
- (void)setStateName:(id)arg1;
- (void)setUseAssetMarginSize:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stateController;
- (void)stateController:(id)arg1 didSetStateOfLayer:(id)arg2;
- (void)stateController:(id)arg1 transitionDidStart:(id)arg2 speed:(float)arg3;
- (void)stateController:(id)arg1 transitionDidStop:(id)arg2 completed:(bool)arg3;
- (id)stateName;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;
- (bool)useAssetMarginSize;

@end
