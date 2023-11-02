
@interface REMListGroceryContext : NSObject {
    REMList * _list;
}

@property (nonatomic, readonly) NSString *groceryLocaleID;
@property (nonatomic, retain) REMList *list;
@property (nonatomic, readonly) bool shouldCategorizeGroceryItems;
@property (nonatomic, readonly) bool shouldSuggestConversionToGroceryList;

- (void).cxx_destruct;
- (id)groceryLocaleID;
- (id)initWithList:(id)arg1;
- (id)list;
- (void)setList:(id)arg1;
- (bool)shouldCategorizeGroceryItems;
- (bool)shouldSuggestConversionToGroceryList;

@end
