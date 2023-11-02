
@interface VSCredentialEntryPickerItem : NSObject {
    NSString * _itemId;
    NSString * _itemName;
    NSString * _itemValue;
}

@property (nonatomic, copy) NSString *itemId;
@property (nonatomic, copy) NSString *itemName;
@property (nonatomic, copy) NSString *itemValue;

- (void).cxx_destruct;
- (id)itemId;
- (id)itemName;
- (id)itemValue;
- (void)setItemId:(id)arg1;
- (void)setItemName:(id)arg1;
- (void)setItemValue:(id)arg1;

@end
