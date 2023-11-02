
@interface CKOrganicAttachmentMessagePartChatItem : CKAttachmentMessagePartChatItem {
    CKOrganicImageLayoutRecipe * _layoutRecipe;
}

@property (nonatomic, retain) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void).cxx_destruct;
- (unsigned long long)balloonCorners;
- (Class)balloonViewClass;
- (Class)cellClass;
- (Class)customLayoutGroupProviderClass;
- (id)layoutRecipe;
- (unsigned long long)layoutType;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (void)setLayoutRecipe:(id)arg1;
- (bool)supportsInlineReplyTransition;

@end
