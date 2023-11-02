
@protocol CADXPCProxyHelperDelegate <NSObject>

@required

- (int)databaseRestoreGeneration;
- (void)setDatabaseRestoreGeneration:(int)arg1;
- (bool)shouldValidateObjectIDs;

@end
