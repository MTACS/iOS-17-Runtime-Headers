
@interface STMenuButton : UIButton {
    <STMenuButtonDelegate> * _delegate;
}

@property <STMenuButtonDelegate> *delegate;

- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
