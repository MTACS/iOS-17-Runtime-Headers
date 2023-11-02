
@protocol CNContactDataSourceDelegate <NSObject>

@required

- (void)contactDataSourceDidChange:(id <CNContactDataSource>)arg1;

@optional

- (void)contactDataSourceDidChangeDisplayName:(id <CNContactDataSource>)arg1;
- (void)contactDataSourceDisplayNameDidChange:(id <CNContactDataSource>)arg1;
- (void)contactDataSourceMeContactDidChange:(id <CNContactDataSource>)arg1;

@end
