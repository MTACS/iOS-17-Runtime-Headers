
@protocol MUDynamicButtonCellModel <NSObject>

@required

- (id /* block */)actionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UIView *, void*, id, SEL
- (long long)actionStyle;
- (bool)isEnabled;
- (void)setActionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, void*
- (NSString *)symbolName;
- (NSString *)titleString;

@optional

- (NSString *)accessibilityIdentifierForAction;
- (<MUDynamicButtonCellModelChangeDelegate> *)changeDelegate;
- (UIMenu *)menu;
- (void)setChangeDelegate:(id <MUDynamicButtonCellModelChangeDelegate>)arg1;
- (void)setMenu:(UIMenu *)arg1;

@end
