
@interface FeedbackCore.FBKActionMenuController : NSObject <FeedbackCore.FBKActionController> {
    void actions;
    void subtitle;
    void title;
}

- (void).cxx_destruct;
- (void)addAction:(id)arg1;
- (void)addActionWithTitle:(id)arg1 image:(id)arg2 actionHandler:(id /* block */)arg3;
- (void)attachToBarButtonItem:(id)arg1;
- (id)buildMenu;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 actions:(id)arg3;

@end
