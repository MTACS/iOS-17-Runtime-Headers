
@interface _UIONavigationBarTitleRenamerRemoteSessionAction : _UIOClientAction

+ (id)_actionWithSettings:(id)arg1 responseHandler:(id /* block */)arg2;
+ (id)didCancelSession:(id)arg1 responseHandler:(id /* block */)arg2;
+ (id)didEndEditingActionWithSession:(id)arg1 text:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)fileRenameDidEndInSession:(id)arg1 withFinalURL:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)fileRenameDidFailInSession:(id)arg1 withError:(id)arg2 proposedName:(id)arg3 responseHandler:(id /* block */)arg4;
+ (id)shouldEndEditingActionWithSession:(id)arg1 text:(id)arg2 responseHandler:(id /* block */)arg3;
+ (id)willBeginRenamingActionWithSession:(id)arg1 text:(id)arg2 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 responseHandler:(id /* block */)arg4;

- (int)_action;
- (id)error;
- (id)finalURL;
- (void)handleClientActionToOverlayService:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (id)text;

@end
