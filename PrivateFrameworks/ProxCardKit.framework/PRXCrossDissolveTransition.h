
@interface PRXCrossDissolveTransition : NSObject <UIViewControllerAnimatedTransitioning> {
    id /* block */  _additionalAnimations;
    long long  _cardStyle;
    struct CGSize { 
        double width; 
        double height; 
    }  _maxSize;
}

@property (nonatomic, copy) id /* block */ additionalAnimations;
@property (nonatomic) long long cardStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize { double x1; double x2; } maxSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)additionalAnimations;
- (void)animateTransition:(id)arg1;
- (long long)cardStyle;
- (struct CGSize { double x1; double x2; })maxSize;
- (void)setAdditionalAnimations:(id /* block */)arg1;
- (void)setCardStyle:(long long)arg1;
- (void)setMaxSize:(struct CGSize { double x1; double x2; })arg1;
- (double)transitionDuration:(id)arg1;

@end
