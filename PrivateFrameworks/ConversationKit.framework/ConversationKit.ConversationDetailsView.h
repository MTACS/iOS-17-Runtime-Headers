
@interface ConversationKit.ConversationDetailsView : UIView {
    void $__lazy_storage_$_chevronLabel;
    void $__lazy_storage_$_conversationDetailsVStack;
    void $__lazy_storage_$_conversationSubtitleHStack;
    void $__lazy_storage_$_conversationSubtitleLabel;
    void $__lazy_storage_$_conversationTitleLabel;
    void conversationSubtitleBadge;
    void leadingAccessoryView;
    void presentationStyle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  recipe;
}

@property (nonatomic, retain) UILabel *chevronLabel;
@property (nonatomic, retain) UIStackView *conversationDetailsVStack;
@property (nonatomic, retain) UILabel *conversationSubtitleLabel;
@property (nonatomic, retain) UILabel *conversationTitleLabel;

- (void).cxx_destruct;
- (id)chevronLabel;
- (id)conversationDetailsVStack;
- (id)conversationSubtitleLabel;
- (id)conversationTitleLabel;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setChevronLabel:(id)arg1;
- (void)setConversationDetailsVStack:(id)arg1;
- (void)setConversationSubtitleLabel:(id)arg1;
- (void)setConversationTitleLabel:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
