
@interface _UITextServiceSession : NSObject <UIPopoverPresentationControllerDelegate> {
    UIView * _contextView;
    bool  _dismissed;
    id /* block */  _dismissedHandler;
    UIKeyboardSceneDelegate * _keyboardSceneDelegate;
    UIViewController * _modalViewController;
    UIResponder * _pinnedResponder;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_canShowTextServiceForType:(long long)arg1;
+ (bool)_canShowTextServices;
+ (long long)availableTextServices;
+ (bool)shouldPresentServiceInSameWindowAsView:(id)arg1;
+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;
+ (bool)textServiceIsDisplaying;
+ (id)textServiceSessionForType:(long long)arg1;

- (void).cxx_destruct;
- (void)_endSession;
- (void)dismissTextServiceAnimated:(bool)arg1;
- (id /* block */)dismissedHandler;
- (id)init;
- (id)initWithType:(long long)arg1;
- (bool)isDisplaying;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)sessionDidDismiss;
- (void)setDismissedHandler:(id /* block */)arg1;
- (long long)type;

@end
