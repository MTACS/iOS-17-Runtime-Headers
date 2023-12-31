
@interface IMTranscriptEffectHelper : NSObject

+ (id)allEffectIdentifiers;
+ (bool)effectIdentifierIsFullScreenMoment:(id)arg1;
+ (bool)effectIdentifierIsImpactEffect:(id)arg1;
+ (id)findIdentifierByMathcingPartialSufix:(id)arg1;
+ (bool)identifierIsEffectIdentifier:(id)arg1;
+ (id)identifierNameMap;
+ (bool)isFeatureEnabled;
+ (id)nameForEffectIdentifier:(id)arg1;
+ (id)replayStringForEffectIdentifier:(id)arg1;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (id)sendWithStringForEffectIdentifier:(id)arg1;
+ (void)setFeatureEnabled:(bool)arg1;
+ (bool)shouldShowReplayButtonForEffectIdentifier:(id)arg1;

@end
