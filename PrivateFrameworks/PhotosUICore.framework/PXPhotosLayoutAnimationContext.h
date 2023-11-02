
@interface PXPhotosLayoutAnimationContext : NSObject <NSCopying> {
    PXPhotosLayoutState * _fromState;
    PXPhotosLayoutState * _toState;
}

@property (nonatomic, retain) PXPhotosLayoutState *fromState;
@property (nonatomic, retain) PXPhotosLayoutState *toState;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fromState;
- (void)setFromState:(id)arg1;
- (void)setToState:(id)arg1;
- (id)toState;

@end
