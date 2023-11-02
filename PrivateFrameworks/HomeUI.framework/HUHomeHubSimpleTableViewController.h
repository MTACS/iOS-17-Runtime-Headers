
@interface HUHomeHubSimpleTableViewController : HUItemTableViewController {
    NSString * _descriptionStringWithFormatKey;
}

@property (nonatomic) NSString *descriptionStringWithFormatKey;

- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)descriptionStringWithFormatKey;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2 descriptionStringWithFormatKey:(id)arg3;
- (void)loadView;
- (void)setDescriptionStringWithFormatKey:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;

@end
