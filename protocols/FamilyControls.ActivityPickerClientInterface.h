
@protocol FamilyControls.ActivityPickerClientInterface

@required

- (void)didCancel;
- (void)didSelectWithApplications:(NSArray *)arg1 categories:(NSArray *)arg2 webDomains:(NSArray *)arg3 untokenizedApplications:(NSArray *)arg4 untokenizedCategories:(NSArray *)arg5 untokenizedWebDomains:(NSArray *)arg6;

@end
