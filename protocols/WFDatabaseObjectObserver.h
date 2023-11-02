
@protocol WFDatabaseObjectObserver

@required

- (void)databaseDidChange:(WFDatabase *)arg1 modified:(NSSet *)arg2 inserted:(NSSet *)arg3 removed:(NSSet *)arg4;

@end
