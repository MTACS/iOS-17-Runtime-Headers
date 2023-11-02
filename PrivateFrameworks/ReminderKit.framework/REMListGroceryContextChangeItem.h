
@interface REMListGroceryContextChangeItem : NSObject {
    REMListChangeItem * _listChangeItem;
}

@property (nonatomic, copy) NSString *groceryLocaleID;
@property (nonatomic, retain) REMListChangeItem *listChangeItem;
@property (nonatomic) bool shouldCategorizeGroceryItems;
@property (nonatomic, readonly) bool shouldSuggestConversionToGroceryList;
@property (nonatomic, readonly) NSArray *unsavedReminderIDsToCategorizeAsGroceryItems;

- (void).cxx_destruct;
- (void)categorizeGroceryItemsWithReminderIDs:(id)arg1;
- (id)groceryLocaleID;
- (id)initWithListChangeItem:(id)arg1;
- (id)listChangeItem;
- (void)setGroceryLocaleID:(id)arg1;
- (void)setListChangeItem:(id)arg1;
- (void)setShouldCategorizeGroceryItems:(bool)arg1;
- (void)setShouldSuggestConversionToGroceryList:(bool)arg1;
- (bool)shouldCategorizeGroceryItems;
- (bool)shouldSuggestConversionToGroceryList;
- (id)unsavedReminderIDsToCategorizeAsGroceryItems;

@end
