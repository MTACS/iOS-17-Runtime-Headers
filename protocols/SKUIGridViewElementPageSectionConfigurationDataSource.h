
@protocol SKUIGridViewElementPageSectionConfigurationDataSource <NSObject>

@required

- (SKUIViewElement *)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 viewElementForIndexPath:(NSIndexPath *)arg2;

@optional

- (void)gridViewElementPageSectionConfiguration:(SKUIGridViewElementPageSectionConfiguration *)arg1 configurePosition:(inout long long*)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;

@end
