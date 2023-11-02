
@interface CKConversationListCollectionViewToolbar : UIToolbar {
    bool  _shouldExpandHeight;
}

@property (nonatomic) bool shouldExpandHeight;

- (void)contractHeight;
- (void)expandHeight;
- (void)setShouldExpandHeight:(bool)arg1;
- (bool)shouldExpandHeight;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
