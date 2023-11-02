
@interface TLTimelineEntryNodeRecycleBin : NSObject

@property (nonatomic, readonly) unsigned long long maximumNumberOfRecycledNodes;
@property (nonatomic, readonly) unsigned long long numberOfRecycledNodes;

+ (id)sharedRecycleBin;

- (id)_init;
- (void)emptyRecycleBin;
- (unsigned long long)maximumNumberOfRecycledNodes;
- (unsigned long long)numberOfRecycledNodes;
- (void)recycleEntryNode:(id)arg1;
- (id)retrieveRecycledEntryNode;

@end
