
@interface IMCollaborationNoticeController : NSObject

+ (id)sharedInstance;

- (void)collaborationNoticesDidChangeForChatGUIDs:(id)arg1;
- (void)dismissNotice:(id)arg1;
- (void)fetchCollaborationNoticesForChatGUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)listener;
- (void)markAsViewedForNotice:(id)arg1;
- (id)remoteDaemon;

@end
