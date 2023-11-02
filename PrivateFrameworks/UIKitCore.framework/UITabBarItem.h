
@interface UITabBarItem : UIBarItem <_UIBarAppearanceChangeObserver, _UIPopoverPresentationControllerSourceItem_Internal> {
    long long  __barMetrics;
    long long  __imageStyle;
    UIColor * __tintColor;
    bool  __usesModernAppearance;
    SEL  _action;
    _UITabBarItemAppearanceStorage * _appearanceStorage;
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _badgeOffset;
    NSString * _badgeValue;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _imageInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _landscapeImageInsets;
    UIImage * _landscapeSelectedImage;
    UIImage * _landscapeSelectedTemplateImage;
    UIImage * _landscapeTemplateImage;
    UITabBarAppearance * _scrollEdgeAppearance;
    UIImage * _selectedImage;
    UIImage * _selectedTemplateImage;
    bool  _springLoaded;
    UITabBarAppearance * _standardAppearance;
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    }  _tabBarItemFlags;
    id  _target;
    UIImage * _templateImage;
    NSString * _title;
    UIImage * _unselectedImage;
    UITabBarButton * _view;
}

@property (setter=_setBarMetrics:, nonatomic) long long _barMetrics;
@property (setter=_setImageStyle:, nonatomic) long long _imageStyle;
@property (nonatomic, readonly) UIImage *_internalLandscapeSelectedImagePhone;
@property (getter=_isSelected, setter=_setSelected:, nonatomic) bool _selected;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (setter=_setUsesModernAppearance:, nonatomic) bool _usesModernAppearance;
@property (nonatomic, copy) UIColor *badgeColor;
@property (nonatomic) struct UIOffset { double x1; double x2; } badgeOffset;
@property (nonatomic, copy) NSString *badgeValue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIOffset { double x1; double x2; } landscapePhoneBadgeOffset;
@property (nonatomic, retain) UIImage *landscapeSelectedImagePhone;
@property (nonatomic, copy) UITabBarAppearance *scrollEdgeAppearance;
@property (nonatomic, retain) UIImage *selectedImage;
@property (nonatomic, copy) UITabBarAppearance *standardAppearance;
@property (readonly) Class superclass;
@property (nonatomic) struct UIOffset { double x1; double x2; } titlePositionAdjustment;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_appearanceBlindViewClasses;

- (void).cxx_destruct;
- (long long)_barMetrics;
- (id)_createViewForTabBar:(id)arg1 asProxyView:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameInCoordinateSpace:(id)arg1 window:(id)arg2;
- (long long)_imageStyle;
- (id)_internalLandscapeSelectedImagePhone;
- (id)_internalLandscapeTemplateImage;
- (id)_internalLandscapeTemplateImages;
- (id)_internalLargeContentSizeImage;
- (id)_internalTemplateImage;
- (id)_internalTemplateImages;
- (id)_internalTemplateImagesForTabBarDisplayStyle:(long long)arg1;
- (id)_internalTitle;
- (id)_internalTitleForTabBarDisplayStyle:(long long)arg1;
- (bool)_isSelected;
- (id)_nearestViewController;
- (void)_setBarMetrics:(long long)arg1;
- (void)_setImageStyle:(long long)arg1;
- (void)_setInternalLandscapeTemplateImage:(id)arg1;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_setSelected:(bool)arg1;
- (void)_setTintColor:(id)arg1;
- (void)_setTitleTextAttributeValue:(id)arg1 forAttributeKey:(id)arg2 state:(unsigned long long)arg3;
- (void)_setUsesModernAppearance:(bool)arg1;
- (void)_showSelectedIndicator:(bool)arg1 changeSelection:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_sourceRectForPresentationInWindow:(id)arg1;
- (id)_sourceViewForPresentationInWindow:(id)arg1;
- (id)_tintColor;
- (void)_updateToMatchCurrentState;
- (void)_updateView;
- (void)_updateViewAndPositionItems:(bool)arg1;
- (void)_updateViewBadge;
- (bool)_usesModernAppearance;
- (SEL)action;
- (bool)animatedBadge;
- (void)appearance:(id)arg1 categoriesChanged:(long long)arg2;
- (id)badgeColor;
- (struct UIOffset { double x1; double x2; })badgeOffset;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (id)badgeValue;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finishedSelectedImage;
- (id)finishedUnselectedImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInView:(id)arg1;
- (bool)hasTitle;
- (id)image;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(long long)arg1 tag:(long long)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3;
- (bool)isEnabled;
- (bool)isSpringLoaded;
- (bool)isSystemItem;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })landscapeImagePhoneInsets;
- (struct UIOffset { double x1; double x2; })landscapePhoneBadgeOffset;
- (id)landscapeSelectedImagePhone;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentSizeImageInsets;
- (id)resolvedTitle;
- (id)scrollEdgeAppearance;
- (id)selectedImage;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(bool)arg1;
- (void)setBadgeColor:(id)arg1;
- (void)setBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBadgeValue:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFinishedSelectedImage:(id)arg1 withFinishedUnselectedImage:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setLandscapePhoneBadgeOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setLandscapeSelectedImagePhone:(id)arg1;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setScrollEdgeAppearance:(id)arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setSpringLoaded:(bool)arg1;
- (void)setStandardAppearance:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset { double x1; double x2; })arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (id)standardAppearance;
- (long long)systemItem;
- (id)target;
- (id)title;
- (struct UIOffset { double x1; double x2; })titlePositionAdjustment;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)unselectedImage;
- (id)view;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (void)setBadgeValue:(id)arg1 animated:(bool)arg2 blink:(bool)arg3;

@end
