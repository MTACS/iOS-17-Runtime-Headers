
@protocol TSDMagicMoveMatching

@optional

+ (double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(TSDRep *)arg1 incomingObject:(TSDRep *)arg2 mixingTypeContext:(id <TSDMixingTypeContext>)arg3;
+ (NSArray *)magicMoveMatchesBetweenOutgoingObjects:(NSArray *)arg1 andIncomingObjects:(NSArray *)arg2 textureDescription:(TSDTextureDescription *)arg3;

@end
