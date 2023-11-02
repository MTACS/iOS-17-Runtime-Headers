
@protocol CKConversationListCell <NSObject>

@required

+ (double)cellHeightForDisplayScale:(double)arg1;
+ (NSString *)identifierForConversation:(CKConversation *)arg1;

- (CKConversationListCellLayout *)cellLayout;
- (void)setCellLayout:(CKConversationListCellLayout *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1;
- (void)updateContentsForConversation:(CKConversation *)arg1 fastPreview:(bool)arg2;

@end
