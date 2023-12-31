
@protocol _UIVisualEffectDiffable <NSObject, NSCopying>

@required

- (bool)canTransitionToEffect:(id)arg1;
- (id)copyForTransitionOut;
- (id)copyForTransitionToEffect:(id)arg1;
- (bool)isSameTypeOfEffect:(id)arg1;

@end
