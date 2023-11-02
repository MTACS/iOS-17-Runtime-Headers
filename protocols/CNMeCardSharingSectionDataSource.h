
@protocol CNMeCardSharingSectionDataSource <NSObject>

@required

- (void)didSelectItemAtIndex:(unsigned long long)arg1;
- (CNMeCardSharingRowItem *)itemForIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfItems;
- (NSString *)sectionFooterLabel;
- (NSString *)sectionHeaderLabel;
- (bool)supportsSelection;

@optional

- (unsigned long long)selectedIndex;

@end
