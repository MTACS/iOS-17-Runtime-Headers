
@protocol FBKMailboxContent <NSObject>

@required

- (NSNumber *)ID;
- (NSString *)itemSubtitle;
- (NSString *)itemTitle;
- (NSString *)mailboxKind;
- (NSDate *)mailboxSortDate;
- (bool)unread;

@end
