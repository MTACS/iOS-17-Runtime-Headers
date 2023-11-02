
@protocol PKDashboardPassDataSource <PKDashboardDataSource>

@required

- (id)initWithGroupView:(PKPassGroupView *)arg1 context:(PKPassPresentationContext *)arg2;

@optional

- (PKPassGroupView *)groupView;
- (void)groupViewDidChangeFrontmostPassView:(PKPassView *)arg1 withContext:(PKPassPresentationContext *)arg2;
- (void)groupViewDidUpdatePassView:(PKPassView *)arg1;
- (void)visibilityDidChangeToState:(unsigned char)arg1;

@end
