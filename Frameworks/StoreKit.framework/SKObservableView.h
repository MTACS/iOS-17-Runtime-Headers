
@interface SKObservableView : UIView {
    <SKObservableViewDelegate> * _delegate;
}

@property (nonatomic) <SKObservableViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)setAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHidden:(bool)arg1;

@end
