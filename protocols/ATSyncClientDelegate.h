
@protocol ATSyncClientDelegate <NSObject>

@required

- (void)syncClient:(id <ATSyncClient>)arg1 hasChangesWithPriority:(int)arg2;

@end
