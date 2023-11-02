
@interface CNContactAddNewFieldAction : CNContactAction {
    <CNContactGroupPickerDelegate> * _groupPickerDelegate;
    NSArray * _prohibitedPropertyKeys;
}

@property (nonatomic) <CNContactGroupPickerDelegate> *groupPickerDelegate;
@property (nonatomic, retain) NSArray *prohibitedPropertyKeys;

- (void).cxx_destruct;
- (id)groupPickerDelegate;
- (void)performActionWithSender:(id)arg1;
- (id)prohibitedPropertyKeys;
- (void)setGroupPickerDelegate:(id)arg1;
- (void)setProhibitedPropertyKeys:(id)arg1;

@end
