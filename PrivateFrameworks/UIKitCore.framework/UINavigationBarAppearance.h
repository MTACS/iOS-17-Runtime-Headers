
@interface UINavigationBarAppearance : UIBarAppearance <_UIBarButtonItemAppearanceChangeObserver> {
    UIBarButtonItemAppearance * _backButtonAppearance;
    _UINavTitleAppearanceData * _barTitleData;
    UIBarButtonItemAppearance * _buttonAppearance;
    UIBarButtonItemAppearance * _doneButtonAppearance;
    _UINavigationBarVisualProvider * _visualProvider;
}

@property (nonatomic, copy) UIBarButtonItemAppearance *backButtonAppearance;
@property (nonatomic, readonly) UIImage *backIndicatorImage;
@property (nonatomic, readonly) UIImage *backIndicatorTransitionMaskImage;
@property (nonatomic, copy) UIBarButtonItemAppearance *buttonAppearance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIBarButtonItemAppearance *doneButtonAppearance;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *largeTitleTextAttributes;
@property (readonly) Class superclass;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
@property (nonatomic, readonly) _UINavigationBarVisualProvider *visualProvider;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_backButtonAppearance;
- (id)_backButtonAppearanceData;
- (void)_barButtonItemAppearanceChangedItemData:(id)arg1 toItemData:(id)arg2 fromItemData:(id)arg3;
- (void)_barButtonItemDataChanged:(id)arg1;
- (id)_barTitleData;
- (bool)_checkEqualTo:(id)arg1;
- (void)_completeInit;
- (void)_copyFromAppearance:(id)arg1;
- (void)_decodeFromCoder:(id)arg1;
- (void)_describeInto:(id)arg1;
- (id)_doneButtonAppearance;
- (id)_doneButtonAppearanceData;
- (unsigned long long)_hashInto:(unsigned long long)arg1;
- (id)_plainButtonAppearance;
- (id)_plainButtonAppearanceData;
- (void)_setupDefaults;
- (id)backButtonAppearance;
- (id)backIndicatorImage;
- (id)backIndicatorTransitionMaskImage;
- (id)buttonAppearance;
- (id)doneButtonAppearance;
- (void)encodeWithCoder:(id)arg1;
- (id)largeTitleTextAttributes;
- (void)setBackButtonAppearance:(id)arg1;
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;
- (void)setButtonAppearance:(id)arg1;
- (void)setDoneButtonAppearance:(id)arg1;
- (void)setLargeTitleTextAttributes:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributes;
- (id)visualProvider;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

+ (id)hu_dashboardAppearance;

@end
