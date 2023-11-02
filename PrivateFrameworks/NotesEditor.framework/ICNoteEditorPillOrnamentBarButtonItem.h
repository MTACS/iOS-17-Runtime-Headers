
@interface ICNoteEditorPillOrnamentBarButtonItem : UIBarButtonItem {
    UIToolTipInteraction * _toolTipInteraction;
    bool  _usedInPillOrnament;
}

@property (nonatomic, readonly) UIButton *button;
@property (nonatomic, retain) UIToolTipInteraction *toolTipInteraction;
@property (getter=isUsedInPillOrnament, nonatomic) bool usedInPillOrnament;

- (void).cxx_destruct;
- (id)button;
- (bool)isUsedInPillOrnament;
- (id)menu;
- (void)setAction:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setMenu:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setToolTipInteraction:(id)arg1;
- (void)setUsedInPillOrnament:(bool)arg1;
- (id)toolTipInteraction;

@end
