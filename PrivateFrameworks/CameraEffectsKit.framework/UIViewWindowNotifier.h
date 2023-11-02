
@interface UIViewWindowNotifier : UIView {
    <UIViewWindowListener> * _windowListener;
}

@property (nonatomic) <UIViewWindowListener> *windowListener;

- (void).cxx_destruct;
- (void)setWindowListener:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (id)windowListener;

@end
