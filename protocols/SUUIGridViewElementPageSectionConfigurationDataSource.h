
@protocol SUUIGridViewElementPageSectionConfigurationDataSource <NSObject>

@required

- (SUUIViewElement *)gridViewElementPageSectionConfiguration:(SUUIGridViewElementPageSectionConfiguration *)arg1 viewElementForIndexPath:(NSIndexPath *)arg2;

@optional

- (void)gridViewElementPageSectionConfiguration:(SUUIGridViewElementPageSectionConfiguration *)arg1 configurePosition:(inout long long*)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;

@end
