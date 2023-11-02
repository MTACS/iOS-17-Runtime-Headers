
@protocol _SFPBInvokeSiriCommand <NSObject>

@required

- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (void)setUtteranceText:(NSString *)arg1;
- (NSString *)utteranceText;

@end
