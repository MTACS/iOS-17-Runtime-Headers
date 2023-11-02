
@protocol VSCredentialEntryViewModelDelegate <NSObject>

@required

- (void)viewModel:(VSCredentialEntryViewModel *)arg1 buttonTappedAtIndex:(unsigned long long)arg2;
- (void)viewModel:(VSCredentialEntryViewModel *)arg1 pickerDidSelectRow:(unsigned long long)arg2;

@end
