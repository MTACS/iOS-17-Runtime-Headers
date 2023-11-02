
@interface _HKOutsideTapCallback : NSObject {
    id /* block */  _outsideTapBlock;
    UIView * _view;
}

@property (nonatomic, readonly) id /* block */ outsideTapBlock;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)initWithView:(id)arg1 outsideTapBlock:(id /* block */)arg2;
- (id /* block */)outsideTapBlock;
- (id)view;

@end
