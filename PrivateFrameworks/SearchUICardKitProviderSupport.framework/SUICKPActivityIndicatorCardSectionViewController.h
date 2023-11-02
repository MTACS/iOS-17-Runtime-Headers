
@interface SUICKPActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (bool)_expectsSearchUIView;
- (bool)_isIndicatingActivity;
- (bool)_shouldRenderButtonOverlay;

@end
