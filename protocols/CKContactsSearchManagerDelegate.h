
@protocol CKContactsSearchManagerDelegate <NSObject>

@required

- (void)contactsSearchManager:(CKContactsSearchManager *)arg1 finishedSearchingWithResults:(NSArray *)arg2;
- (NSArray *)conversationCacheForContactsSearchManager:(CKContactsSearchManager *)arg1;
- (void)setShouldHideGroupsDonations:(bool)arg1;
- (bool)shouldHideGroupsDonations;

@end
