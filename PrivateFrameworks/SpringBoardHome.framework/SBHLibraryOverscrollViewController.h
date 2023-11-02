
@interface SBHLibraryOverscrollViewController : UIViewController <SBHRootFolderCustomViewPresenting> {
    unsigned long long  contentVisibility;
    _UILegibilitySettings * legibilitySettings;
}

@property (nonatomic) unsigned long long contentVisibility;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <SBIconListViewQuerying> *iconListViewQueryable;
@property (readonly) <SBIconLocationPresenting> *iconLocationPresenter;
@property (readonly) <SBIconViewQuerying> *iconViewQueryable;
@property (nonatomic, retain) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) bool shouldBeIndicatedInPageControl;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)contentVisibility;
- (id)legibilitySettings;
- (void)setContentVisibility:(unsigned long long)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (bool)shouldBeIndicatedInPageControl;

@end
