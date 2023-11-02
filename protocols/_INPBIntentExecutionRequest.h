
@protocol _INPBIntentExecutionRequest <NSObject>

@required

- (int)StringAsEncodingFormat:(NSString *)arg1;
- (_INPBAppIdentifier *)appIdentifier;
- (NSString *)encodedIntent;
- (NSString *)encodedIntentDefinition;
- (int)encodingFormat;
- (NSString *)encodingFormatAsString:(int)arg1;
- (bool)hasAppIdentifier;
- (bool)hasEncodedIntent;
- (bool)hasEncodedIntentDefinition;
- (bool)hasEncodingFormat;
- (void)setAppIdentifier:(_INPBAppIdentifier *)arg1;
- (void)setEncodedIntent:(NSString *)arg1;
- (void)setEncodedIntentDefinition:(NSString *)arg1;
- (void)setEncodingFormat:(int)arg1;
- (void)setHasEncodingFormat:(bool)arg1;

@end
