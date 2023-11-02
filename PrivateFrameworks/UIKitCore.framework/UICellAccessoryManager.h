
@interface UICellAccessoryManager : NSObject {
    NSMutableDictionary * _accessoryViews;
    long long  _animatedLayoutUpdatesCount;
    NSDictionary * _configurations;
    UIView * _containerView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    NSString * _currentConfigurationIdentifier;
    id /* block */  _disclosureLayoutWidthProvider;
    struct CGSize { 
        double width; 
        double height; 
    }  _enforcedContainerSize;
    <UICellAccessoryLayout> * _leadingLayout;
    bool  _needsLayout;
    UICellAccessoryConfiguration * _previousConfiguration;
    struct CGSize { 
        double width; 
        double height; 
    }  _previousContainerSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _safeAreaInsets;
    id /* block */  _standardLayoutWidthProvider;
    <UICellAccessoryLayout> * _trailingLayout;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryViews;
@property (nonatomic) long long animatedLayoutUpdatesCount;
@property (nonatomic, retain) NSDictionary *configurations;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } containerSize;
@property (nonatomic) UIView *containerView;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) UICellAccessoryConfiguration *currentConfiguration;
@property (nonatomic, copy) NSString *currentConfigurationIdentifier;
@property (nonatomic, copy) id /* block */ disclosureLayoutWidthProvider;
@property (nonatomic, retain) <UICellAccessoryLayout> *leadingLayout;
@property (nonatomic) bool needsLayout;
@property (nonatomic, retain) UICellAccessoryConfiguration *previousConfiguration;
@property (nonatomic) struct CGSize { double x1; double x2; } previousContainerSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } safeAreaInsets;
@property (nonatomic, copy) id /* block */ standardLayoutWidthProvider;
@property (nonatomic, retain) <UICellAccessoryLayout> *trailingLayout;

- (void).cxx_destruct;
- (id)_configurationWithIdentifier:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_updateAccessories:(id)arg1 previousAccessories:(id)arg2 withLayout:(id)arg3 edge:(unsigned long long)arg4;
- (void)_updateFromPreviousConfiguration:(id)arg1;
- (id)accessoryViews;
- (long long)animatedLayoutUpdatesCount;
- (id)configurations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerBounds;
- (struct CGSize { double x1; double x2; })containerSize;
- (id)containerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)currentConfiguration;
- (id)currentConfigurationIdentifier;
- (id)description;
- (id /* block */)disclosureLayoutWidthProvider;
- (id)initWithContainerView:(id)arg1;
- (void)layoutIfNeeded;
- (id)leadingLayout;
- (bool)needsLayout;
- (void)performWithEnforcedContainerSize:(struct CGSize { double x1; double x2; })arg1 block:(id /* block */)arg2;
- (id)previousConfiguration;
- (struct CGSize { double x1; double x2; })previousContainerSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setAccessoryViews:(id)arg1;
- (void)setAnimatedLayoutUpdatesCount:(long long)arg1;
- (void)setConfigurations:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setCurrentConfigurationIdentifier:(id)arg1;
- (void)setDisclosureLayoutWidthProvider:(id /* block */)arg1;
- (void)setLeadingLayout:(id)arg1;
- (void)setNeedsLayout;
- (void)setNeedsLayout:(bool)arg1;
- (void)setPreviousConfiguration:(id)arg1;
- (void)setPreviousContainerSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setStandardLayoutWidthProvider:(id /* block */)arg1;
- (void)setTrailingLayout:(id)arg1;
- (id /* block */)standardLayoutWidthProvider;
- (id)trailingLayout;
- (void)updateContainerView:(id)arg1;

@end
