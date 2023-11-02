
@interface _CDUncachedSentinel : NSObject <_CDInteractionOrUncachedSentinel>

- (id)interactionIfCached;
- (bool)isUncachedSentinel;

@end
