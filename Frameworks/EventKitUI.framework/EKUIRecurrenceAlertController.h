
@interface EKUIRecurrenceAlertController : NSObject <UIActionSheetDelegate> {
    UIAlertController * _alertController;
    id /* block */  _completionHandler;
}

@property (retain) UIAlertController *alertController;
@property (copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_cancelLocalizedString;
+ (id)_detachAllLocalizedString;
+ (id)_detachFutureLocalizedString;
+ (int)_determineChoicesForEvent:(id)arg1 options:(unsigned long long)arg2;
+ (id)deleteAlertWithOptions:(unsigned long long)arg1 forEvent:(id)arg2 stringForDeleteButton:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (id)newAlertControllerWithCompletionHandler:(id /* block */)arg1;
+ (id)presentAttachmentAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(id /* block */)arg5;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 stringForDeleteButton:(id)arg5 withCompletionHandler:(id /* block */)arg6;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvents:(id)arg3 withCompletionHandler:(id /* block */)arg4;
+ (id)presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 forEvent:(id)arg5 stringForDeleteButton:(id)arg6 withCompletionHandler:(id /* block */)arg7;
+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4 withCompletionHandler:(id /* block */)arg5;
+ (id)presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 forEvent:(id)arg5 withCompletionHandler:(id /* block */)arg6;
+ (id)presentUnsubscribeAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 withCompletionHandler:(id /* block */)arg5;
+ (id)unsubscribeAlertWithOptions:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_completeWithSelection:(unsigned long long)arg1;
- (void)_configureAlertControllerWithSourceView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 barButtonItem:(id)arg3;
- (void)_presentAttachmentsAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 barButtonItem:(id)arg3 forEvent:(id)arg4;
- (void)_presentDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 barButtonItem:(id)arg5 forEvent:(id)arg6 stringForDeleteButton:(id)arg7;
- (void)_presentDetachAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 barButtonItem:(id)arg5 forEvent:(id)arg6;
- (bool)_setupDeleteAlertForEvents:(id)arg1;
- (bool)_useSheetForViewController:(id)arg1 options:(unsigned long long)arg2;
- (id)alertController;
- (void)cancelAnimated:(bool)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)setAlertController:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setupDeleteAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2 forEvent:(id)arg3 stringForDeleteButton:(id)arg4;
- (void)setupUnsubscribeAlertWithOptions:(unsigned long long)arg1 viewController:(id)arg2;

@end
