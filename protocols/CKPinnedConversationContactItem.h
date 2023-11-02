
@protocol CKPinnedConversationContactItem <NSObject>

@required

- (CNContact *)cnContactWithKeys:(NSArray *)arg1;
- (long long)contactItemAlignment;
- (NSString *)contactItemIdentifier;
- (UIView<CKPinnedConversationContactItemView> *)contactItemView;
- (double)contentScale;
- (void)setContactItemAlignment:(long long)arg1;
- (void)setContentScale:(double)arg1;

@end
