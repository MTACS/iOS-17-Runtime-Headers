
@interface _UIViewKeyValueAnimationFactoryTransition : NSObject {
    CABasicAnimation * _fromAnimation;
    CABasicAnimation * _toAnimation;
}

@property (nonatomic, retain) CABasicAnimation *fromAnimation;
@property (nonatomic, retain) CABasicAnimation *toAnimation;

- (void).cxx_destruct;
- (id)fromAnimation;
- (void)setFromAnimation:(id)arg1;
- (void)setToAnimation:(id)arg1;
- (id)toAnimation;

@end
