
@protocol _CDInteractionOrUncachedSentinel

@required

- (_CDInteraction *)interactionIfCached;
- (bool)isUncachedSentinel;

@end
