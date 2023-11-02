
@interface SearchUIHeroButton : UIButton <SearchUICommandButton> {
    SFButtonItem * buttonItem;
}

@property (retain) SFButtonItem *buttonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)newButtonsEnabled;

- (void).cxx_destruct;
- (id)buttonItem;
- (void)didMoveToWindow;
- (id)initWithTitle:(id)arg1 image:(id)arg2 command:(id)arg3;
- (void)setButtonItem:(id)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithTitle:(id)arg1 image:(id)arg2;

@end
