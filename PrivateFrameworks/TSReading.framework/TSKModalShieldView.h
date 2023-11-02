
@interface TSKModalShieldView : UIView {
    <TSKModalShieldDelegate> * mDelegate;
}

@property (nonatomic) <TSKModalShieldDelegate> *delegate;

- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
