
@protocol ContactsUI.DuplicatesUIHelperDelegate

@required

- (CNContactFormatter *)contactFormatter;
- (CNContactStore *)contactStore;
- (void)didSelectIgnoreAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesIgnored:(NSArray *)arg2;
- (void)didSelectMergeAllDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1 signaturesToMerge:(NSArray *)arg2;
- (void)didSelectUnignoreDuplicate:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;

@optional

- (void)didSelectCancelMergeDuplicates:(_TtC10ContactsUI18DuplicatesUIHelper *)arg1;

@end
