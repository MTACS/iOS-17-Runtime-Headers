
@protocol WBSTabOrderProvider <NSObject>

@required

- (unsigned long long)indexForTab:(id <WBSOrderedTab>)arg1;
- (unsigned long long)indexOfSelectedTab;
- (unsigned long long)numberOfTabs;
- (<WBSOrderedTab> *)originatingTabForTab:(id <WBSOrderedTab>)arg1;
- (<WBSOrderedTab> *)selectedTabForTabOrderProvider;
- (<WBSOrderedTab> *)tabAtIndex:(unsigned long long)arg1;

@end
