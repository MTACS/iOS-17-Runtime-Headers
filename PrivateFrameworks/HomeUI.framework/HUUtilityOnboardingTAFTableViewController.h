
@interface HUUtilityOnboardingTAFTableViewController : HUItemTableViewController {
    <TAFTableDelegate> * _delegate;
    NSMutableDictionary * _tableResponses;
    NSArray * _tafFields;
}

@property (nonatomic) <TAFTableDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *tableResponses;
@property (nonatomic, retain) NSArray *tafFields;

- (void).cxx_destruct;
- (bool)_characterCountValidationForText:(id)arg1 min:(unsigned long long)arg2 max:(unsigned long long)arg3;
- (bool)_regexValidation:(id)arg1 forText:(id)arg2;
- (bool)_validateText:(id)arg1 forItemKey:(id)arg2;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)initWithTAFfields:(id)arg1 tafResponses:(id)arg2 withItemManager:(id)arg3 tableViewStyle:(long long)arg4;
- (id)retrieveCompletedFields;
- (void)setDelegate:(id)arg1;
- (void)setTableResponses:(id)arg1;
- (void)setTafFields:(id)arg1;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (id)tableResponses;
- (id)tafFields;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end
