
@interface MFSMIMEControl : UIControl {
    bool  _canPresentMenu;
    <MFSMIMEControlDelegate> * _delegate;
}

@property (nonatomic, readonly) bool canPresentMenu;
@property (nonatomic) <MFSMIMEControlDelegate> *delegate;

- (void).cxx_destruct;
- (id)_goToSettingsAction;
- (bool)canPresentMenu;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (struct CGPoint { double x1; double x2; })menuAttachmentPointForConfiguration:(id)arg1;
- (id)menuWithOptions:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;

@end
