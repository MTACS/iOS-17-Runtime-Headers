
@interface MFMessageHeaderView : UIStackView <ConversationSearchOverlayAdding, MUIReusable> {
    bool  _bottomSeparatorDrawsFlushWithLeadingEdge;
    <MFMessageHeaderViewDelegate> * _delegate;
    MFMessageDisplayMetrics * _displayMetrics;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _draggableArea;
    ConversationSearchOverlayView * _findOverlayView;
    NSMutableArray * _headerBlocks;
    MFMessageHeaderViewBlock * _pinnedBlock;
    MessageHeaderViewModel * _viewModel;
}

@property (nonatomic) bool bottomSeparatorDrawsFlushWithLeadingEdge;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MFMessageHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MFMessageDisplayMetrics *displayMetrics;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } draggableArea;
@property (nonatomic, retain) ConversationSearchOverlayView *findOverlayView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *headerBlocks;
@property (nonatomic, retain) MFMessageHeaderViewBlock *pinnedBlock;
@property (readonly) Class superclass;
@property (nonatomic, retain) MessageHeaderViewModel *viewModel;

- (void).cxx_destruct;
- (id)_animationConstraintsForBlockAtIndex:(unsigned long long)arg1;
- (bool)_blockHasWhiteOrClearBackground:(id)arg1;
- (void)_layoutAnimatedWithCompletion:(id /* block */)arg1;
- (void)_updateSeparators;
- (void)addConversationSearchOverlay;
- (void)addHeaderBlock:(id)arg1 animated:(bool)arg2;
- (bool)bottomSeparatorDrawsFlushWithLeadingEdge;
- (id)delegate;
- (void)displayMessageUsingViewModel:(id)arg1;
- (id)displayMetrics;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })draggableArea;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewPrintFormatter:(id)arg2;
- (id)findOverlayView;
- (id)headerBlocks;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertHeaderBlock:(id)arg1 atIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)layoutSubviews;
- (id)pinnedBlock;
- (void)prepareForReuse;
- (void)removeAllHeaderBlocksAnimated:(bool)arg1;
- (void)removeConversationSearchOverlay;
- (void)removeHeaderBlock:(id)arg1 animated:(bool)arg2;
- (void)setBottomSeparatorDrawsFlushWithLeadingEdge:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayMetrics:(id)arg1;
- (void)setDraggableArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFindOverlayView:(id)arg1;
- (void)setHeaderBlocks:(id)arg1;
- (void)setHeaderBlocks:(id)arg1 animated:(bool)arg2;
- (void)setMessageFlags:(unsigned long long)arg1 conversationFlags:(unsigned long long)arg2;
- (void)setPinnedBlock:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end
