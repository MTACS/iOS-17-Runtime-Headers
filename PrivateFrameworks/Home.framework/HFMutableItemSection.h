
@interface HFMutableItemSection : HFItemSection

@property (nonatomic, copy) NSAttributedString *attributedFooterTitle;
@property (nonatomic, copy) NSAttributedString *attributedHeaderTitle;
@property (nonatomic, copy) NSString *footerTitle;
@property (nonatomic) <HFItemSectionAccessoryButtonHeaderDelegate> *headerAccessoryButtonDelegate;
@property (nonatomic, copy) NSString *headerAccessoryButtonTitle;
@property (nonatomic, copy) NSString *headerSecondaryText;
@property (nonatomic, copy) NSString *headerTitle;
@property (nonatomic) bool hideAccessoryButton;
@property (nonatomic) bool hideHeaderText;
@property (nonatomic, copy) NSArray *items;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void)setItems:(id)arg1 filteringToDisplayedItems:(id)arg2;
- (void)setItemsUsingDefaultSortComparator:(id)arg1;

@end
