
@interface SBSAElementLayoutTransition : NSObject <NSCopying> {
    NSArray * _initialElementContexts;
    NSArray * _targetElementContexts;
}

@property (getter=isCollisionRequired, nonatomic, readonly) bool collisionRequired;
@property (nonatomic, readonly, copy) NSArray *initialElementContexts;
@property (getter=isLayoutChange, nonatomic, readonly) bool layoutChange;
@property (getter=isSingleElementExpansion, nonatomic, readonly) bool singleElementExpansion;
@property (nonatomic, readonly, copy) NSArray *targetElementContexts;
@property (getter=isTransitionFromCustom, nonatomic, readonly) bool transitionFromCustom;
@property (getter=isTransitionToSingleCompact, nonatomic, readonly) bool transitionToSingleCompact;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)elementWithIdentityWasOrIsSensorAttached:(id)arg1;
- (unsigned long long)hash;
- (id)initWithInitialElementContexts:(id)arg1 targetElementContext:(id)arg2;
- (id)initialElementContexts;
- (bool)isCollisionRequired;
- (bool)isEqual:(id)arg1;
- (bool)isLayoutChange;
- (bool)isSingleElementExpansion;
- (bool)isTransitionFromCustom;
- (bool)isTransitionToSingleCompact;
- (id)targetElementContexts;

@end
