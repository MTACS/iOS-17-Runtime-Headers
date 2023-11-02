
@protocol AMUISwitcherDataSource <NSObject>

@required

- (<AMUISwitcherItem> *)switcher:(AMUISwitcherViewController *)arg1 itemAtIndex:(long long)arg2;
- (long long)switcherNumberOfItems:(AMUISwitcherViewController *)arg1;

@optional

- (long long)switcher:(AMUISwitcherViewController *)arg1 indexOfItem:(id <AMUISwitcherItem>)arg2;
- (long long)switcher:(AMUISwitcherViewController *)arg1 indexOfItemWithIdentifier:(id <NSObject>)arg2;

@end
