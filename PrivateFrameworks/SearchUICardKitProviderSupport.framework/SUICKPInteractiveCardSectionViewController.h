
@interface SUICKPInteractiveCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (bool)_expectsSearchUIView;
- (bool)_shouldRenderButtonOverlay;
- (void)didEngageCardSection:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
