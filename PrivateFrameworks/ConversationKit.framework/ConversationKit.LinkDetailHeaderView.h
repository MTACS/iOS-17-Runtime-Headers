
@interface ConversationKit.LinkDetailHeaderView : UICollectionReusableView {
    void $__lazy_storage_$_linkDetailImage;
    void $__lazy_storage_$_linkLabel;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _invitedMemberHandles;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _title;
    void avatarController;
    void cancellables;
    void constraintsForAvatarViewVisible;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
