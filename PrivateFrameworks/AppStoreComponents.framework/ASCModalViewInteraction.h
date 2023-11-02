
@interface ASCModalViewInteraction : NSObject {
    id /* block */  _cancelBlock;
    ASCModalViewGestureRecognizer * _cancelGestureRecognizer;
    NSMutableArray * _observers;
    UIView * _view;
}

@property (nonatomic, copy) id /* block */ cancelBlock;
@property (nonatomic, retain) ASCModalViewGestureRecognizer *cancelGestureRecognizer;
@property (nonatomic, readonly) NSMutableArray *observers;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id /* block */)cancelBlock;
- (void)cancelGestureDidChange:(id)arg1;
- (id)cancelGestureRecognizer;
- (void)dealloc;
- (id)initWithView:(id)arg1;
- (void)installWithCancelBlock:(id /* block */)arg1;
- (void)invalidate;
- (id)observers;
- (void)setCancelBlock:(id /* block */)arg1;
- (void)setCancelGestureRecognizer:(id)arg1;
- (id)view;

@end
