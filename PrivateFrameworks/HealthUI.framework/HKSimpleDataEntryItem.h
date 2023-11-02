
@interface HKSimpleDataEntryItem : NSObject {
    NSString * _accessibilityIdentifier;
    <HKSimpleDataEntryItemDelegate> * _delegate;
    unsigned long long  _placeholderType;
    <HKSimpleDataEntryItemToolbarDelegate> * _toolbarDelegate;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (nonatomic) <HKSimpleDataEntryItemDelegate> *delegate;
@property (nonatomic) unsigned long long placeholderType;
@property (nonatomic) <HKSimpleDataEntryItemToolbarDelegate> *toolbarDelegate;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessoryToolbar;
- (void)beginEditing;
- (id)cell;
- (id)delegate;
- (id)formattedKeyAndValue;
- (void)localeDidChange:(id)arg1;
- (unsigned long long)placeholderType;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPlaceholderType:(unsigned long long)arg1;
- (void)setToolbarDelegate:(id)arg1;
- (id)toolbarDelegate;
- (void)toolbarDoneButtonPressed:(id)arg1;
- (void)toolbarNextButtonPressed:(id)arg1;
- (void)toolbarPrevButtonPressed:(id)arg1;
- (void)updateCellDisplay;

@end
