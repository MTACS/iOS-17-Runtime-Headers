
@protocol MessageListItemHelperDelegate <NSObject>

@required

- (bool)messageListItemHelper:(MessageListItemHelper *)arg1 anyExpandedThreadContainsItemID:(id <EMCollectionItemID>)arg2;
- (bool)messageListItemHelper:(MessageListItemHelper *)arg1 isItemIDExpandedThread:(id <EMCollectionItemID>)arg2;
- (bool)messageListItemHelper:(MessageListItemHelper *)arg1 isItemIDSelected:(id <EMCollectionItemID>)arg2;

@end
