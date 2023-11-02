
@interface ConversationKit.LinkDetailParticipantCollectionViewCell : UICollectionViewListCell {
    void $__lazy_storage_$_imageView;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_joinButtonConfiguration;
    void $__lazy_storage_$_joinButtonExceedsMaxWidth;
    void avatarController;
    void joinButton;
    void joinButtonFont;
    void style;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;

@end
