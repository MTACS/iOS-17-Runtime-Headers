
@interface UpdatingRectValue : NSValue {
    id /* block */  _updateBlock;
}

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })CGRectValue;
- (id)initWithUpdateBlock:(id /* block */)arg1;

@end
