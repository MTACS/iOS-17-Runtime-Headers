
@protocol _INPBIntentExecutionResult <NSObject>

@required

- (int)StringAsEncodingFormat:(NSString *)arg1;
- (NSString *)encodedIntent;
- (NSString *)encodedIntentResponse;
- (int)encodingFormat;
- (NSString *)encodingFormatAsString:(int)arg1;
- (bool)hasEncodedIntent;
- (bool)hasEncodedIntentResponse;
- (bool)hasEncodingFormat;
- (void)setEncodedIntent:(NSString *)arg1;
- (void)setEncodedIntentResponse:(NSString *)arg1;
- (void)setEncodingFormat:(int)arg1;
- (void)setHasEncodingFormat:(bool)arg1;

@end
