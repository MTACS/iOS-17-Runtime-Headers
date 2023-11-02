
@interface _UICollectionViewAnimator : NSObject <NSCopying> {
    <_UICollectionViewAnimationContext> * _animationContext;
    id /* block */  _handler;
}

@property (nonatomic, retain) _UICollectionViewAnimationContext *animationContext;
@property (nonatomic, readonly) id /* block */ handler;

- (void).cxx_destruct;
- (id)animationContext;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)handler;
- (id)initWithHandler:(id /* block */)arg1;
- (void)setAnimationContext:(id)arg1;

@end
