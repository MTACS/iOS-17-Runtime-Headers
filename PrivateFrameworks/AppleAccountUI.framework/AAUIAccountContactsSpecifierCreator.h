
@interface AAUIAccountContactsSpecifierCreator : NSObject

- (id)createAddTableCellWithTitle:(id)arg1 loadAction:(SEL)arg2 target:(id)arg3;
- (id)createGroupSpecifierWithIdentifier:(id)arg1 title:(id)arg2 footerText:(id)arg3 linkText:(id)arg4 actionMethodName:(id)arg5 target:(id)arg6;
- (id)createSubtitleTableCellWithName:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4;
- (id)createTableCellForContact:(id)arg1 loadAction:(SEL)arg2 target:(id)arg3;
- (id)createTableCellWithName:(id)arg1 title:(id)arg2 longSubtitle:(id)arg3 image:(id)arg4;

@end
