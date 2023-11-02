
@interface CKMessageAcknowledgmentPickerBarAccessoryView : _UIContextMenuAccessoryView {
    CKMessagePartChatItem * _chatItem;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _layoutBounds;
    CKMessageAcknowledgmentPickerBarViewController * _pickerViewController;
    bool  _visible;
}

@property (nonatomic, retain) CKMessagePartChatItem *chatItem;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } layoutBounds;
@property (nonatomic, retain) CKMessageAcknowledgmentPickerBarViewController *pickerViewController;
@property (nonatomic) bool visible;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })attachmentOffsetWithReferenceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)chatItem;
- (id)initWithChatItem:(id)arg1 layoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutBounds;
- (id)pickerViewController;
- (void)setChatItem:(id)arg1;
- (void)setLayoutBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPickerViewController:(id)arg1;
- (void)setVisible:(bool)arg1;
- (void)setVisible:(bool)arg1 animated:(bool)arg2;
- (bool)visible;

@end
