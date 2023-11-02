
@interface _UIONavigationBarTitleRenamerConnectionAction : _UIOServerAction {
    SBSKeyboardFocusService * _kfService;
}

@property (nonatomic, retain) SBSKeyboardFocusService *kfService;

- (void).cxx_destruct;
- (bool)_addViewToHierarchyForConnection:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (void)_removeViewFromHierarchyForConnection:(id)arg1 session:(id)arg2;
- (void)_setupKeyboardEventDeferralForConnection:(id)arg1;
- (void)_teardownKeyboardEventDeferralForConnection:(id)arg1;
- (id)initWithSession:(id)arg1 action:(long long)arg2 responseHandler:(id /* block */)arg3;
- (bool)isPermitted;
- (id)kfService;
- (void)performActionFromConnection:(id)arg1;
- (void)setKfService:(id)arg1;

@end
