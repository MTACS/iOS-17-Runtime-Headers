
@protocol TSPArchiverManagerDelegate <NSObject>

@optional

- (void)archiverManager:(TSPArchiverManager *)arg1 didCreateArchiver:(TSPArchiver *)arg2;
- (bool)archiverManager:(TSPArchiverManager *)arg1 shouldDelayArchivingObject:(TSPObject *)arg2;

@end
