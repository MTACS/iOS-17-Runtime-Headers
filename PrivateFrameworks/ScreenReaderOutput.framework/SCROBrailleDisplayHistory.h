
@interface SCROBrailleDisplayHistory : NSObject {
    struct __CFArray { } * _announcements;
    long long  _currentIndex;
    long long  _unreadCount;
    struct __CFArray { } * _unreadSnapshot;
}

+ (void)initialize;

- (bool)_moveIndexBy:(long long)arg1;
- (void)addString:(id)arg1;
- (id)currentString;
- (void)dealloc;
- (bool)hasUnread;
- (id)init;
- (bool)isOnMostRecent;
- (void)markSnapshotAsRead;
- (void)moveToMostRecent;
- (bool)moveToNext;
- (bool)moveToPrevious;
- (void)snapshotUnread;

@end
