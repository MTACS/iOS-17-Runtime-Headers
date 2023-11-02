
@interface EMForceBlankCellsController : NSObject

+ (double)_blockRate;
+ (double)_maximumDelay;
+ (double)_minimumDelay;
+ (void)blockForRandomDurationWithMessage:(id)arg1;
+ (id)log;
+ (bool)shouldBlockSQLQueries;
+ (bool)shouldBlockXPCQueue;

@end
