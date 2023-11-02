
@interface CNContactAddAddressingGrammarAction : CNContactAction <IPPronounPickerViewControllerDelegate> {
    NSIndexPath * _indexPath;
    NSTermOfAddress * _selectedAddressingGrammar;
}

@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic, retain) NSTermOfAddress *selectedAddressingGrammar;

+ (id)os_log;

- (void).cxx_destruct;
- (bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 propertyKey:(id)arg3 labeledValue:(id)arg4;
- (id)indexPath;
- (void)performActionWithSender:(id)arg1;
- (void)pronounPickerViewController:(id)arg1 didFinishWithTermOfAddress:(id)arg2;
- (void)pronounPickerViewControllerDidCancel:(id)arg1;
- (id)selectedAddressingGrammar;
- (void)setIndexPath:(id)arg1;
- (void)setSelectedAddressingGrammar:(id)arg1;

@end
