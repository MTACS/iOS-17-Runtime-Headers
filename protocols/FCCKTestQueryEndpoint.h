
@protocol FCCKTestQueryEndpoint <NSObject>

@required

- (void)handleQueryOperation:(CKQueryOperation *)arg1 withRecords:(NSArray *)arg2 droppedFeeds:(NSSet *)arg3;

@end
