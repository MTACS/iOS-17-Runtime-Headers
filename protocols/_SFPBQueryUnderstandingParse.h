
@protocol _SFPBQueryUnderstandingParse <NSObject>

@required

- (bool)hasActionTokens;
- (bool)hasCaptureDeviceTokens;
- (bool)hasEventTokens;
- (bool)hasFavoritedTokens;
- (bool)hasGenericLocationTokens;
- (bool)hasLocationTokens;
- (bool)hasMediaTypeTokens;
- (bool)hasNounTokens;
- (bool)hasPersonSenderTokens;
- (bool)hasPersonTokens;
- (bool)hasSortCriteriaTokens;
- (bool)hasSourceAppTokens;
- (bool)hasTimeTokens;
- (bool)hasUnspecifiedTokens;
- (bool)hasVisualQualityTokens;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (int)queryIntentType;
- (void)setHasActionTokens:(bool)arg1;
- (void)setHasCaptureDeviceTokens:(bool)arg1;
- (void)setHasEventTokens:(bool)arg1;
- (void)setHasFavoritedTokens:(bool)arg1;
- (void)setHasGenericLocationTokens:(bool)arg1;
- (void)setHasLocationTokens:(bool)arg1;
- (void)setHasMediaTypeTokens:(bool)arg1;
- (void)setHasNounTokens:(bool)arg1;
- (void)setHasPersonSenderTokens:(bool)arg1;
- (void)setHasPersonTokens:(bool)arg1;
- (void)setHasSortCriteriaTokens:(bool)arg1;
- (void)setHasSourceAppTokens:(bool)arg1;
- (void)setHasTimeTokens:(bool)arg1;
- (void)setHasUnspecifiedTokens:(bool)arg1;
- (void)setHasVisualQualityTokens:(bool)arg1;
- (void)setQueryIntentType:(int)arg1;

@end
