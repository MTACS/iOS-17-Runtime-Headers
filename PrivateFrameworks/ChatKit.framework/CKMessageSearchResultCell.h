
@interface CKMessageSearchResultCell : CKEditableSearchResultCell <CKSearchResultCell> {
    CKAvatarView * _avatarView;
    CKTextBalloonView * _balloonView;
    UIImageView * _chevronImageView;
    CKLabel * _conversationNameLabel;
    CKDateLabel * _dateLabel;
    UIView * _groupingSeparatorView;
    bool  _isFromGroupConversation;
    bool  _isFromMe;
    NSString * _resultIdentifier;
    CKLabel * _senderLabel;
    struct CKMessageSearchResultVisibilityContext { 
        bool isGroupedResult; 
        bool isFirstResultCell; 
        bool isLastResultCell; 
        bool isLastResultInGroupCell; 
        bool shouldShowConversationName; 
        bool shouldShowSenderName; 
        bool shouldShowDate; 
        bool shouldShowSeparator; 
        double topSpacing; 
        double bottomSpacing; 
    }  _visibilityContext;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  marginInsets;
}

@property (getter=_ck_isEditing, setter=_ck_setEditing:, nonatomic) bool _ck_editing;
@property (nonatomic, retain) CKAvatarView *avatarView;
@property (nonatomic, retain) CKTextBalloonView *balloonView;
@property (nonatomic, retain) UIImageView *chevronImageView;
@property (nonatomic, retain) CKLabel *conversationNameLabel;
@property (nonatomic, retain) CKDateLabel *dateLabel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIView *groupingSeparatorView;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isFromGroupConversation;
@property (nonatomic) bool isFromMe;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } marginInsets;
@property (nonatomic, copy) NSString *resultIdentifier;
@property (nonatomic, retain) CKLabel *senderLabel;
@property (readonly) Class superclass;
@property (nonatomic) struct CKMessageSearchResultVisibilityContext { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; double x9; double x10; } visibilityContext;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)_annotatedResultStringForResult:(id)arg1 searchText:(id)arg2;
- (id)_balloonFilterForUserInterfaceStyle:(long long)arg1;
- (void)_configureAvatarForResult:(id)arg1;
- (void)_configureBalloonViewForResult:(id)arg1 searchText:(id)arg2;
- (void)_configureDateLabelForResult:(id)arg1;
- (void)_configureLabelFonts;
- (void)_configureSenderLabelForResult:(id)arg1 searchText:(id)arg2;
- (void)_internalInit;
- (void)_layoutInternalSubviews;
- (void)_proposedBalloonY:(double*)arg1 afterLayoutForView:(id)arg2;
- (id)avatarView;
- (id)balloonView;
- (id)chevronImageView;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3;
- (void)configureWithQueryResult:(id)arg1 searchText:(id)arg2 mode:(unsigned long long)arg3 visibilityContext:(struct CKMessageSearchResultVisibilityContext { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; double x9; double x10; })arg4;
- (id)conversationNameLabel;
- (id)dateLabel;
- (id)groupingSeparatorView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFromGroupConversation;
- (bool)isFromMe;
- (void)layoutSubviews;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsets;
- (void)prepareForReuse;
- (void)refreshForSearchTextIfNeeded:(id)arg1;
- (id)resultIdentifier;
- (id)senderLabel;
- (void)setAvatarView:(id)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setChevronImageView:(id)arg1;
- (void)setConversationNameLabel:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setGroupingSeparatorView:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setIsFromGroupConversation:(bool)arg1;
- (void)setIsFromMe:(bool)arg1;
- (void)setMarginInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setResultIdentifier:(id)arg1;
- (void)setSenderLabel:(id)arg1;
- (void)setVisibilityContext:(struct CKMessageSearchResultVisibilityContext { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; double x9; double x10; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CKMessageSearchResultVisibilityContext { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; double x9; double x10; })visibilityContext;

@end
