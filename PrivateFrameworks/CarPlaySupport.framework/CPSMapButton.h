
@interface CPSMapButton : CPSButton {
    CPMapButton * _mapButton;
}

@property (nonatomic, retain) CPMapButton *mapButton;

+ (id)buttonWithCPMapButton:(id)arg1;

- (void).cxx_destruct;
- (void)_updateButtonImages;
- (float)charge;
- (id)mapButton;
- (void)setCharge:(float)arg1;
- (void)setMapButton:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
