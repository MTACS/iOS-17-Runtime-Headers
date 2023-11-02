
@protocol SFInvokeSiriCommand <SFCommand>

@required

- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setUtteranceText:(NSString *)arg1;
- (NSString *)utteranceText;

@end
