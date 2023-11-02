
@interface DDUIAction : UIAction {
    DDAction * _dd_action;
    id /* block */  _dd_handler;
}

@property (nonatomic, retain) DDAction *dd_action;
@property (nonatomic, copy) id /* block */ dd_handler;

- (void).cxx_destruct;
- (id)dd_action;
- (id /* block */)dd_handler;
- (void)dd_performAction;
- (void)dd_performActionWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDd_action:(id)arg1;
- (void)setDd_handler:(id /* block */)arg1;

@end
