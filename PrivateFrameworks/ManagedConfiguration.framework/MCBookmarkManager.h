
@interface MCBookmarkManager : NSObject {
    NSObject<OS_dispatch_queue> * _memberQueue;
    NSArray * _memberQueueCurrentUserBookmarks;
    NSDictionary * _memberQueueStashedBookmarksByLabel;
    int  _notificationToken;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *memberQueue;
@property (nonatomic, retain) NSArray *memberQueueCurrentUserBookmarks;
@property (nonatomic, retain) NSDictionary *memberQueueStashedBookmarksByLabel;
@property (nonatomic) int notificationToken;
@property (nonatomic, copy) NSArray *userBookmarks;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (id)memberQueue;
- (id)memberQueueCurrentUserBookmarks;
- (void)memberQueueRereadBookmarks;
- (void)memberQueueSetStashedUserBookmarksByLabel:(id)arg1;
- (void)memberQueueSetUserBookmarks:(id)arg1;
- (void)memberQueueStashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (id)memberQueueStashedBookmarksByLabel;
- (int)notificationToken;
- (void)setMemberQueue:(id)arg1;
- (void)setMemberQueueCurrentUserBookmarks:(id)arg1;
- (void)setMemberQueueStashedBookmarksByLabel:(id)arg1;
- (void)setNotificationToken:(int)arg1;
- (void)setUserBookmarks:(id)arg1;
- (void)stashUserBookmarksWithLabel:(id)arg1 newUserBookmarks:(id)arg2;
- (void)unstashUserBookmarksFromLabel:(id)arg1;
- (id)userBookmarks;

@end
