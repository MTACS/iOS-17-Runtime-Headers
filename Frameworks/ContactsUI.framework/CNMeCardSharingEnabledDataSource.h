
@interface CNMeCardSharingEnabledDataSource : NSObject <CNMeCardSharingSectionDataSource> {
    <CNMeCardSharingEnabledDelegate> * _delegate;
    UISwitch * _enabledSwitch;
    NSArray * _items;
    bool  _sharingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNMeCardSharingEnabledDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISwitch *enabledSwitch;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) unsigned long long selectedIndex;
@property (nonatomic) bool sharingEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buildItems;
- (id)delegate;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (void)didToggleEnabledSwitch:(id)arg1;
- (id)enabledSwitch;
- (id)initWithSharingEnabled:(bool)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)numberOfItems;
- (id)sectionFooterLabel;
- (id)sectionHeaderLabel;
- (void)setDelegate:(id)arg1;
- (void)setEnabledSwitch:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (bool)sharingEnabled;
- (bool)supportsSelection;

@end
