
@interface WFSelectableAlertButton : WFAlertButton {
    WFImage * _image;
    bool  _selected;
    bool  _stickySelection;
    NSString * _subtitle;
}

@property (nonatomic, readonly, copy) WFImage *image;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, readonly) bool stickySelection;
@property (nonatomic, readonly, copy) NSString *subtitle;

+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(bool)arg3 stickySelection:(bool)arg4 style:(long long)arg5 handler:(id /* block */)arg6 image:(id)arg7;
+ (id)buttonWithTitle:(id)arg1 subtitle:(id)arg2 selected:(bool)arg3 style:(long long)arg4 handler:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)image;
- (bool)isSelected;
- (void)setSelected:(bool)arg1;
- (bool)stickySelection;
- (id)subtitle;

@end
