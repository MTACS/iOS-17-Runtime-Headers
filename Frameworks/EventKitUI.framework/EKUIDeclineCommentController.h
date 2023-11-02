
@interface EKUIDeclineCommentController : NSObject {
    UIAlertController * _alertController;
    UITextField * _alertTextField;
    id /* block */  _completionBlock;
}

+ (id)_newDeclineCommentControllerWithCompletionBlock:(id /* block */)arg1;
+ (id)presentDeclineCommentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3 completionBlock:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_completeWithButton:(unsigned long long)arg1;
- (void)_presentAlertWithOrganizer:(id)arg1 currentComment:(id)arg2 viewController:(id)arg3;
- (void)dealloc;
- (void)dismissAnimated:(bool)arg1;

@end
