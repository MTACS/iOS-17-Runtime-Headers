
@interface CKNicknameIntroViewController : OBWelcomeController {
    CKNicknamePreviewView * _nicknamePreviewView;
}

@property (nonatomic, retain) CKNicknamePreviewView *nicknamePreviewView;

- (void).cxx_destruct;
- (double)_contentViewHeight;
- (id)nicknamePreviewView;
- (void)setNicknamePreviewView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
