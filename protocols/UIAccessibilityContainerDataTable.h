
@protocol UIAccessibilityContainerDataTable <NSObject>

@required

- (unsigned long long)accessibilityColumnCount;
- (<UIAccessibilityContainerDataTableCell> *)accessibilityDataTableCellElementForRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)accessibilityRowCount;

@optional

- (NSArray *)accessibilityHeaderElementsForColumn:(unsigned long long)arg1;
- (NSArray *)accessibilityHeaderElementsForRow:(unsigned long long)arg1;

@end
