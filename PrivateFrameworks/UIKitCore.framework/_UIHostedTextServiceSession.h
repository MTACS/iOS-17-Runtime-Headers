
@interface _UIHostedTextServiceSession : _UITextServiceSession {
    <_UIHostedTextServiceSessionDelegate> * _delegate;
}

@property (nonatomic) <_UIHostedTextServiceSessionDelegate> *delegate;

+ (id)showServiceForText:(id)arg1 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 type:(long long)arg3 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 inView:(id)arg5;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 inView:(id)arg4;
+ (id)showServiceForType:(long long)arg1 withContext:(id)arg2;

- (id)delegate;
- (void)dismissTextServiceAnimated:(bool)arg1;
- (void)remoteSessionDidDismiss;
- (void)setDelegate:(id)arg1;

@end