
@interface TeaUI.MenuManager : UIResponder {
    void alternateMenuItems;
    void menu;
    void menuItems;
    void stagedAlternateMenuActions;
    void stagedMenuActions;
}

- (void).cxx_destruct;
- (void)buildMenuWithBuilder:(id)arg1;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)handleAlternateMenuCommandWithSender:(id)arg1;
- (void)handleMenuCommandWithSender:(id)arg1;
- (id)init;

@end
