
@interface CNMeCardSharingSettingsNameDataSource : NSObject <CNMeCardSharingSectionDataSource> {
    CNContact * _contact;
    NSString * _formattedName;
    NSArray * _items;
}

@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *formattedName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, readonly) unsigned long long selectedIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contact;
- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (id)formattedName;
- (id)itemForIndex:(unsigned long long)arg1;
- (id)items;
- (unsigned long long)numberOfItems;
- (id)sectionFooterLabel;
- (id)sectionHeaderLabel;
- (void)setContact:(id)arg1;
- (void)setFormattedName:(id)arg1;
- (void)setItems:(id)arg1;
- (bool)supportsSelection;

@end
