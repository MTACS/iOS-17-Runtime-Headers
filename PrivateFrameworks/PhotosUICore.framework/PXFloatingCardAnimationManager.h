
@interface PXFloatingCardAnimationManager : NSObject {
    PXFloatingCardAnimation * _heightAnimation;
    unsigned long long  _heightAnimationPushCount;
}

@property (nonatomic, readonly) PXFloatingCardAnimation *heightAnimation;

- (void).cxx_destruct;
- (id)defaultHeightAnimation;
- (id)heightAnimation;
- (void)popHeightAnimation;
- (void)pushHeightAnimation:(id)arg1;

@end
