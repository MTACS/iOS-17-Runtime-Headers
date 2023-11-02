
@protocol MCMSQLiteDBCodeSigningPeerageDelegate <NSObject>

@required

- (void)codeSigningDB:(MCMSQLiteDB *)arg1 addChildIdentifier:(NSString *)arg2 forParentIdentifier:(NSString *)arg3;
- (void)codeSigningDB:(MCMSQLiteDB *)arg1 removeParentIdentifier:(NSString *)arg2;

@end
