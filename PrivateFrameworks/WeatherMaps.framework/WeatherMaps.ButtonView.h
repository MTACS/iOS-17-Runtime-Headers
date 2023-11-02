
@interface WeatherMaps.ButtonView : UIButton {
    void actionDelegate;
    void button;
    void cornerRadius;
    void fixedHeight;
    void fixedWidth;
    void menuDelegate;
    void useLargeIcons;
}

- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (void)recognizedHover:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
