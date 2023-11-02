
@interface WFDrawerAnimationManager : NSObject {
    WFDrawerAnimation * _heightAnimation;
    unsigned long long  _heightAnimationPushCount;
}

@property (nonatomic, readonly) WFDrawerAnimation *heightAnimation;

- (void).cxx_destruct;
- (id)defaultHeightAnimation;
- (id)heightAnimation;
- (void)popHeightAnimation;
- (void)pushHeightAnimation:(id)arg1;

@end
