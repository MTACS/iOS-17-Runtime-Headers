
@interface SFAirDropInstructionsViewController : UIViewController <SFCollectionViewDelegateLayout> {
    SFAirDropActiveIconView * _airDropActiveIconView;
    SFCollectionViewLayout * _collectionViewLayout;
    UITextView * _instructionsTextView;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumPreferredContentSize;
}

@property (nonatomic, readonly) SFAirDropActiveIconView *airDropActiveIconView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UITextView *instructionsTextView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_airDropText;
- (struct CGSize { double x1; double x2; })_cachedPreferredItemSize;
- (id)_fontWithStyle:(id)arg1 maxSizeCategory:(id)arg2 traits:(unsigned int)arg3;
- (id)_instructionsBaseFormatString;
- (id)_instructionsText;
- (void)_layoutiOSSubviews;
- (double)_titleLabelHeight;
- (void)_updateFontSizes;
- (id)airDropActiveIconView;
- (id)attributedStringWithTitle:(id)arg1 content:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (id)instructionsTextView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
