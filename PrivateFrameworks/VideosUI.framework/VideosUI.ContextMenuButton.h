
@interface VideosUI.ContextMenuButton : VUIButton {
    void contextMenuInteractor;
    void lockupViewModel;
    void usesDefaultImage;
}

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithType:(unsigned long long)arg1 interfaceStyle:(unsigned long long)arg2;

@end
