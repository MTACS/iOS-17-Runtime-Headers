
@interface CKConversationListNewMessageCollectionViewCell : CKConversationListEmbeddedCollectionViewCell <CKConversationListCellDelegate> {
    NSObject<CKConversationListCollectionViewCellDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CKConversationListCollectionViewCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)embeddedTableViewCellClass;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)delegate;
- (void)didHoverOverCell:(id)arg1;
- (id)embeddedNewMessageTableViewCell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)selectedDeleteButtonForConversation:(id)arg1 inCell:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)updateFontSize;
- (double)widthForDeterminingAvatarVisibility;

@end
