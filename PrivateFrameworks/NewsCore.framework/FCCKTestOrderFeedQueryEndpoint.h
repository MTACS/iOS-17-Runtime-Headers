
@interface FCCKTestOrderFeedQueryEndpoint : NSObject <FCCKTestQueryEndpoint>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)handleQueryOperation:(id)arg1 withRecords:(id)arg2 droppedFeeds:(id)arg3;

@end
