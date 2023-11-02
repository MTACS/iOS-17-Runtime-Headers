
@interface CSRemoteContentHostViewController : _UIRemoteViewController <SBSRemoteContentHostInterface> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    SBSRemoteContentPreferences * _contentPreferences;
    SBSRemoteContentDefinition * _definition;
    <CSRemoteContentHostDelegate> * _delegate;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, retain) SBSRemoteContentPreferences *contentPreferences;
@property (nonatomic, retain) SBSRemoteContentDefinition *definition;
@property (nonatomic) <CSRemoteContentHostDelegate> *delegate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } safeAreaForRemote;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_customContentBounds;
- (void)_fetchContentPreferences;
- (void)_fetchInlinePresentationContentFrame;
- (void)_updateContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_updateContentPreferences:(id)arg1;
- (void)configureWithDefinition:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)contentPreferences;
- (id)definition;
- (id)delegate;
- (void)didChangeStyle;
- (void)didDismissForDismissType:(long long)arg1;
- (void)getContentBoundsWithReplyBlock:(id /* block */)arg1;
- (void)hostDidChangeContentBounds;
- (void)presentAlert:(id)arg1 replyBlock:(id /* block */)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })safeAreaForRemote;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentPreferences:(id)arg1;
- (void)setDefinition:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
