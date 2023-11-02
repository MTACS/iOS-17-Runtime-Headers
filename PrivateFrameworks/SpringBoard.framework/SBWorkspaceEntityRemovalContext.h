
@interface SBWorkspaceEntityRemovalContext : NSObject {
    unsigned long long  _animationStyle;
    unsigned long long  _removalActionType;
}

@property (nonatomic, readonly) unsigned long long animationStyle;
@property (nonatomic, readonly) unsigned long long removalActionType;

- (unsigned long long)animationStyle;
- (id)initWithAnimationStyle:(unsigned long long)arg1 removalActionType:(unsigned long long)arg2;
- (unsigned long long)removalActionType;

@end
