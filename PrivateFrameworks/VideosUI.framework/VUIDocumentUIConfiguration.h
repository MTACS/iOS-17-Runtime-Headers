
@interface VUIDocumentUIConfiguration : NSObject {
    bool  _animated;
    bool  _isInteractivePopGestureAllowed;
    NSString * _loadingViewText;
    bool  _navigationBarAdjustedToSizeClass;
    bool  _navigationBarHidden;
    long long  _type;
    NSString * _viewControllerDocumentIdentifier;
    NSString * _viewControllerIdentifier;
}

@property (getter=isAnimated, nonatomic) bool animated;
@property (getter=isInteractivePopGestureAllowed, nonatomic) bool isInteractivePopGestureAllowed;
@property (nonatomic, copy) NSString *loadingViewText;
@property (getter=isNavigationBarAdjustedToSizeClass, nonatomic) bool navigationBarAdjustedToSizeClass;
@property (getter=isNavigationBarHidden, nonatomic) bool navigationBarHidden;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSString *viewControllerDocumentIdentifier;
@property (nonatomic, copy) NSString *viewControllerIdentifier;

+ (struct CGSize { double x1; double x2; })_preferredSizeFromConfig:(id)arg1;
+ (long long)_presentationTypeFromString:(id)arg1;
+ (id)uiConfigurationWithDict:(id)arg1;

- (void).cxx_destruct;
- (bool)isAnimated;
- (bool)isEqual:(id)arg1;
- (bool)isInteractivePopGestureAllowed;
- (bool)isNavigationBarAdjustedToSizeClass;
- (bool)isNavigationBarHidden;
- (id)loadingViewText;
- (void)setAnimated:(bool)arg1;
- (void)setIsInteractivePopGestureAllowed:(bool)arg1;
- (void)setLoadingViewText:(id)arg1;
- (void)setNavigationBarAdjustedToSizeClass:(bool)arg1;
- (void)setNavigationBarHidden:(bool)arg1;
- (void)setType:(long long)arg1;
- (void)setViewControllerDocumentIdentifier:(id)arg1;
- (void)setViewControllerIdentifier:(id)arg1;
- (long long)type;
- (id)viewControllerDocumentIdentifier;
- (id)viewControllerIdentifier;

@end
