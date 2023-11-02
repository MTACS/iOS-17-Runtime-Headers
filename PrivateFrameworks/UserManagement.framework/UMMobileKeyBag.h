
@interface UMMobileKeyBag : NSObject

+ (id)allSyncBubbleUsers;
+ (bool)clearSyncBubblesWithOutError:(id*)arg1;
+ (id)currentSyncBubbleUser;
+ (void)initialize;
+ (id)lastLoggedInUser;
+ (id)queuedSyncBubbleUsers;
+ (bool)startSyncBubbleForUser:(id)arg1 outError:(id*)arg2;
+ (bool)stopSyncBubbleForUser:(id)arg1 outError:(id*)arg2;
+ (id)syncBubbleMachServiceNamesForUser:(id)arg1;

@end
