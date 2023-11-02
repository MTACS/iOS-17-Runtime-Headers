
@protocol BRCListOperationDelegate

@required

- (void)listOperation:(BRCListDirectoryContentsOperation *)arg1 wasReplacedByOperation:(BRCListDirectoryContentsOperation *)arg2;

@end
